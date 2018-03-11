/********************************************************************************
** Form generated from reading UI file 'qtcpclienttest.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCPCLIENTTEST_H
#define UI_QTCPCLIENTTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QDockWidget>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTcpClientTestClass
{
public:
    QAction *action_Connect;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QListView *listView_msg;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Port;
    QCheckBox *checkBox_SSL;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_globalFile;
    QToolButton *toolButton_brFile;
    QLabel *label_3;
    QDial *dial;
    QLCDNumber *lcdNumber;
    QLabel *label_load;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *QTcpClientTestClass)
    {
        if (QTcpClientTestClass->objectName().isEmpty())
            QTcpClientTestClass->setObjectName(QString::fromUtf8("QTcpClientTestClass"));
        QTcpClientTestClass->resize(647, 482);
        action_Connect = new QAction(QTcpClientTestClass);
        action_Connect->setObjectName(QString::fromUtf8("action_Connect"));
        action_Connect->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QTcpClientTest/Resources/cn5.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/QTcpClientTest/Resources/cn6.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Connect->setIcon(icon);
        actionExit = new QAction(QTcpClientTestClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QTcpClientTest/Resources/27_Martin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        centralWidget = new QWidget(QTcpClientTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listView_msg = new QListView(groupBox);
        listView_msg->setObjectName(QString::fromUtf8("listView_msg"));
        listView_msg->setAlternatingRowColors(true);

        horizontalLayout_3->addWidget(listView_msg);


        horizontalLayout_5->addWidget(groupBox);

        QTcpClientTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTcpClientTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 19));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        QTcpClientTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTcpClientTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        QTcpClientTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTcpClientTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QTcpClientTestClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(QTcpClientTestClass);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_ip = new QLineEdit(dockWidgetContents);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));

        horizontalLayout->addWidget(lineEdit_ip);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Port = new QLineEdit(dockWidgetContents);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));

        horizontalLayout_2->addWidget(lineEdit_Port);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBox_SSL = new QCheckBox(dockWidgetContents);
        checkBox_SSL->setObjectName(QString::fromUtf8("checkBox_SSL"));

        verticalLayout->addWidget(checkBox_SSL);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_globalFile = new QLineEdit(dockWidgetContents);
        lineEdit_globalFile->setObjectName(QString::fromUtf8("lineEdit_globalFile"));

        horizontalLayout_4->addWidget(lineEdit_globalFile);

        toolButton_brFile = new QToolButton(dockWidgetContents);
        toolButton_brFile->setObjectName(QString::fromUtf8("toolButton_brFile"));

        horizontalLayout_4->addWidget(toolButton_brFile);


        verticalLayout->addLayout(horizontalLayout_4);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        dial = new QDial(dockWidgetContents);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimumSize(QSize(128, 128));
        dial->setMinimum(2);
        dial->setMaximum(256);
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(dial);

        lcdNumber = new QLCDNumber(dockWidgetContents);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(lcdNumber);

        label_load = new QLabel(dockWidgetContents);
        label_load->setObjectName(QString::fromUtf8("label_load"));

        verticalLayout->addWidget(label_load);

        horizontalSlider = new QSlider(dockWidgetContents);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1024);
        horizontalSlider->setMaximum(8192);
        horizontalSlider->setValue(4096);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(256);

        verticalLayout->addWidget(horizontalSlider);

        verticalSpacer = new QSpacerItem(20, 232, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        dockWidget->setWidget(dockWidgetContents);
        QTcpClientTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Connect);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        mainToolBar->addAction(action_Connect);

        retranslateUi(QTcpClientTestClass);
        QObject::connect(actionExit, SIGNAL(triggered()), QTcpClientTestClass, SLOT(close()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(QTcpClientTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTcpClientTestClass)
    {
        QTcpClientTestClass->setWindowTitle(QApplication::translate("QTcpClientTestClass", "QTcpClientTest", 0, QApplication::UnicodeUTF8));
        action_Connect->setText(QApplication::translate("QTcpClientTestClass", "&Connect", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("QTcpClientTestClass", "E&xit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QTcpClientTestClass", "Message", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("QTcpClientTestClass", "&File", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("QTcpClientTestClass", "General", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("QTcpClientTestClass", "Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QTcpClientTestClass", "IP", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QTcpClientTestClass", "Port", 0, QApplication::UnicodeUTF8));
        checkBox_SSL->setText(QApplication::translate("QTcpClientTestClass", "SSL(Need Certs)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QTcpClientTestClass", "Global UUID file", 0, QApplication::UnicodeUTF8));
        toolButton_brFile->setText(QApplication::translate("QTcpClientTestClass", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QTcpClientTestClass", "Simulation Clients Max", 0, QApplication::UnicodeUTF8));
        label_load->setText(QApplication::translate("QTcpClientTestClass", "Payload mean size", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QTcpClientTestClass: public Ui_QTcpClientTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCPCLIENTTEST_H
