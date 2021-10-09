/********************************************************************************
** Form generated from reading UI file 'serial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_H
#define UI_SERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial
{
public:
    QAction *actionhh;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QComboBox *portBox;
    QComboBox *baudRateBox;
    QComboBox *ParityBox;
    QComboBox *DateBitsBox;
    QComboBox *stopBitsBox;
    QPushButton *openButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_1;
    QGroupBox *groupBox_2;
    QPushButton *sendTxtButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBoxHex;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser;
    QTextEdit *adc_data;
    QTextBrowser *textBrowser_4;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *Serial)
    {
        if (Serial->objectName().isEmpty())
            Serial->setObjectName(QString::fromUtf8("Serial"));
        Serial->resize(1030, 650);
        Serial->setMinimumSize(QSize(1030, 650));
        Serial->setMaximumSize(QSize(1030, 650));
        Serial->setLayoutDirection(Qt::LeftToRight);
        Serial->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(245, 245, 245);\n"
"}\n"
""));
        actionhh = new QAction(Serial);
        actionhh->setObjectName(QString::fromUtf8("actionhh"));
        centralwidget = new QWidget(Serial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 341, 381));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(240, 240, 240);\n"
"\n"
"border-width:2px;\n"
"\n"
"border-style:solid;\n"
"\n"
"border-radius: 10px;\n"
"\n"
"border-color:rgb(207, 207, 207);\n"
"\n"
"margin-top:0ex;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"subcontrol-position:top left;\n"
"\n"
"left:10px;\n"
"\n"
"margin-left:0px;\n"
"\n"
"padding:0 1px;\n"
"\n"
"}"));
        portBox = new QComboBox(groupBox);
        portBox->setObjectName(QString::fromUtf8("portBox"));
        portBox->setGeometry(QRect(140, 20, 181, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        portBox->setFont(font);
        portBox->setStyleSheet(QString::fromUtf8("QComboBox{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:4px;padding:2px 4px;border-style: outset;}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;};"));
        baudRateBox = new QComboBox(groupBox);
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->setObjectName(QString::fromUtf8("baudRateBox"));
        baudRateBox->setGeometry(QRect(140, 80, 181, 41));
        baudRateBox->setFont(font);
        baudRateBox->setStyleSheet(QString::fromUtf8("QComboBox{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:4px;padding:2px 4px;border-style: outset;}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;};"));
        ParityBox = new QComboBox(groupBox);
        ParityBox->addItem(QString());
        ParityBox->setObjectName(QString::fromUtf8("ParityBox"));
        ParityBox->setGeometry(QRect(140, 140, 181, 41));
        ParityBox->setFont(font);
        ParityBox->setStyleSheet(QString::fromUtf8("QComboBox{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:4px;padding:2px 4px;border-style: outset;}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;};"));
        DateBitsBox = new QComboBox(groupBox);
        DateBitsBox->addItem(QString());
        DateBitsBox->addItem(QString());
        DateBitsBox->addItem(QString());
        DateBitsBox->addItem(QString());
        DateBitsBox->setObjectName(QString::fromUtf8("DateBitsBox"));
        DateBitsBox->setGeometry(QRect(140, 200, 181, 41));
        DateBitsBox->setFont(font);
        DateBitsBox->setStyleSheet(QString::fromUtf8("QComboBox{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:4px;padding:2px 4px;border-style: outset;}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;};"));
        stopBitsBox = new QComboBox(groupBox);
        stopBitsBox->addItem(QString());
        stopBitsBox->addItem(QString());
        stopBitsBox->setObjectName(QString::fromUtf8("stopBitsBox"));
        stopBitsBox->setGeometry(QRect(140, 260, 181, 41));
        stopBitsBox->setFont(font);
        stopBitsBox->setStyleSheet(QString::fromUtf8("QComboBox{border:2px groove gray;border-radius:4px;padding:2px 4px;background-color: rgb(225, 225, 225);}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        openButton = new QPushButton(groupBox);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(140, 320, 181, 41));
        openButton->setFont(font);
        openButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 91, 51));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 140, 91, 51));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 91, 51));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 260, 91, 51));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 317, 91, 41));
        label_6->setStyleSheet(QString::fromUtf8("QComboBox{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:4px;padding:2px 4px;border-style: outset;}\n"
"                                       QComboBox:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QComboBox:pressed{background-color:rgb(204, 228, 247);border-style: inset;};"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(20, 20, 91, 51));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 420, 341, 211));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(240, 240, 240);\n"
"\n"
"border-width:2px;\n"
"\n"
"border-style:solid;\n"
"\n"
"border-radius: 10px;\n"
"\n"
"border-color:rgb(207, 207, 207);\n"
"\n"
"margin-top:0ex;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"subcontrol-position:top left;\n"
"\n"
"left:10px;\n"
"\n"
"margin-left:0px;\n"
"\n"
"padding:0 1px;\n"
"\n"
"}"));
        sendTxtButton = new QPushButton(groupBox_2);
        sendTxtButton->setObjectName(QString::fromUtf8("sendTxtButton"));
        sendTxtButton->setGeometry(QRect(190, 100, 121, 71));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        sendTxtButton->setFont(font1);
        sendTxtButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:8px 25px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 341, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:8px 15px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:8px 25px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 191, 117));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font1);

        verticalLayout->addWidget(checkBox);

        checkBoxHex = new QCheckBox(layoutWidget1);
        checkBoxHex->setObjectName(QString::fromUtf8("checkBoxHex"));
        checkBoxHex->setFont(font1);

        verticalLayout->addWidget(checkBoxHex);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(380, 20, 631, 381));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border-width:2px;\n"
"\n"
"\n"
"border-radius: 10px;\n"
"\n"
"border-color:rgb(221, 221, 221);\n"
"\n"
"margin-top: 0ex;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"subcontrol-position:top left;\n"
"\n"
"left:10px;\n"
"\n"
"margin-left:0px;\n"
"\n"
"padding:0 1px;\n"
"\n"
"}"));
        textBrowser = new QTextBrowser(groupBox_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 631, 251));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        adc_data = new QTextEdit(groupBox_3);
        adc_data->setObjectName(QString::fromUtf8("adc_data"));
        adc_data->setGeometry(QRect(0, 280, 461, 101));
        textBrowser_4 = new QTextBrowser(groupBox_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(470, 280, 151, 101));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(380, 420, 631, 211));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border-width:2px;\n"
"\n"
"\n"
"border-radius: 10px;\n"
"\n"
"border-color:rgb(221, 221, 221);\n"
"\n"
"margin-top:0.5ex;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"subcontrol-position:top left;\n"
"\n"
"left:10px;\n"
"\n"
"margin-left:0px;\n"
"\n"
"padding:0 1px;\n"
"\n"
"}"));
        textEdit = new QTextEdit(groupBox_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 631, 211));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        Serial->setCentralWidget(centralwidget);

        retranslateUi(Serial);

        QMetaObject::connectSlotsByName(Serial);
    } // setupUi

    void retranslateUi(QMainWindow *Serial)
    {
        Serial->setWindowTitle(QApplication::translate("Serial", "Serial", nullptr));
        actionhh->setText(QApplication::translate("Serial", "\347\254\254\344\270\200", nullptr));
        groupBox->setTitle(QString());
        baudRateBox->setItemText(0, QApplication::translate("Serial", "9600", nullptr));
        baudRateBox->setItemText(1, QApplication::translate("Serial", "19200", nullptr));
        baudRateBox->setItemText(2, QApplication::translate("Serial", "38400", nullptr));
        baudRateBox->setItemText(3, QApplication::translate("Serial", "57600", nullptr));
        baudRateBox->setItemText(4, QApplication::translate("Serial", "115200", nullptr));

        ParityBox->setItemText(0, QApplication::translate("Serial", "None", nullptr));

        DateBitsBox->setItemText(0, QApplication::translate("Serial", "8", nullptr));
        DateBitsBox->setItemText(1, QApplication::translate("Serial", "7", nullptr));
        DateBitsBox->setItemText(2, QApplication::translate("Serial", "6", nullptr));
        DateBitsBox->setItemText(3, QApplication::translate("Serial", "5", nullptr));

        stopBitsBox->setItemText(0, QApplication::translate("Serial", "1", nullptr));
        stopBitsBox->setItemText(1, QApplication::translate("Serial", "2", nullptr));

        openButton->setText(QApplication::translate("Serial", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Serial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\263\242\347\211\271\347\216\207</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Serial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\240\241\351\252\214\344\275\215</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Serial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\225\260\346\215\256\344\275\215</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Serial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\201\234\346\255\242\344\275\215</span></p></body></html>", nullptr));
        label_6->setText(QString());
        label_1->setText(QApplication::translate("Serial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\344\270\262\345\217\243\345\217\267</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        sendTxtButton->setText(QApplication::translate("Serial", "\345\217\221\351\200\201\346\226\207\346\234\254", nullptr));
        pushButton_2->setText(QApplication::translate("Serial", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        pushButton_3->setText(QApplication::translate("Serial", "\346\232\202\345\201\234\346\230\276\347\244\272", nullptr));
        checkBox->setText(QApplication::translate("Serial", "\350\207\252\345\212\250\346\270\205\347\251\272", nullptr));
        checkBoxHex->setText(QApplication::translate("Serial", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        groupBox_3->setTitle(QString());
        groupBox_4->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
