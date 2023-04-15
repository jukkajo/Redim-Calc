#ifndef VER1GUI_H
#define VER1GUI_H

void validateInputsCaller(QList<QPair<QString, QString>> inputList);
void fillGenericValues1();
void fillGenericValues2();

// @ Jukka J
// Created: 03.04.2023
// Last modification: 15.04.2023

// GUI for Basic LOX-Ethanol rocket engine combustion chamber and nozzle dimension calculator.

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>


QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *line_8;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_108;
    QLCDNumber *lcdNumber_39;
    QFrame *line_7;
    QLabel *label;
    QFrame *line_6;
    QFrame *line_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_109;
    QLCDNumber *lcdNumber_40;
    QFrame *line_11;
    QFrame *line_9;
    QFrame *line_2;
    QFrame *line_14;
    QFrame *line_13;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_111;
    QLCDNumber *lcdNumber_42;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_112;
    QFormLayout *formLayout_17;
    QLineEdit *lineEdit_44;
    QLabel *label_113;
    QLineEdit *lineEdit_45;
    QLabel *label_114;
    QLabel *label_115;
    QLabel *label_116;
    QFormLayout *formLayout_18;
    QLineEdit *lineEdit_46;
    QLabel *label_117;
    QLineEdit *lineEdit_47;
    QLabel *label_118;
    QLineEdit *lineEdit_48;
    QLabel *label_120;
    QCheckBox *checkBox_12;
    QLabel *label_119;
    QLabel *label_121;
    QFormLayout *formLayout_19;
    QLineEdit *lineEdit_49;
    QLabel *label_122;
    QLineEdit *lineEdit_50;
    QLineEdit *lineEdit_51;
    QLabel *label_123;
    QCheckBox *checkBox_13;
    QLabel *label_124;
    QLabel *label_125;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_126;
    QLCDNumber *lcdNumber_37;
    QPushButton *pushButton;
    QFrame *line_16;
    QFrame *line_3;
    QFrame *line_17;
    QFrame *line_19;
    QFrame *line_20;
    QFrame *line_22;
    QFrame *line_23;
    QFrame *line_15;
    QFrame *line_4;
    QFrame *line_21;
    QLabel *label_2;
    QFrame *line_5;
    QFrame *line_12;
    QFrame *line_24;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_107;
    QLCDNumber *lcdNumber_41;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_110;
    QLCDNumber *lcdNumber_38;
    QFrame *line_52;
    QFrame *line_53;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_39;
    QLCDNumber *lcdNumber_44;
    QLabel *label_128;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_40;
    QLCDNumber *lcdNumber_45;
    QLabel *label_129;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_41;
    QLCDNumber *lcdNumber_46;
    QLabel *label_130;
    QFrame *line_18;
    QFrame *line_25;
    QFrame *line_26;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_29;
    QFrame *line_30;
    QFrame *line_31;
    QFrame *line_32;
    QFrame *line_33;
    QFrame *line_34;
    QFrame *line_35;
    QFrame *line_36;
    QFrame *line_37;
    QFrame *line_38;
    QFrame *line_39;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_43;
    QLCDNumber *lcdNumber_48;
    QLabel *label_132;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_44;
    QLCDNumber *lcdNumber_49;
    QLabel *label_133;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_42;
    QLCDNumber *lcdNumber_47;
    QLabel *label_131;
    QFrame *line_41;
    QFrame *line_42;
    QFrame *line_43;
    QFrame *line_44;
    QFrame *line_45;
    QFrame *line_46;
    QFrame *line_47;
    QLabel *label_7;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_46;
    QLCDNumber *lcdNumber_51;
    QLabel *label_135;
    QFrame *line_40;
    QFrame *line_48;
    QFrame *line_49;
    QFrame *line_50;
    QFrame *line_51;
    QWidget *tab_3;
    QWidget *tab_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1419, 816);
        QFont font;
        font.setFamily(QString::fromUtf8("Nexa"));
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white; "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1411, 791));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("color: black;"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        line_8 = new QFrame(tab);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(610, 120, 5, 233));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy1);
        line_8->setMinimumSize(QSize(5, 233));
        line_8->setMaximumSize(QSize(5, 232));
        line_8->setStyleSheet(QString::fromUtf8("background-color: #923A33; z-index: 2;"));
        line_8->setLineWidth(0);
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 150, 518, 41));
        horizontalLayout_33 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        label_108 = new QLabel(horizontalLayoutWidget_3);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        sizePolicy1.setHeightForWidth(label_108->sizePolicy().hasHeightForWidth());
        label_108->setSizePolicy(sizePolicy1);
        label_108->setMinimumSize(QSize(355, 39));
        label_108->setMaximumSize(QSize(355, 39));
        label_108->setFont(font);
        label_108->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_33->addWidget(label_108);

        lcdNumber_39 = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_39->setObjectName(QString::fromUtf8("lcdNumber_39"));
        sizePolicy1.setHeightForWidth(lcdNumber_39->sizePolicy().hasHeightForWidth());
        lcdNumber_39->setSizePolicy(sizePolicy1);
        lcdNumber_39->setMinimumSize(QSize(155, 39));
        lcdNumber_39->setMaximumSize(QSize(155, 39));
        lcdNumber_39->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_39->setDigitCount(9);

        horizontalLayout_33->addWidget(lcdNumber_39);

        line_7 = new QFrame(tab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(520, 170, 60, 5));
        sizePolicy1.setHeightForWidth(line_7->sizePolicy().hasHeightForWidth());
        line_7->setSizePolicy(sizePolicy1);
        line_7->setMinimumSize(QSize(60, 5));
        line_7->setMaximumSize(QSize(60, 5));
        line_7->setStyleSheet(QString::fromUtf8("background-color: #3E638A;"));
        line_7->setFrameShadow(QFrame::Sunken);
        line_7->setLineWidth(0);
        line_7->setFrameShape(QFrame::HLine);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 160, 281, 441));
        label->setStyleSheet(QString::fromUtf8("z-index: 1;"));
        label->setPixmap(QPixmap(QString::fromUtf8("cc.png")));
        line_6 = new QFrame(tab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(580, 170, 5, 304));
        sizePolicy1.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy1);
        line_6->setMinimumSize(QSize(5, 304));
        line_6->setMaximumSize(QSize(5, 304));
        line_6->setStyleSheet(QString::fromUtf8("background-color: #3E638A; z-index: 2;"));
        line_6->setLineWidth(0);
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(tab);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(640, 80, 5, 180));
        sizePolicy1.setHeightForWidth(line_10->sizePolicy().hasHeightForWidth());
        line_10->setSizePolicy(sizePolicy1);
        line_10->setMinimumSize(QSize(5, 180));
        line_10->setMaximumSize(QSize(5, 180));
        line_10->setStyleSheet(QString::fromUtf8("background-color: #7D9B79"));
        line_10->setLineWidth(0);
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 518, 41));
        horizontalLayout_34 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        label_109 = new QLabel(horizontalLayoutWidget);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        sizePolicy1.setHeightForWidth(label_109->sizePolicy().hasHeightForWidth());
        label_109->setSizePolicy(sizePolicy1);
        label_109->setMinimumSize(QSize(355, 39));
        label_109->setMaximumSize(QSize(355, 39));
        label_109->setFont(font);
        label_109->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_34->addWidget(label_109);

        lcdNumber_40 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_40->setObjectName(QString::fromUtf8("lcdNumber_40"));
        sizePolicy1.setHeightForWidth(lcdNumber_40->sizePolicy().hasHeightForWidth());
        lcdNumber_40->setSizePolicy(sizePolicy1);
        lcdNumber_40->setMinimumSize(QSize(155, 39));
        lcdNumber_40->setMaximumSize(QSize(155, 39));
        lcdNumber_40->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_40->setDigitCount(9);

        horizontalLayout_34->addWidget(lcdNumber_40);

        line_11 = new QFrame(tab);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(520, 70, 412, 5));
        sizePolicy1.setHeightForWidth(line_11->sizePolicy().hasHeightForWidth());
        line_11->setSizePolicy(sizePolicy1);
        line_11->setMinimumSize(QSize(412, 5));
        line_11->setMaximumSize(QSize(412, 5));
        line_11->setStyleSheet(QString::fromUtf8("background-color: #f5c211;"));
        line_11->setFrameShadow(QFrame::Sunken);
        line_11->setLineWidth(0);
        line_11->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(tab);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(520, 120, 90, 5));
        sizePolicy1.setHeightForWidth(line_9->sizePolicy().hasHeightForWidth());
        line_9->setSizePolicy(sizePolicy1);
        line_9->setMinimumSize(QSize(90, 5));
        line_9->setMaximumSize(QSize(90, 5));
        line_9->setStyleSheet(QString::fromUtf8("background-color: #923A33;"));
        line_9->setFrameShadow(QFrame::Sunken);
        line_9->setLineWidth(0);
        line_9->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(580, 470, 148, 5));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(148, 5));
        line_2->setMaximumSize(QSize(119, 5));
        line_2->setStyleSheet(QString::fromUtf8("background-color: #3E638A; z-index: 2;"));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);
        line_14 = new QFrame(tab);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(1260, 20, 5, 520));
        sizePolicy1.setHeightForWidth(line_14->sizePolicy().hasHeightForWidth());
        line_14->setSizePolicy(sizePolicy1);
        line_14->setMinimumSize(QSize(5, 520));
        line_14->setMaximumSize(QSize(5, 520));
        line_14->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_14->setLineWidth(0);
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(tab);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(640, 20, 5, 45));
        sizePolicy1.setHeightForWidth(line_13->sizePolicy().hasHeightForWidth());
        line_13->setSizePolicy(sizePolicy1);
        line_13->setMinimumSize(QSize(5, 45));
        line_13->setMaximumSize(QSize(5, 45));
        line_13->setStyleSheet(QString::fromUtf8("background-color: #7D9B79"));
        line_13->setLineWidth(0);
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 518, 41));
        horizontalLayout_36 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);
        label_111 = new QLabel(horizontalLayoutWidget_2);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        sizePolicy1.setHeightForWidth(label_111->sizePolicy().hasHeightForWidth());
        label_111->setSizePolicy(sizePolicy1);
        label_111->setMinimumSize(QSize(355, 39));
        label_111->setMaximumSize(QSize(355, 39));
        label_111->setFont(font);
        label_111->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_36->addWidget(label_111);

        lcdNumber_42 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_42->setObjectName(QString::fromUtf8("lcdNumber_42"));
        sizePolicy1.setHeightForWidth(lcdNumber_42->sizePolicy().hasHeightForWidth());
        lcdNumber_42->setSizePolicy(sizePolicy1);
        lcdNumber_42->setMinimumSize(QSize(155, 39));
        lcdNumber_42->setMaximumSize(QSize(155, 39));
        lcdNumber_42->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_42->setDigitCount(9);

        horizontalLayout_36->addWidget(lcdNumber_42);

        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 250, 575, 512));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_112 = new QLabel(verticalLayoutWidget);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        sizePolicy1.setHeightForWidth(label_112->sizePolicy().hasHeightForWidth());
        label_112->setSizePolicy(sizePolicy1);
        label_112->setMinimumSize(QSize(200, 30));
        label_112->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nexa"));
        font1.setBold(true);
        font1.setItalic(false);
        label_112->setFont(font1);
        label_112->setStyleSheet(QString::fromUtf8("color: red; font: bold;"));

        verticalLayout_6->addWidget(label_112);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        lineEdit_44 = new QLineEdit(verticalLayoutWidget);
        lineEdit_44->setObjectName(QString::fromUtf8("lineEdit_44"));
        sizePolicy1.setHeightForWidth(lineEdit_44->sizePolicy().hasHeightForWidth());
        lineEdit_44->setSizePolicy(sizePolicy1);

        formLayout_17->setWidget(1, QFormLayout::LabelRole, lineEdit_44);

        label_113 = new QLabel(verticalLayoutWidget);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        sizePolicy1.setHeightForWidth(label_113->sizePolicy().hasHeightForWidth());
        label_113->setSizePolicy(sizePolicy1);
        label_113->setMinimumSize(QSize(375, 30));
        label_113->setMaximumSize(QSize(375, 30));
        label_113->setFont(font);
        label_113->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_17->setWidget(1, QFormLayout::FieldRole, label_113);

        lineEdit_45 = new QLineEdit(verticalLayoutWidget);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));
        sizePolicy1.setHeightForWidth(lineEdit_45->sizePolicy().hasHeightForWidth());
        lineEdit_45->setSizePolicy(sizePolicy1);

        formLayout_17->setWidget(2, QFormLayout::LabelRole, lineEdit_45);

        label_114 = new QLabel(verticalLayoutWidget);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        sizePolicy1.setHeightForWidth(label_114->sizePolicy().hasHeightForWidth());
        label_114->setSizePolicy(sizePolicy1);
        label_114->setMinimumSize(QSize(375, 30));
        label_114->setMaximumSize(QSize(375, 30));
        label_114->setFont(font);
        label_114->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_17->setWidget(2, QFormLayout::FieldRole, label_114);


        verticalLayout_6->addLayout(formLayout_17);

        label_115 = new QLabel(verticalLayoutWidget);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        sizePolicy1.setHeightForWidth(label_115->sizePolicy().hasHeightForWidth());
        label_115->setSizePolicy(sizePolicy1);
        label_115->setMinimumSize(QSize(420, 30));
        label_115->setMaximumSize(QSize(420, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nexa"));
        font2.setPointSize(12);
        font2.setBold(true);
        label_115->setFont(font2);
        label_115->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_6->addWidget(label_115);

        label_116 = new QLabel(verticalLayoutWidget);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        sizePolicy1.setHeightForWidth(label_116->sizePolicy().hasHeightForWidth());
        label_116->setSizePolicy(sizePolicy1);
        label_116->setMinimumSize(QSize(200, 30));
        label_116->setMaximumSize(QSize(200, 30));
        label_116->setFont(font1);
        label_116->setStyleSheet(QString::fromUtf8("color: red; font: bold;"));

        verticalLayout_6->addWidget(label_116);

        formLayout_18 = new QFormLayout();
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        lineEdit_46 = new QLineEdit(verticalLayoutWidget);
        lineEdit_46->setObjectName(QString::fromUtf8("lineEdit_46"));
        sizePolicy1.setHeightForWidth(lineEdit_46->sizePolicy().hasHeightForWidth());
        lineEdit_46->setSizePolicy(sizePolicy1);

        formLayout_18->setWidget(0, QFormLayout::LabelRole, lineEdit_46);

        label_117 = new QLabel(verticalLayoutWidget);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        sizePolicy1.setHeightForWidth(label_117->sizePolicy().hasHeightForWidth());
        label_117->setSizePolicy(sizePolicy1);
        label_117->setMinimumSize(QSize(375, 30));
        label_117->setMaximumSize(QSize(375, 30));
        label_117->setFont(font);
        label_117->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_18->setWidget(0, QFormLayout::FieldRole, label_117);

        lineEdit_47 = new QLineEdit(verticalLayoutWidget);
        lineEdit_47->setObjectName(QString::fromUtf8("lineEdit_47"));
        sizePolicy1.setHeightForWidth(lineEdit_47->sizePolicy().hasHeightForWidth());
        lineEdit_47->setSizePolicy(sizePolicy1);

        formLayout_18->setWidget(1, QFormLayout::LabelRole, lineEdit_47);

        label_118 = new QLabel(verticalLayoutWidget);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        sizePolicy1.setHeightForWidth(label_118->sizePolicy().hasHeightForWidth());
        label_118->setSizePolicy(sizePolicy1);
        label_118->setMinimumSize(QSize(375, 30));
        label_118->setMaximumSize(QSize(375, 30));
        label_118->setFont(font);
        label_118->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_18->setWidget(1, QFormLayout::FieldRole, label_118);

        lineEdit_48 = new QLineEdit(verticalLayoutWidget);
        lineEdit_48->setObjectName(QString::fromUtf8("lineEdit_48"));
        sizePolicy1.setHeightForWidth(lineEdit_48->sizePolicy().hasHeightForWidth());
        lineEdit_48->setSizePolicy(sizePolicy1);

        formLayout_18->setWidget(2, QFormLayout::LabelRole, lineEdit_48);

        label_120 = new QLabel(verticalLayoutWidget);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        sizePolicy1.setHeightForWidth(label_120->sizePolicy().hasHeightForWidth());
        label_120->setSizePolicy(sizePolicy1);
        label_120->setMinimumSize(QSize(375, 30));
        label_120->setMaximumSize(QSize(375, 30));
        label_120->setFont(font);
        label_120->setStyleSheet(QString::fromUtf8("color: #3E638A;"));

        formLayout_18->setWidget(3, QFormLayout::FieldRole, label_120);

        checkBox_12 = new QCheckBox(verticalLayoutWidget);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        sizePolicy1.setHeightForWidth(checkBox_12->sizePolicy().hasHeightForWidth());
        checkBox_12->setSizePolicy(sizePolicy1);
        checkBox_12->setMinimumSize(QSize(10, 10));
        checkBox_12->setStyleSheet(QString::fromUtf8("color: green;"));

        formLayout_18->setWidget(3, QFormLayout::LabelRole, checkBox_12);

        label_119 = new QLabel(verticalLayoutWidget);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        sizePolicy1.setHeightForWidth(label_119->sizePolicy().hasHeightForWidth());
        label_119->setSizePolicy(sizePolicy1);
        label_119->setMinimumSize(QSize(375, 30));
        label_119->setMaximumSize(QSize(375, 30));
        label_119->setFont(font);
        label_119->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_18->setWidget(2, QFormLayout::FieldRole, label_119);


        verticalLayout_6->addLayout(formLayout_18);

        label_121 = new QLabel(verticalLayoutWidget);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        sizePolicy1.setHeightForWidth(label_121->sizePolicy().hasHeightForWidth());
        label_121->setSizePolicy(sizePolicy1);
        label_121->setMinimumSize(QSize(200, 0));
        label_121->setMaximumSize(QSize(200, 30));
        label_121->setFont(font1);
        label_121->setStyleSheet(QString::fromUtf8("color: red; font: bold;"));

        verticalLayout_6->addWidget(label_121);

        formLayout_19 = new QFormLayout();
        formLayout_19->setObjectName(QString::fromUtf8("formLayout_19"));
        lineEdit_49 = new QLineEdit(verticalLayoutWidget);
        lineEdit_49->setObjectName(QString::fromUtf8("lineEdit_49"));
        sizePolicy1.setHeightForWidth(lineEdit_49->sizePolicy().hasHeightForWidth());
        lineEdit_49->setSizePolicy(sizePolicy1);

        formLayout_19->setWidget(0, QFormLayout::LabelRole, lineEdit_49);

        label_122 = new QLabel(verticalLayoutWidget);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        sizePolicy1.setHeightForWidth(label_122->sizePolicy().hasHeightForWidth());
        label_122->setSizePolicy(sizePolicy1);
        label_122->setMinimumSize(QSize(375, 30));
        label_122->setMaximumSize(QSize(375, 30));
        label_122->setFont(font);
        label_122->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_19->setWidget(0, QFormLayout::FieldRole, label_122);

        lineEdit_50 = new QLineEdit(verticalLayoutWidget);
        lineEdit_50->setObjectName(QString::fromUtf8("lineEdit_50"));
        sizePolicy1.setHeightForWidth(lineEdit_50->sizePolicy().hasHeightForWidth());
        lineEdit_50->setSizePolicy(sizePolicy1);

        formLayout_19->setWidget(1, QFormLayout::LabelRole, lineEdit_50);

        lineEdit_51 = new QLineEdit(verticalLayoutWidget);
        lineEdit_51->setObjectName(QString::fromUtf8("lineEdit_51"));
        sizePolicy1.setHeightForWidth(lineEdit_51->sizePolicy().hasHeightForWidth());
        lineEdit_51->setSizePolicy(sizePolicy1);

        formLayout_19->setWidget(2, QFormLayout::LabelRole, lineEdit_51);

        label_123 = new QLabel(verticalLayoutWidget);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        sizePolicy1.setHeightForWidth(label_123->sizePolicy().hasHeightForWidth());
        label_123->setSizePolicy(sizePolicy1);
        label_123->setMinimumSize(QSize(375, 30));
        label_123->setMaximumSize(QSize(375, 30));
        label_123->setFont(font);
        label_123->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_19->setWidget(2, QFormLayout::FieldRole, label_123);

        checkBox_13 = new QCheckBox(verticalLayoutWidget);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        sizePolicy1.setHeightForWidth(checkBox_13->sizePolicy().hasHeightForWidth());
        checkBox_13->setSizePolicy(sizePolicy1);
        checkBox_13->setMinimumSize(QSize(10, 10));
        checkBox_13->setStyleSheet(QString::fromUtf8("color: green;"));

        formLayout_19->setWidget(3, QFormLayout::LabelRole, checkBox_13);

        label_124 = new QLabel(verticalLayoutWidget);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        sizePolicy1.setHeightForWidth(label_124->sizePolicy().hasHeightForWidth());
        label_124->setSizePolicy(sizePolicy1);
        label_124->setMinimumSize(QSize(375, 30));
        label_124->setMaximumSize(QSize(375, 30));
        label_124->setFont(font);
        label_124->setStyleSheet(QString::fromUtf8("color: #3E638A;"));

        formLayout_19->setWidget(3, QFormLayout::FieldRole, label_124);

        label_125 = new QLabel(verticalLayoutWidget);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        sizePolicy1.setHeightForWidth(label_125->sizePolicy().hasHeightForWidth());
        label_125->setSizePolicy(sizePolicy1);
        label_125->setMinimumSize(QSize(375, 30));
        label_125->setMaximumSize(QSize(375, 30));
        label_125->setFont(font);
        label_125->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_19->setWidget(1, QFormLayout::FieldRole, label_125);


        verticalLayout_6->addLayout(formLayout_19);

        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 200, 518, 41));
        horizontalLayout_37 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(0, 0, 0, 0);
        label_126 = new QLabel(horizontalLayoutWidget_4);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        sizePolicy1.setHeightForWidth(label_126->sizePolicy().hasHeightForWidth());
        label_126->setSizePolicy(sizePolicy1);
        label_126->setMinimumSize(QSize(355, 39));
        label_126->setMaximumSize(QSize(355, 39));
        label_126->setFont(font);
        label_126->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_37->addWidget(label_126);

        lcdNumber_37 = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_37->setObjectName(QString::fromUtf8("lcdNumber_37"));
        sizePolicy1.setHeightForWidth(lcdNumber_37->sizePolicy().hasHeightForWidth());
        lcdNumber_37->setSizePolicy(sizePolicy1);
        lcdNumber_37->setMinimumSize(QSize(155, 39));
        lcdNumber_37->setMaximumSize(QSize(155, 39));
        lcdNumber_37->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_37->setDigitCount(9);

        horizontalLayout_37->addWidget(lcdNumber_37);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 670, 600, 70));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(600, 70));
        pushButton->setMaximumSize(QSize(600, 70));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: black; "));
        line_16 = new QFrame(tab);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(640, 260, 90, 5));
        sizePolicy1.setHeightForWidth(line_16->sizePolicy().hasHeightForWidth());
        line_16->setSizePolicy(sizePolicy1);
        line_16->setMinimumSize(QSize(90, 5));
        line_16->setMaximumSize(QSize(90, 5));
        line_16->setStyleSheet(QString::fromUtf8("background-color: #7D9B79; z-index: 2;"));
        line_16->setFrameShadow(QFrame::Sunken);
        line_16->setLineWidth(0);
        line_16->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(610, 350, 155, 5));
        sizePolicy1.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy1);
        line_3->setMinimumSize(QSize(155, 5));
        line_3->setMaximumSize(QSize(155, 5));
        line_3->setStyleSheet(QString::fromUtf8("background-color: #923A33; z-index: 2;"));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_17 = new QFrame(tab);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(930, 70, 5, 110));
        sizePolicy1.setHeightForWidth(line_17->sizePolicy().hasHeightForWidth());
        line_17->setSizePolicy(sizePolicy1);
        line_17->setMinimumSize(QSize(5, 110));
        line_17->setMaximumSize(QSize(5, 110));
        line_17->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_17->setLineWidth(0);
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(tab);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(840, 360, 115, 5));
        sizePolicy1.setHeightForWidth(line_19->sizePolicy().hasHeightForWidth());
        line_19->setSizePolicy(sizePolicy1);
        line_19->setMinimumSize(QSize(115, 5));
        line_19->setMaximumSize(QSize(115, 5));
        line_19->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_19->setFrameShadow(QFrame::Sunken);
        line_19->setLineWidth(0);
        line_19->setFrameShape(QFrame::HLine);
        line_20 = new QFrame(tab);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(860, 180, 75, 5));
        sizePolicy1.setHeightForWidth(line_20->sizePolicy().hasHeightForWidth());
        line_20->setSizePolicy(sizePolicy1);
        line_20->setMinimumSize(QSize(75, 5));
        line_20->setMaximumSize(QSize(75, 5));
        line_20->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_20->setFrameShadow(QFrame::Sunken);
        line_20->setLineWidth(0);
        line_20->setFrameShape(QFrame::HLine);
        line_22 = new QFrame(tab);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(930, 180, 5, 165));
        sizePolicy1.setHeightForWidth(line_22->sizePolicy().hasHeightForWidth());
        line_22->setSizePolicy(sizePolicy1);
        line_22->setMinimumSize(QSize(5, 165));
        line_22->setMaximumSize(QSize(5, 165));
        line_22->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_22->setLineWidth(0);
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(tab);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(900, 590, 54, 5));
        sizePolicy1.setHeightForWidth(line_23->sizePolicy().hasHeightForWidth());
        line_23->setSizePolicy(sizePolicy1);
        line_23->setMinimumSize(QSize(54, 5));
        line_23->setMaximumSize(QSize(54, 5));
        line_23->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_23->setFrameShadow(QFrame::Sunken);
        line_23->setLineWidth(0);
        line_23->setFrameShape(QFrame::HLine);
        line_15 = new QFrame(tab);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(950, 360, 5, 234));
        sizePolicy1.setHeightForWidth(line_15->sizePolicy().hasHeightForWidth());
        line_15->setSizePolicy(sizePolicy1);
        line_15->setMinimumSize(QSize(5, 234));
        line_15->setMaximumSize(QSize(5, 234));
        line_15->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_15->setLineWidth(0);
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(950, 540, 315, 5));
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setMinimumSize(QSize(315, 5));
        line_4->setMaximumSize(QSize(315, 5));
        line_4->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_21 = new QFrame(tab);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(840, 340, 95, 5));
        sizePolicy1.setHeightForWidth(line_21->sizePolicy().hasHeightForWidth());
        line_21->setSizePolicy(sizePolicy1);
        line_21->setMinimumSize(QSize(95, 5));
        line_21->setMaximumSize(QSize(95, 5));
        line_21->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_21->setFrameShadow(QFrame::Sunken);
        line_21->setLineWidth(0);
        line_21->setFrameShape(QFrame::HLine);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1040, 210, 181, 291));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/nta.png")));
        line_5 = new QFrame(tab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(830, 350, 170, 5));
        sizePolicy1.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy1);
        line_5->setMinimumSize(QSize(170, 5));
        line_5->setMaximumSize(QSize(170, 5));
        line_5->setStyleSheet(QString::fromUtf8("background-color: #923A33; z-index: 2;"));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setLineWidth(0);
        line_5->setFrameShape(QFrame::HLine);
        line_12 = new QFrame(tab);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(1000, 310, 5, 45));
        sizePolicy1.setHeightForWidth(line_12->sizePolicy().hasHeightForWidth());
        line_12->setSizePolicy(sizePolicy1);
        line_12->setMinimumSize(QSize(5, 45));
        line_12->setMaximumSize(QSize(5, 45));
        line_12->setStyleSheet(QString::fromUtf8("background-color: #923A33; z-index: 2;"));
        line_12->setLineWidth(0);
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_24 = new QFrame(tab);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(1000, 310, 100, 5));
        sizePolicy1.setHeightForWidth(line_24->sizePolicy().hasHeightForWidth());
        line_24->setSizePolicy(sizePolicy1);
        line_24->setMinimumSize(QSize(100, 5));
        line_24->setMaximumSize(QSize(100, 5));
        line_24->setStyleSheet(QString::fromUtf8("background-color: #923A33; z-index: 2;"));
        line_24->setFrameShadow(QFrame::Sunken);
        line_24->setLineWidth(0);
        line_24->setFrameShape(QFrame::HLine);
        horizontalLayoutWidget_6 = new QWidget(tab);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(680, 0, 333, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_107 = new QLabel(horizontalLayoutWidget_6);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        sizePolicy1.setHeightForWidth(label_107->sizePolicy().hasHeightForWidth());
        label_107->setSizePolicy(sizePolicy1);
        label_107->setMinimumSize(QSize(170, 39));
        label_107->setMaximumSize(QSize(170, 39));
        label_107->setFont(font);
        label_107->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(label_107);

        lcdNumber_41 = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_41->setObjectName(QString::fromUtf8("lcdNumber_41"));
        sizePolicy1.setHeightForWidth(lcdNumber_41->sizePolicy().hasHeightForWidth());
        lcdNumber_41->setSizePolicy(sizePolicy1);
        lcdNumber_41->setMinimumSize(QSize(155, 39));
        lcdNumber_41->setMaximumSize(QSize(155, 39));
        lcdNumber_41->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_41->setDigitCount(9);

        horizontalLayout->addWidget(lcdNumber_41);

        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 0, 518, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_110 = new QLabel(horizontalLayoutWidget_5);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        sizePolicy1.setHeightForWidth(label_110->sizePolicy().hasHeightForWidth());
        label_110->setSizePolicy(sizePolicy1);
        label_110->setMinimumSize(QSize(355, 39));
        label_110->setMaximumSize(QSize(355, 39));
        label_110->setFont(font);
        label_110->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_2->addWidget(label_110);

        lcdNumber_38 = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_38->setObjectName(QString::fromUtf8("lcdNumber_38"));
        sizePolicy1.setHeightForWidth(lcdNumber_38->sizePolicy().hasHeightForWidth());
        lcdNumber_38->setSizePolicy(sizePolicy1);
        lcdNumber_38->setMinimumSize(QSize(155, 39));
        lcdNumber_38->setMaximumSize(QSize(155, 39));
        lcdNumber_38->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_38->setDigitCount(9);

        horizontalLayout_2->addWidget(lcdNumber_38);

        line_52 = new QFrame(tab);
        line_52->setObjectName(QString::fromUtf8("line_52"));
        line_52->setGeometry(QRect(1020, 20, 240, 5));
        sizePolicy1.setHeightForWidth(line_52->sizePolicy().hasHeightForWidth());
        line_52->setSizePolicy(sizePolicy1);
        line_52->setMinimumSize(QSize(240, 5));
        line_52->setMaximumSize(QSize(240, 5));
        line_52->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_52->setFrameShadow(QFrame::Sunken);
        line_52->setLineWidth(0);
        line_52->setFrameShape(QFrame::HLine);
        line_53 = new QFrame(tab);
        line_53->setObjectName(QString::fromUtf8("line_53"));
        line_53->setGeometry(QRect(520, 20, 120, 5));
        sizePolicy1.setHeightForWidth(line_53->sizePolicy().hasHeightForWidth());
        line_53->setSizePolicy(sizePolicy1);
        line_53->setMinimumSize(QSize(120, 5));
        line_53->setMaximumSize(QSize(120, 5));
        line_53->setStyleSheet(QString::fromUtf8("background-color: #7D9B79; z-index: 2;"));
        line_53->setFrameShadow(QFrame::Sunken);
        line_53->setLineWidth(0);
        line_53->setFrameShape(QFrame::HLine);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 360, 181, 301));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/necsa.png")));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 30, 181, 301));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/cccsa.png")));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(970, 40, 251, 241));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/nd.png")));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 200, 181, 301));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/ccwa.png")));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 70, 613, 41));
        horizontalLayout_39 = new QHBoxLayout(layoutWidget);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        horizontalLayout_39->setContentsMargins(0, 0, 0, 0);
        lcdNumber_44 = new QLCDNumber(layoutWidget);
        lcdNumber_44->setObjectName(QString::fromUtf8("lcdNumber_44"));
        sizePolicy1.setHeightForWidth(lcdNumber_44->sizePolicy().hasHeightForWidth());
        lcdNumber_44->setSizePolicy(sizePolicy1);
        lcdNumber_44->setMinimumSize(QSize(155, 39));
        lcdNumber_44->setMaximumSize(QSize(155, 39));
        lcdNumber_44->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_44->setDigitCount(9);

        horizontalLayout_39->addWidget(lcdNumber_44);

        label_128 = new QLabel(layoutWidget);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        sizePolicy1.setHeightForWidth(label_128->sizePolicy().hasHeightForWidth());
        label_128->setSizePolicy(sizePolicy1);
        label_128->setMinimumSize(QSize(450, 39));
        label_128->setMaximumSize(QSize(450, 39));
        label_128->setFont(font);
        label_128->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_39->addWidget(label_128);

        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(570, 630, 493, 41));
        horizontalLayout_40 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        horizontalLayout_40->setContentsMargins(0, 0, 0, 0);
        lcdNumber_45 = new QLCDNumber(layoutWidget_2);
        lcdNumber_45->setObjectName(QString::fromUtf8("lcdNumber_45"));
        sizePolicy1.setHeightForWidth(lcdNumber_45->sizePolicy().hasHeightForWidth());
        lcdNumber_45->setSizePolicy(sizePolicy1);
        lcdNumber_45->setMinimumSize(QSize(155, 39));
        lcdNumber_45->setMaximumSize(QSize(155, 39));
        lcdNumber_45->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_45->setDigitCount(9);

        horizontalLayout_40->addWidget(lcdNumber_45);

        label_129 = new QLabel(layoutWidget_2);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        sizePolicy1.setHeightForWidth(label_129->sizePolicy().hasHeightForWidth());
        label_129->setSizePolicy(sizePolicy1);
        label_129->setMinimumSize(QSize(330, 5));
        label_129->setMaximumSize(QSize(330, 39));
        label_129->setFont(font);
        label_129->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_40->addWidget(label_129);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(570, 490, 493, 41));
        horizontalLayout_41 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(0, 0, 0, 0);
        lcdNumber_46 = new QLCDNumber(layoutWidget_3);
        lcdNumber_46->setObjectName(QString::fromUtf8("lcdNumber_46"));
        sizePolicy1.setHeightForWidth(lcdNumber_46->sizePolicy().hasHeightForWidth());
        lcdNumber_46->setSizePolicy(sizePolicy1);
        lcdNumber_46->setMinimumSize(QSize(155, 39));
        lcdNumber_46->setMaximumSize(QSize(155, 39));
        lcdNumber_46->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_46->setDigitCount(9);

        horizontalLayout_41->addWidget(lcdNumber_46);

        label_130 = new QLabel(layoutWidget_3);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        sizePolicy1.setHeightForWidth(label_130->sizePolicy().hasHeightForWidth());
        label_130->setSizePolicy(sizePolicy1);
        label_130->setMinimumSize(QSize(330, 39));
        label_130->setMaximumSize(QSize(330, 39));
        label_130->setFont(font);
        label_130->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_41->addWidget(label_130);

        line_18 = new QFrame(tab_2);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(200, 580, 80, 5));
        sizePolicy1.setHeightForWidth(line_18->sizePolicy().hasHeightForWidth());
        line_18->setSizePolicy(sizePolicy1);
        line_18->setMinimumSize(QSize(80, 5));
        line_18->setMaximumSize(QSize(80, 5));
        line_18->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_18->setFrameShadow(QFrame::Sunken);
        line_18->setLineWidth(0);
        line_18->setFrameShape(QFrame::HLine);
        line_25 = new QFrame(tab_2);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(180, 90, 90, 5));
        sizePolicy1.setHeightForWidth(line_25->sizePolicy().hasHeightForWidth());
        line_25->setSizePolicy(sizePolicy1);
        line_25->setMinimumSize(QSize(90, 5));
        line_25->setMaximumSize(QSize(90, 5));
        line_25->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_25->setFrameShadow(QFrame::Sunken);
        line_25->setLineWidth(0);
        line_25->setFrameShape(QFrame::HLine);
        line_26 = new QFrame(tab_2);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(370, 250, 100, 5));
        sizePolicy1.setHeightForWidth(line_26->sizePolicy().hasHeightForWidth());
        line_26->setSizePolicy(sizePolicy1);
        line_26->setMinimumSize(QSize(100, 5));
        line_26->setMaximumSize(QSize(100, 5));
        line_26->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_26->setFrameShadow(QFrame::Sunken);
        line_26->setLineWidth(0);
        line_26->setFrameShape(QFrame::HLine);
        line_27 = new QFrame(tab_2);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(470, 250, 5, 260));
        sizePolicy1.setHeightForWidth(line_27->sizePolicy().hasHeightForWidth());
        line_27->setSizePolicy(sizePolicy1);
        line_27->setMinimumSize(QSize(5, 260));
        line_27->setMaximumSize(QSize(5, 260));
        line_27->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 4;"));
        line_27->setLineWidth(0);
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(tab_2);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setGeometry(QRect(470, 510, 100, 5));
        sizePolicy1.setHeightForWidth(line_28->sizePolicy().hasHeightForWidth());
        line_28->setSizePolicy(sizePolicy1);
        line_28->setMinimumSize(QSize(100, 5));
        line_28->setMaximumSize(QSize(5, 100));
        line_28->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_28->setFrameShadow(QFrame::Sunken);
        line_28->setLineWidth(0);
        line_28->setFrameShape(QFrame::HLine);
        line_29 = new QFrame(tab_2);
        line_29->setObjectName(QString::fromUtf8("line_29"));
        line_29->setGeometry(QRect(500, 220, 5, 230));
        sizePolicy1.setHeightForWidth(line_29->sizePolicy().hasHeightForWidth());
        line_29->setSizePolicy(sizePolicy1);
        line_29->setMinimumSize(QSize(5, 230));
        line_29->setMaximumSize(QSize(5, 230));
        line_29->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 4;"));
        line_29->setLineWidth(0);
        line_29->setFrameShape(QFrame::VLine);
        line_29->setFrameShadow(QFrame::Sunken);
        line_30 = new QFrame(tab_2);
        line_30->setObjectName(QString::fromUtf8("line_30"));
        line_30->setGeometry(QRect(500, 450, 70, 5));
        sizePolicy1.setHeightForWidth(line_30->sizePolicy().hasHeightForWidth());
        line_30->setSizePolicy(sizePolicy1);
        line_30->setMinimumSize(QSize(70, 5));
        line_30->setMaximumSize(QSize(70, 5));
        line_30->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_30->setFrameShadow(QFrame::Sunken);
        line_30->setLineWidth(0);
        line_30->setFrameShape(QFrame::HLine);
        line_31 = new QFrame(tab_2);
        line_31->setObjectName(QString::fromUtf8("line_31"));
        line_31->setGeometry(QRect(500, 220, 530, 5));
        sizePolicy1.setHeightForWidth(line_31->sizePolicy().hasHeightForWidth());
        line_31->setSizePolicy(sizePolicy1);
        line_31->setMinimumSize(QSize(530, 5));
        line_31->setMaximumSize(QSize(520, 5));
        line_31->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_31->setFrameShadow(QFrame::Sunken);
        line_31->setLineWidth(0);
        line_31->setFrameShape(QFrame::HLine);
        line_32 = new QFrame(tab_2);
        line_32->setObjectName(QString::fromUtf8("line_32"));
        line_32->setGeometry(QRect(1050, 290, 85, 5));
        sizePolicy1.setHeightForWidth(line_32->sizePolicy().hasHeightForWidth());
        line_32->setSizePolicy(sizePolicy1);
        line_32->setMinimumSize(QSize(85, 5));
        line_32->setMaximumSize(QSize(85, 5));
        line_32->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_32->setFrameShadow(QFrame::Sunken);
        line_32->setLineWidth(0);
        line_32->setFrameShape(QFrame::HLine);
        line_33 = new QFrame(tab_2);
        line_33->setObjectName(QString::fromUtf8("line_33"));
        line_33->setGeometry(QRect(910, 30, 85, 5));
        sizePolicy1.setHeightForWidth(line_33->sizePolicy().hasHeightForWidth());
        line_33->setSizePolicy(sizePolicy1);
        line_33->setMinimumSize(QSize(85, 5));
        line_33->setMaximumSize(QSize(85, 5));
        line_33->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_33->setFrameShadow(QFrame::Sunken);
        line_33->setLineWidth(0);
        line_33->setFrameShape(QFrame::HLine);
        line_34 = new QFrame(tab_2);
        line_34->setObjectName(QString::fromUtf8("line_34"));
        line_34->setGeometry(QRect(990, 30, 5, 100));
        sizePolicy1.setHeightForWidth(line_34->sizePolicy().hasHeightForWidth());
        line_34->setSizePolicy(sizePolicy1);
        line_34->setMinimumSize(QSize(5, 100));
        line_34->setMaximumSize(QSize(5, 100));
        line_34->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_34->setLineWidth(0);
        line_34->setFrameShape(QFrame::VLine);
        line_34->setFrameShadow(QFrame::Sunken);
        line_35 = new QFrame(tab_2);
        line_35->setObjectName(QString::fromUtf8("line_35"));
        line_35->setGeometry(QRect(1190, 30, 5, 100));
        sizePolicy1.setHeightForWidth(line_35->sizePolicy().hasHeightForWidth());
        line_35->setSizePolicy(sizePolicy1);
        line_35->setMinimumSize(QSize(5, 100));
        line_35->setMaximumSize(QSize(5, 100));
        line_35->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_35->setLineWidth(0);
        line_35->setFrameShape(QFrame::VLine);
        line_35->setFrameShadow(QFrame::Sunken);
        line_36 = new QFrame(tab_2);
        line_36->setObjectName(QString::fromUtf8("line_36"));
        line_36->setGeometry(QRect(990, 30, 200, 5));
        sizePolicy1.setHeightForWidth(line_36->sizePolicy().hasHeightForWidth());
        line_36->setSizePolicy(sizePolicy1);
        line_36->setMinimumSize(QSize(200, 5));
        line_36->setMaximumSize(QSize(200, 5));
        line_36->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_36->setFrameShadow(QFrame::Sunken);
        line_36->setLineWidth(0);
        line_36->setFrameShape(QFrame::HLine);
        line_37 = new QFrame(tab_2);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setGeometry(QRect(1050, 170, 5, 120));
        sizePolicy1.setHeightForWidth(line_37->sizePolicy().hasHeightForWidth());
        line_37->setSizePolicy(sizePolicy1);
        line_37->setMinimumSize(QSize(5, 120));
        line_37->setMaximumSize(QSize(5, 120));
        line_37->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_37->setLineWidth(0);
        line_37->setFrameShape(QFrame::VLine);
        line_37->setFrameShadow(QFrame::Sunken);
        line_38 = new QFrame(tab_2);
        line_38->setObjectName(QString::fromUtf8("line_38"));
        line_38->setGeometry(QRect(1130, 170, 5, 120));
        sizePolicy1.setHeightForWidth(line_38->sizePolicy().hasHeightForWidth());
        line_38->setSizePolicy(sizePolicy1);
        line_38->setMinimumSize(QSize(5, 120));
        line_38->setMaximumSize(QSize(5, 120));
        line_38->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_38->setLineWidth(0);
        line_38->setFrameShape(QFrame::VLine);
        line_38->setFrameShadow(QFrame::Sunken);
        line_39 = new QFrame(tab_2);
        line_39->setObjectName(QString::fromUtf8("line_39"));
        line_39->setGeometry(QRect(520, 390, 50, 5));
        sizePolicy1.setHeightForWidth(line_39->sizePolicy().hasHeightForWidth());
        line_39->setSizePolicy(sizePolicy1);
        line_39->setMinimumSize(QSize(50, 5));
        line_39->setMaximumSize(QSize(50, 5));
        line_39->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_39->setFrameShadow(QFrame::Sunken);
        line_39->setLineWidth(0);
        line_39->setFrameShape(QFrame::HLine);
        layoutWidget_5 = new QWidget(tab_2);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(570, 370, 493, 41));
        horizontalLayout_43 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        horizontalLayout_43->setContentsMargins(0, 0, 0, 0);
        lcdNumber_48 = new QLCDNumber(layoutWidget_5);
        lcdNumber_48->setObjectName(QString::fromUtf8("lcdNumber_48"));
        sizePolicy1.setHeightForWidth(lcdNumber_48->sizePolicy().hasHeightForWidth());
        lcdNumber_48->setSizePolicy(sizePolicy1);
        lcdNumber_48->setMinimumSize(QSize(155, 39));
        lcdNumber_48->setMaximumSize(QSize(155, 39));
        lcdNumber_48->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_48->setDigitCount(9);

        horizontalLayout_43->addWidget(lcdNumber_48);

        label_132 = new QLabel(layoutWidget_5);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        sizePolicy1.setHeightForWidth(label_132->sizePolicy().hasHeightForWidth());
        label_132->setSizePolicy(sizePolicy1);
        label_132->setMinimumSize(QSize(330, 39));
        label_132->setMaximumSize(QSize(330, 39));
        label_132->setFont(font);
        label_132->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_43->addWidget(label_132);

        layoutWidget_6 = new QWidget(tab_2);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(570, 310, 493, 41));
        horizontalLayout_44 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        horizontalLayout_44->setContentsMargins(0, 0, 0, 0);
        lcdNumber_49 = new QLCDNumber(layoutWidget_6);
        lcdNumber_49->setObjectName(QString::fromUtf8("lcdNumber_49"));
        sizePolicy1.setHeightForWidth(lcdNumber_49->sizePolicy().hasHeightForWidth());
        lcdNumber_49->setSizePolicy(sizePolicy1);
        lcdNumber_49->setMinimumSize(QSize(155, 39));
        lcdNumber_49->setMaximumSize(QSize(155, 39));
        lcdNumber_49->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_49->setDigitCount(9);

        horizontalLayout_44->addWidget(lcdNumber_49);

        label_133 = new QLabel(layoutWidget_6);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        sizePolicy1.setHeightForWidth(label_133->sizePolicy().hasHeightForWidth());
        label_133->setSizePolicy(sizePolicy1);
        label_133->setMinimumSize(QSize(330, 39));
        label_133->setMaximumSize(QSize(330, 39));
        label_133->setFont(font);
        label_133->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_44->addWidget(label_133);

        layoutWidget_4 = new QWidget(tab_2);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(570, 430, 493, 41));
        horizontalLayout_42 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalLayout_42->setContentsMargins(0, 0, 0, 0);
        lcdNumber_47 = new QLCDNumber(layoutWidget_4);
        lcdNumber_47->setObjectName(QString::fromUtf8("lcdNumber_47"));
        sizePolicy1.setHeightForWidth(lcdNumber_47->sizePolicy().hasHeightForWidth());
        lcdNumber_47->setSizePolicy(sizePolicy1);
        lcdNumber_47->setMinimumSize(QSize(155, 39));
        lcdNumber_47->setMaximumSize(QSize(155, 39));
        lcdNumber_47->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_47->setDigitCount(9);

        horizontalLayout_42->addWidget(lcdNumber_47);

        label_131 = new QLabel(layoutWidget_4);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        sizePolicy1.setHeightForWidth(label_131->sizePolicy().hasHeightForWidth());
        label_131->setSizePolicy(sizePolicy1);
        label_131->setMinimumSize(QSize(330, 39));
        label_131->setMaximumSize(QSize(330, 39));
        label_131->setFont(font);
        label_131->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_42->addWidget(label_131);

        line_41 = new QFrame(tab_2);
        line_41->setObjectName(QString::fromUtf8("line_41"));
        line_41->setGeometry(QRect(910, 30, 5, 155));
        sizePolicy1.setHeightForWidth(line_41->sizePolicy().hasHeightForWidth());
        line_41->setSizePolicy(sizePolicy1);
        line_41->setMinimumSize(QSize(5, 155));
        line_41->setMaximumSize(QSize(5, 155));
        line_41->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_41->setLineWidth(0);
        line_41->setFrameShape(QFrame::VLine);
        line_41->setFrameShadow(QFrame::Sunken);
        line_42 = new QFrame(tab_2);
        line_42->setObjectName(QString::fromUtf8("line_42"));
        line_42->setGeometry(QRect(520, 180, 390, 5));
        sizePolicy1.setHeightForWidth(line_42->sizePolicy().hasHeightForWidth());
        line_42->setSizePolicy(sizePolicy1);
        line_42->setMinimumSize(QSize(390, 5));
        line_42->setMaximumSize(QSize(390, 5));
        line_42->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_42->setFrameShadow(QFrame::Sunken);
        line_42->setLineWidth(0);
        line_42->setFrameShape(QFrame::HLine);
        line_43 = new QFrame(tab_2);
        line_43->setObjectName(QString::fromUtf8("line_43"));
        line_43->setGeometry(QRect(520, 230, 5, 160));
        sizePolicy1.setHeightForWidth(line_43->sizePolicy().hasHeightForWidth());
        line_43->setSizePolicy(sizePolicy1);
        line_43->setMinimumSize(QSize(5, 160));
        line_43->setMaximumSize(QSize(5, 160));
        line_43->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_43->setLineWidth(0);
        line_43->setFrameShape(QFrame::VLine);
        line_43->setFrameShadow(QFrame::Sunken);
        line_44 = new QFrame(tab_2);
        line_44->setObjectName(QString::fromUtf8("line_44"));
        line_44->setGeometry(QRect(520, 180, 5, 35));
        sizePolicy1.setHeightForWidth(line_44->sizePolicy().hasHeightForWidth());
        line_44->setSizePolicy(sizePolicy1);
        line_44->setMinimumSize(QSize(5, 35));
        line_44->setMaximumSize(QSize(5, 35));
        line_44->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_44->setLineWidth(0);
        line_44->setFrameShape(QFrame::VLine);
        line_44->setFrameShadow(QFrame::Sunken);
        line_45 = new QFrame(tab_2);
        line_45->setObjectName(QString::fromUtf8("line_45"));
        line_45->setGeometry(QRect(550, 290, 500, 5));
        sizePolicy1.setHeightForWidth(line_45->sizePolicy().hasHeightForWidth());
        line_45->setSizePolicy(sizePolicy1);
        line_45->setMinimumSize(QSize(500, 5));
        line_45->setMaximumSize(QSize(500, 5));
        line_45->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_45->setFrameShadow(QFrame::Sunken);
        line_45->setLineWidth(0);
        line_45->setFrameShape(QFrame::HLine);
        line_46 = new QFrame(tab_2);
        line_46->setObjectName(QString::fromUtf8("line_46"));
        line_46->setGeometry(QRect(550, 330, 20, 5));
        sizePolicy1.setHeightForWidth(line_46->sizePolicy().hasHeightForWidth());
        line_46->setSizePolicy(sizePolicy1);
        line_46->setMinimumSize(QSize(20, 5));
        line_46->setMaximumSize(QSize(20, 5));
        line_46->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 2;"));
        line_46->setFrameShadow(QFrame::Sunken);
        line_46->setLineWidth(0);
        line_46->setFrameShape(QFrame::HLine);
        line_47 = new QFrame(tab_2);
        line_47->setObjectName(QString::fromUtf8("line_47"));
        line_47->setGeometry(QRect(550, 290, 5, 42));
        sizePolicy1.setHeightForWidth(line_47->sizePolicy().hasHeightForWidth());
        line_47->setSizePolicy(sizePolicy1);
        line_47->setMinimumSize(QSize(5, 42));
        line_47->setMaximumSize(QSize(5, 42));
        line_47->setStyleSheet(QString::fromUtf8("background-color: #f5c211; z-index: 4;"));
        line_47->setLineWidth(0);
        line_47->setFrameShape(QFrame::VLine);
        line_47->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1130, 310, 181, 301));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Redim-Calc/nea.png")));
        layoutWidget_7 = new QWidget(tab_2);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(570, 570, 493, 41));
        horizontalLayout_46 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        lcdNumber_51 = new QLCDNumber(layoutWidget_7);
        lcdNumber_51->setObjectName(QString::fromUtf8("lcdNumber_51"));
        sizePolicy1.setHeightForWidth(lcdNumber_51->sizePolicy().hasHeightForWidth());
        lcdNumber_51->setSizePolicy(sizePolicy1);
        lcdNumber_51->setMinimumSize(QSize(155, 39));
        lcdNumber_51->setMaximumSize(QSize(155, 39));
        lcdNumber_51->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));
        lcdNumber_51->setDigitCount(9);

        horizontalLayout_46->addWidget(lcdNumber_51);

        label_135 = new QLabel(layoutWidget_7);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        sizePolicy1.setHeightForWidth(label_135->sizePolicy().hasHeightForWidth());
        label_135->setSizePolicy(sizePolicy1);
        label_135->setMinimumSize(QSize(330, 39));
        label_135->setMaximumSize(QSize(330, 39));
        label_135->setFont(font);
        label_135->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_46->addWidget(label_135);

        line_40 = new QFrame(tab_2);
        line_40->setObjectName(QString::fromUtf8("line_40"));
        line_40->setGeometry(QRect(280, 580, 5, 75));
        sizePolicy1.setHeightForWidth(line_40->sizePolicy().hasHeightForWidth());
        line_40->setSizePolicy(sizePolicy1);
        line_40->setMinimumSize(QSize(5, 75));
        line_40->setMaximumSize(QSize(5, 75));
        line_40->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 4;"));
        line_40->setLineWidth(0);
        line_40->setFrameShape(QFrame::VLine);
        line_40->setFrameShadow(QFrame::Sunken);
        line_48 = new QFrame(tab_2);
        line_48->setObjectName(QString::fromUtf8("line_48"));
        line_48->setGeometry(QRect(280, 650, 290, 5));
        sizePolicy1.setHeightForWidth(line_48->sizePolicy().hasHeightForWidth());
        line_48->setSizePolicy(sizePolicy1);
        line_48->setMinimumSize(QSize(290, 5));
        line_48->setMaximumSize(QSize(290, 5));
        line_48->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_48->setFrameShadow(QFrame::Sunken);
        line_48->setLineWidth(0);
        line_48->setFrameShape(QFrame::HLine);
        line_49 = new QFrame(tab_2);
        line_49->setObjectName(QString::fromUtf8("line_49"));
        line_49->setGeometry(QRect(540, 550, 620, 5));
        sizePolicy1.setHeightForWidth(line_49->sizePolicy().hasHeightForWidth());
        line_49->setSizePolicy(sizePolicy1);
        line_49->setMinimumSize(QSize(620, 5));
        line_49->setMaximumSize(QSize(620, 5));
        line_49->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_49->setFrameShadow(QFrame::Sunken);
        line_49->setLineWidth(0);
        line_49->setFrameShape(QFrame::HLine);
        line_50 = new QFrame(tab_2);
        line_50->setObjectName(QString::fromUtf8("line_50"));
        line_50->setGeometry(QRect(540, 550, 5, 40));
        sizePolicy1.setHeightForWidth(line_50->sizePolicy().hasHeightForWidth());
        line_50->setSizePolicy(sizePolicy1);
        line_50->setMinimumSize(QSize(5, 40));
        line_50->setMaximumSize(QSize(5, 40));
        line_50->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 4;"));
        line_50->setLineWidth(0);
        line_50->setFrameShape(QFrame::VLine);
        line_50->setFrameShadow(QFrame::Sunken);
        line_51 = new QFrame(tab_2);
        line_51->setObjectName(QString::fromUtf8("line_51"));
        line_51->setGeometry(QRect(540, 590, 30, 5));
        sizePolicy1.setHeightForWidth(line_51->sizePolicy().hasHeightForWidth());
        line_51->setSizePolicy(sizePolicy1);
        line_51->setMinimumSize(QSize(30, 5));
        line_51->setMaximumSize(QSize(30, 5));
        line_51->setStyleSheet(QString::fromUtf8("background-color: #3079AD; z-index: 2;"));
        line_51->setFrameShadow(QFrame::Sunken);
        line_51->setLineWidth(0);
        line_51->setFrameShape(QFrame::HLine);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        
        //QObject::connect(pushButton, &QPushButton::clicked, &validateInputsCaller);
        QObject::connect(pushButton, &QPushButton::clicked, [&]() {
            QList<QPair<QString, QString>> inputList;
            inputList.append(qMakePair(QString("lineEdit_44"), lineEdit_44->text()));
            inputList.append(qMakePair(QString("lineEdit_45"), lineEdit_45->text()));
            inputList.append(qMakePair(QString("lineEdit_46"), lineEdit_46->text()));
            inputList.append(qMakePair(QString("lineEdit_47"), lineEdit_47->text()));
            inputList.append(qMakePair(QString("lineEdit_48"), lineEdit_48->text()));
            inputList.append(qMakePair(QString("lineEdit_49"), lineEdit_49->text()));
            inputList.append(qMakePair(QString("lineEdit_50"), lineEdit_50->text()));
            inputList.append(qMakePair(QString("lineEdit_51"), lineEdit_51->text()));


            validateInputsCaller(inputList);
        });
        QObject::connect(checkBox_12, &QCheckBox::clicked, [&]() {
            fillGenericValues1();
        });
        QObject::connect(checkBox_13, &QCheckBox::clicked, [&]() {
            fillGenericValues2();
        });
        retranslateUi(MainWindow);

       tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi
    
    void connectButtonToFunction(QPushButton *pushButton, void (*function)()) {
        QObject::connect(pushButton, &QPushButton::clicked, function);
    }
    void connectCheckBoxToFunction(QCheckBox *checkBox, void (*function)()) {
        QObject::connect(checkBox, &QCheckBox::clicked, function);
    }
    
    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NVel", nullptr));
        label_108->setText(QCoreApplication::translate("MainWindow", "Volume of the Nozzle (Unit: cm^2)", nullptr));
        label->setText(QString());
        label_109->setText(QCoreApplication::translate("MainWindow", "Cross-sectional are of the Nozzle throat (Unit: cm^2)", nullptr));
        label_111->setText(QCoreApplication::translate("MainWindow", "Length of the combustion chamber (Unit: cm)", nullptr));
        label_112->setText(QCoreApplication::translate("MainWindow", "Performance:", nullptr));
        label_113->setText(QCoreApplication::translate("MainWindow", "Thrust (Unit: Newton)", nullptr));
        label_114->setText(QCoreApplication::translate("MainWindow", "Chamber pressure (Unit: bar)", nullptr));
        label_115->setText(QCoreApplication::translate("MainWindow", "Propellant properties:", nullptr));
        label_116->setText(QCoreApplication::translate("MainWindow", "Liquid oxygen:", nullptr));
        label_117->setText(QCoreApplication::translate("MainWindow", "Density (Unit: kg/m^3)", nullptr));
        label_118->setText(QCoreApplication::translate("MainWindow", "Specific heat (Unit: J/kg-K)", nullptr));
        label_120->setText(QCoreApplication::translate("MainWindow", "Fill generic values", nullptr));
        checkBox_12->setText(QString());
        label_119->setText(QCoreApplication::translate("MainWindow", "Burning temperature (Unit: Kelvin)", nullptr));
        label_121->setText(QCoreApplication::translate("MainWindow", "Liquid ethanol:", nullptr));
        label_122->setText(QCoreApplication::translate("MainWindow", "Density (Unit: kg/m^3)", nullptr));
        label_123->setText(QCoreApplication::translate("MainWindow", "Burning temperature (Unit: Kelvin)", nullptr));
        checkBox_13->setText(QString());
        label_124->setText(QCoreApplication::translate("MainWindow", "Fill generic values", nullptr));
        label_125->setText(QCoreApplication::translate("MainWindow", "Specific heat (Unit: J/kg-K)", nullptr));
        label_126->setText(QCoreApplication::translate("MainWindow", "Required mass flow rate (Unit: kg/s)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_2->setText(QString());
        label_107->setText(QCoreApplication::translate("MainWindow", "Nozzle length (Unit: cm)", nullptr));
        label_110->setText(QCoreApplication::translate("MainWindow", "Volume of the combustion chamber (Unit: cm^3)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_128->setText(QCoreApplication::translate("MainWindow", "Cross-sectional are of the combustion chamber (Unit: cm^2)", nullptr));
        label_129->setText(QCoreApplication::translate("MainWindow", "Cross-sectional area of the nozzle (Unit: cm^2)", nullptr));
        label_130->setText(QCoreApplication::translate("MainWindow", "Wall area of the Combustion chamber (Unit: cm^2)", nullptr));
        label_132->setText(QCoreApplication::translate("MainWindow", "Diameter of the nozzle exit (Unit: cm)", nullptr));
        label_133->setText(QCoreApplication::translate("MainWindow", "Throat diameter (Unit: cm)", nullptr));
        label_131->setText(QCoreApplication::translate("MainWindow", "Wall area of the nozzle (Unit: cm^2)", nullptr));
        label_7->setText(QString());
        label_135->setText(QCoreApplication::translate("MainWindow", "Cross-sectional area of the nozzle exit (Unit: cm^2)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "More  calculated values", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Guide / about", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Optimise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VER1GUI_H
