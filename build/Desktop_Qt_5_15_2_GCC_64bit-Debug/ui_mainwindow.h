/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPlainTextEdit *terminalLineEdit;
    QGroupBox *groupBox_3;
    QPushButton *baglantiKesButon;
    QPushButton *baglantiKurButon;
    QLabel *portLabel;
    QLineEdit *ipLineEdit;
    QLineEdit *portLineEdit;
    QLabel *ipLabel;
    QLabel *durumLabel;
    QGroupBox *groupBox_2;
    QLineEdit *mesajGonderLineEdit;
    QPushButton *mesajGonderButon;
    QLabel *mesajLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(600, 305);
        MainWindow->setMinimumSize(QSize(600, 305));
        MainWindow->setMaximumSize(QSize(600, 305));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconlar/BasicLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 17);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 9, 331, 282));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        terminalLineEdit = new QPlainTextEdit(groupBox);
        terminalLineEdit->setObjectName(QString::fromUtf8("terminalLineEdit"));
        terminalLineEdit->setGeometry(QRect(10, 20, 311, 251));
        terminalLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(67, 202, 0);"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 9, 241, 151));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        baglantiKesButon = new QPushButton(groupBox_3);
        baglantiKesButon->setObjectName(QString::fromUtf8("baglantiKesButon"));
        baglantiKesButon->setGeometry(QRect(131, 80, 81, 24));
        baglantiKesButon->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        baglantiKurButon = new QPushButton(groupBox_3);
        baglantiKurButon->setObjectName(QString::fromUtf8("baglantiKurButon"));
        baglantiKurButon->setEnabled(true);
        baglantiKurButon->setGeometry(QRect(50, 80, 75, 24));
        baglantiKurButon->setFocusPolicy(Qt::NoFocus);
        baglantiKurButon->setContextMenuPolicy(Qt::NoContextMenu);
        baglantiKurButon->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 0);"));
        baglantiKurButon->setFlat(false);
        portLabel = new QLabel(groupBox_3);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setGeometry(QRect(10, 56, 28, 16));
        ipLineEdit = new QLineEdit(groupBox_3);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setGeometry(QRect(50, 22, 161, 22));
        portLineEdit = new QLineEdit(groupBox_3);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(50, 51, 161, 22));
        ipLabel = new QLabel(groupBox_3);
        ipLabel->setObjectName(QString::fromUtf8("ipLabel"));
        ipLabel->setGeometry(QRect(10, 27, 16, 16));
        durumLabel = new QLabel(groupBox_3);
        durumLabel->setObjectName(QString::fromUtf8("durumLabel"));
        durumLabel->setGeometry(QRect(10, 120, 221, 20));
        QFont font;
        font.setPointSize(8);
        durumLabel->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 241, 121));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        mesajGonderLineEdit = new QLineEdit(groupBox_2);
        mesajGonderLineEdit->setObjectName(QString::fromUtf8("mesajGonderLineEdit"));
        mesajGonderLineEdit->setGeometry(QRect(20, 50, 191, 31));
        mesajGonderButon = new QPushButton(groupBox_2);
        mesajGonderButon->setObjectName(QString::fromUtf8("mesajGonderButon"));
        mesajGonderButon->setGeometry(QRect(60, 90, 111, 24));
        mesajGonderButon->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 0);\n"
"color: rgb(0, 0, 0);"));
        mesajLabel = new QLabel(groupBox_2);
        mesajLabel->setObjectName(QString::fromUtf8("mesajLabel"));
        mesajLabel->setGeometry(QRect(90, 20, 55, 20));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        baglantiKesButon->setDefault(true);
        baglantiKurButon->setDefault(true);
        mesajGonderButon->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TCP/IP Client", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Terminal", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TCP/IP Ba\304\237lant\304\261 Ayarlar\304\261", nullptr));
        baglantiKesButon->setText(QCoreApplication::translate("MainWindow", "Ba\304\237lant\304\261y\304\261 Kes", nullptr));
        baglantiKurButon->setText(QCoreApplication::translate("MainWindow", "Ba\304\237lan", nullptr));
        portLabel->setText(QCoreApplication::translate("MainWindow", "Port :", nullptr));
        ipLabel->setText(QCoreApplication::translate("MainWindow", "IP :", nullptr));
        durumLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Mesaj G\303\266nder", nullptr));
        mesajGonderButon->setText(QCoreApplication::translate("MainWindow", "G\303\266nder", nullptr));
        mesajLabel->setText(QCoreApplication::translate("MainWindow", "Mesaj\304\261n\304\261z :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
