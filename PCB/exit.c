#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
void pre_exit(int status){
   if(WIFEXITED(status)){
     printf("normal termination,eixt status = %d\n",WIFEXITED(status))
    }else if(WIFSIGNALED(status)){
     printf("abnormal termination,signal number = %d%s\n",WIFSIGNALED(status),
#ifdef   WCOREDUMP
     WCOREDUMP(status) ? " (core file generated)":"");
#else     ""); 
#endif    
    }
    else if(WIFSTOPPED(status))
	printf("child stopped,signal number = %d\n",WIFSTOPPED(status));
}
int main(){
  pid_t pid;
  int status;
  if((pid = fork())<0){
     perror("fork error");
   }else if(pid==0)
	exit(7);
  if(wait(&status)!=pid){
   perror("wait error");
   }else{
    pre_exit(status)
   }
   if((pid = fork())<0){
   perror("fork error");
   }else if(pid==0){
    abort();
    }

   if(wait(&status)!=pid){
   perror("wait error");
   }else{
   pre_exit(status);
   }

   if((pid = fork())!=0){
   perror("fork error");
   }else if(pid==0){
   status/=0;
   }

   if(wait(&status)!= pid){
   perror("wait error");
   }else{
  pre_exit(status);
   }
 return 0;
}
