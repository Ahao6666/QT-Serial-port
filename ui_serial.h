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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial
{
public:
    QAction *actionhh;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
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
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QCheckBox *checkBoxHex;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QTextEdit *adc_data;
    QGroupBox *groupBox_6;
    QTableWidget *qTableWidget;
    QPushButton *pushButton_tab2_save;
    QPushButton *pushButton_tab2_clear;
    QWidget *tab_4;
    QGroupBox *groupBox_7;
    QTableWidget *table_convert;
    QPushButton *pushButton_tab3_clear;
    QPushButton *pushButton_tab3_save;
    QWidget *tab_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_chart;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *ADC0;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *ADC1;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *ADC2;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *ADC3;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *ADC4;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *ADC5;

    void setupUi(QMainWindow *Serial)
    {
        if (Serial->objectName().isEmpty())
            Serial->setObjectName(QString::fromUtf8("Serial"));
        Serial->resize(1150, 660);
        Serial->setMinimumSize(QSize(1150, 660));
        Serial->setMaximumSize(QSize(1150, 660));
        Serial->setLayoutDirection(Qt::LeftToRight);
        Serial->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(245, 245, 245);\n"
"}\n"
""));
        actionhh = new QAction(Serial);
        actionhh->setObjectName(QString::fromUtf8("actionhh"));
        centralwidget = new QWidget(Serial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1121, 651));
        tabWidget->setIconSize(QSize(30, 20));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 341, 381));
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
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 410, 341, 211));
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
        sendTxtButton->setFont(font);
        sendTxtButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:8px 25px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 338, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
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
        layoutWidget1->setGeometry(QRect(31, 86, 103, 121));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::LabelRole, verticalSpacer);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox);

        checkBoxHex = new QCheckBox(layoutWidget1);
        checkBoxHex->setObjectName(QString::fromUtf8("checkBoxHex"));
        checkBoxHex->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBoxHex);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setGeometry(QRect(380, 10, 721, 381));
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
        textBrowser->setGeometry(QRect(0, 0, 721, 381));
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
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setEnabled(true);
        groupBox_4->setGeometry(QRect(380, 410, 721, 211));
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
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(0, 0, 721, 211));
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
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 341, 501));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        adc_data = new QTextEdit(groupBox_5);
        adc_data->setObjectName(QString::fromUtf8("adc_data"));
        adc_data->setGeometry(QRect(0, 0, 341, 501));
        adc_data->setLayoutDirection(Qt::LeftToRight);
        adc_data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(370, 10, 731, 501));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        qTableWidget = new QTableWidget(groupBox_6);
        qTableWidget->setObjectName(QString::fromUtf8("qTableWidget"));
        qTableWidget->setGeometry(QRect(0, 0, 731, 501));
        qTableWidget->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"selection-background-color: darkgray;"));
        pushButton_tab2_save = new QPushButton(tab_2);
        pushButton_tab2_save->setObjectName(QString::fromUtf8("pushButton_tab2_save"));
        pushButton_tab2_save->setGeometry(QRect(930, 540, 111, 51));
        pushButton_tab2_save->setFont(font);
        pushButton_tab2_save->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        pushButton_tab2_clear = new QPushButton(tab_2);
        pushButton_tab2_clear->setObjectName(QString::fromUtf8("pushButton_tab2_clear"));
        pushButton_tab2_clear->setGeometry(QRect(760, 540, 111, 51));
        pushButton_tab2_clear->setFont(font);
        pushButton_tab2_clear->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 10, 1081, 521));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
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
        table_convert = new QTableWidget(groupBox_7);
        table_convert->setObjectName(QString::fromUtf8("table_convert"));
        table_convert->setGeometry(QRect(-5, 1, 1081, 521));
        pushButton_tab3_clear = new QPushButton(tab_4);
        pushButton_tab3_clear->setObjectName(QString::fromUtf8("pushButton_tab3_clear"));
        pushButton_tab3_clear->setGeometry(QRect(740, 560, 111, 51));
        pushButton_tab3_clear->setFont(font);
        pushButton_tab3_clear->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        pushButton_tab3_save = new QPushButton(tab_4);
        pushButton_tab3_save->setObjectName(QString::fromUtf8("pushButton_tab3_save"));
        pushButton_tab3_save->setGeometry(QRect(900, 560, 111, 51));
        pushButton_tab3_save->setFont(font);
        pushButton_tab3_save->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;padding:1px 4px;border-style: outset;}\n"
"                                       QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"                                       QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}"));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayoutWidget = new QWidget(tab_3);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 1061, 531));
        horizontalLayout_chart = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_chart->setObjectName(QString::fromUtf8("horizontalLayout_chart"));
        horizontalLayout_chart->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 590, 701, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ADC0 = new QCheckBox(layoutWidget2);
        ADC0->setObjectName(QString::fromUtf8("ADC0"));

        horizontalLayout_2->addWidget(ADC0);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        ADC1 = new QCheckBox(layoutWidget2);
        ADC1->setObjectName(QString::fromUtf8("ADC1"));

        horizontalLayout_2->addWidget(ADC1);

        horizontalSpacer_6 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        ADC2 = new QCheckBox(layoutWidget2);
        ADC2->setObjectName(QString::fromUtf8("ADC2"));

        horizontalLayout_2->addWidget(ADC2);

        horizontalSpacer_7 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        ADC3 = new QCheckBox(layoutWidget2);
        ADC3->setObjectName(QString::fromUtf8("ADC3"));

        horizontalLayout_2->addWidget(ADC3);

        horizontalSpacer_8 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        ADC4 = new QCheckBox(layoutWidget2);
        ADC4->setObjectName(QString::fromUtf8("ADC4"));

        horizontalLayout_2->addWidget(ADC4);

        horizontalSpacer_9 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        ADC5 = new QCheckBox(layoutWidget2);
        ADC5->setObjectName(QString::fromUtf8("ADC5"));

        horizontalLayout_2->addWidget(ADC5);

        tabWidget->addTab(tab_3, QString());
        Serial->setCentralWidget(centralwidget);

        retranslateUi(Serial);

        tabWidget->setCurrentIndex(2);


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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Serial", "\346\225\260\346\215\256\346\216\245\346\224\266", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_6->setTitle(QString());
        pushButton_tab2_save->setText(QApplication::translate("Serial", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        pushButton_tab2_clear->setText(QApplication::translate("Serial", "\346\270\205\351\231\244\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Serial", "\346\225\260\346\215\256\345\244\204\347\220\206", nullptr));
        groupBox_7->setTitle(QString());
        pushButton_tab3_clear->setText(QApplication::translate("Serial", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        pushButton_tab3_save->setText(QApplication::translate("Serial", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Serial", "\346\225\260\346\215\256\350\275\254\346\215\242", nullptr));
        ADC0->setText(QApplication::translate("Serial", "ADC0", nullptr));
        ADC1->setText(QApplication::translate("Serial", "ADC1", nullptr));
        ADC2->setText(QApplication::translate("Serial", "ADC2", nullptr));
        ADC3->setText(QApplication::translate("Serial", "ADC3", nullptr));
        ADC4->setText(QApplication::translate("Serial", "ADC4", nullptr));
        ADC5->setText(QApplication::translate("Serial", "ADC5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Serial", "\345\233\276\345\203\217\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
