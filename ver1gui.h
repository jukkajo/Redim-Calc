#ifndef VER1GUI_H
#define VER1GUI_H

// 04.04.2023
// Jukka J
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
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_107;
    QLCDNumber *lcdNumber_32;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_108;
    QLCDNumber *lcdNumber_33;
    QFrame *line_7;
    QLabel *label;
    QFrame *line_6;
    QFrame *line_10;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_109;
    QLCDNumber *lcdNumber_34;
    QFrame *line_11;
    QFrame *line_9;
    QFrame *line_2;
    QFrame *line_14;
    QFrame *line_13;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_110;
    QLCDNumber *lcdNumber_35;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_111;
    QLCDNumber *lcdNumber_36;
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
    QLabel *label_119;
    QLabel *label_120;
    QCheckBox *checkBox_12;
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
    QFrame *line_18;
    QFrame *line_21;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1275, 816);
        QFont font;
        font.setFamily(QString::fromUtf8("Nexa"));
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white; "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1251, 791));
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
        horizontalLayoutWidget_6 = new QWidget(tab);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(700, 0, 533, 41));
        horizontalLayout_32 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_107 = new QLabel(horizontalLayoutWidget_6);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        sizePolicy1.setHeightForWidth(label_107->sizePolicy().hasHeightForWidth());
        label_107->setSizePolicy(sizePolicy1);
        label_107->setMinimumSize(QSize(450, 39));
        label_107->setMaximumSize(QSize(450, 39));
        label_107->setFont(font);
        label_107->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_32->addWidget(label_107);

        lcdNumber_32 = new QLCDNumber(horizontalLayoutWidget_6);
        lcdNumber_32->setObjectName(QString::fromUtf8("lcdNumber_32"));
        sizePolicy1.setHeightForWidth(lcdNumber_32->sizePolicy().hasHeightForWidth());
        lcdNumber_32->setSizePolicy(sizePolicy1);
        lcdNumber_32->setMinimumSize(QSize(75, 39));
        lcdNumber_32->setMaximumSize(QSize(75, 39));
        lcdNumber_32->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

        horizontalLayout_32->addWidget(lcdNumber_32);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 150, 438, 41));
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

        lcdNumber_33 = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_33->setObjectName(QString::fromUtf8("lcdNumber_33"));
        sizePolicy1.setHeightForWidth(lcdNumber_33->sizePolicy().hasHeightForWidth());
        lcdNumber_33->setSizePolicy(sizePolicy1);
        lcdNumber_33->setMinimumSize(QSize(75, 39));
        lcdNumber_33->setMaximumSize(QSize(75, 39));
        lcdNumber_33->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

        horizontalLayout_33->addWidget(lcdNumber_33);

        line_7 = new QFrame(tab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(440, 170, 140, 5));
        sizePolicy1.setHeightForWidth(line_7->sizePolicy().hasHeightForWidth());
        line_7->setSizePolicy(sizePolicy1);
        line_7->setMinimumSize(QSize(140, 5));
        line_7->setMaximumSize(QSize(140, 5));
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
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 438, 41));
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

        lcdNumber_34 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_34->setObjectName(QString::fromUtf8("lcdNumber_34"));
        sizePolicy1.setHeightForWidth(lcdNumber_34->sizePolicy().hasHeightForWidth());
        lcdNumber_34->setSizePolicy(sizePolicy1);
        lcdNumber_34->setMinimumSize(QSize(75, 39));
        lcdNumber_34->setMaximumSize(QSize(75, 39));
        lcdNumber_34->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

        horizontalLayout_34->addWidget(lcdNumber_34);

        line_11 = new QFrame(tab);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(440, 70, 490, 5));
        sizePolicy1.setHeightForWidth(line_11->sizePolicy().hasHeightForWidth());
        line_11->setSizePolicy(sizePolicy1);
        line_11->setMinimumSize(QSize(490, 5));
        line_11->setMaximumSize(QSize(490, 5));
        line_11->setStyleSheet(QString::fromUtf8("background-color: #fd7e14;"));
        line_11->setFrameShadow(QFrame::Sunken);
        line_11->setLineWidth(0);
        line_11->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(tab);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(440, 120, 170, 5));
        sizePolicy1.setHeightForWidth(line_9->sizePolicy().hasHeightForWidth());
        line_9->setSizePolicy(sizePolicy1);
        line_9->setMinimumSize(QSize(170, 5));
        line_9->setMaximumSize(QSize(170, 5));
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
        line_14->setGeometry(QRect(1180, 50, 5, 266));
        sizePolicy1.setHeightForWidth(line_14->sizePolicy().hasHeightForWidth());
        line_14->setSizePolicy(sizePolicy1);
        line_14->setMinimumSize(QSize(5, 266));
        line_14->setMaximumSize(QSize(5, 266));
        line_14->setStyleSheet(QString::fromUtf8("background-color: yellow; z-index: 4;"));
        line_14->setLineWidth(0);
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(tab);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(640, 50, 5, 15));
        sizePolicy1.setHeightForWidth(line_13->sizePolicy().hasHeightForWidth());
        line_13->setSizePolicy(sizePolicy1);
        line_13->setMinimumSize(QSize(5, 15));
        line_13->setMaximumSize(QSize(5, 15));
        line_13->setStyleSheet(QString::fromUtf8("background-color: #7D9B79"));
        line_13->setLineWidth(0);
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 0, 693, 41));
        horizontalLayout_35 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(0, 0, 0, 0);
        label_110 = new QLabel(horizontalLayoutWidget_5);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        sizePolicy1.setHeightForWidth(label_110->sizePolicy().hasHeightForWidth());
        label_110->setSizePolicy(sizePolicy1);
        label_110->setMinimumSize(QSize(610, 39));
        label_110->setMaximumSize(QSize(610, 39));
        label_110->setFont(font);
        label_110->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_35->addWidget(label_110);

        lcdNumber_35 = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_35->setObjectName(QString::fromUtf8("lcdNumber_35"));
        sizePolicy1.setHeightForWidth(lcdNumber_35->sizePolicy().hasHeightForWidth());
        lcdNumber_35->setSizePolicy(sizePolicy1);
        lcdNumber_35->setMinimumSize(QSize(75, 39));
        lcdNumber_35->setMaximumSize(QSize(75, 39));
        lcdNumber_35->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

        horizontalLayout_35->addWidget(lcdNumber_35);

        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 438, 41));
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

        lcdNumber_36 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_36->setObjectName(QString::fromUtf8("lcdNumber_36"));
        sizePolicy1.setHeightForWidth(lcdNumber_36->sizePolicy().hasHeightForWidth());
        lcdNumber_36->setSizePolicy(sizePolicy1);
        lcdNumber_36->setMinimumSize(QSize(75, 39));
        lcdNumber_36->setMaximumSize(QSize(75, 39));
        lcdNumber_36->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

        horizontalLayout_36->addWidget(lcdNumber_36);

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

        label_119 = new QLabel(verticalLayoutWidget);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        sizePolicy1.setHeightForWidth(label_119->sizePolicy().hasHeightForWidth());
        label_119->setSizePolicy(sizePolicy1);
        label_119->setMinimumSize(QSize(375, 30));
        label_119->setMaximumSize(QSize(375, 30));
        label_119->setFont(font);
        label_119->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout_18->setWidget(2, QFormLayout::FieldRole, label_119);

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
        horizontalLayoutWidget_4->setGeometry(QRect(0, 200, 438, 41));
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
        lcdNumber_37->setMinimumSize(QSize(75, 39));
        lcdNumber_37->setMaximumSize(QSize(75, 39));
        lcdNumber_37->setStyleSheet(QString::fromUtf8("border: 2px solid black;  color: #008080; font-weight: bold;"));

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
        line_17->setStyleSheet(QString::fromUtf8("background-color: #fd7e14; z-index: 4;"));
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
        line_19->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 2;"));
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
        line_20->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 2;"));
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
        line_22->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 4;"));
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
        line_23->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 2;"));
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
        line_15->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 4;"));
        line_15->setLineWidth(0);
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(950, 310, 234, 5));
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setMinimumSize(QSize(234, 5));
        line_4->setMaximumSize(QSize(234, 5));
        line_4->setStyleSheet(QString::fromUtf8("background-color: yellow; z-index: 2;"));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_18 = new QFrame(tab);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(950, 310, 5, 50));
        sizePolicy1.setHeightForWidth(line_18->sizePolicy().hasHeightForWidth());
        line_18->setSizePolicy(sizePolicy1);
        line_18->setMinimumSize(QSize(5, 50));
        line_18->setMaximumSize(QSize(5, 50));
        line_18->setStyleSheet(QString::fromUtf8("background-color: yellow; z-index: 4;"));
        line_18->setLineWidth(0);
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(tab);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(840, 340, 95, 5));
        sizePolicy1.setHeightForWidth(line_21->sizePolicy().hasHeightForWidth());
        line_21->setSizePolicy(sizePolicy1);
        line_21->setMinimumSize(QSize(95, 5));
        line_21->setMaximumSize(QSize(95, 5));
        line_21->setStyleSheet(QString::fromUtf8("background-color: black; z-index: 2;"));
        line_21->setFrameShadow(QFrame::Sunken);
        line_21->setLineWidth(0);
        line_21->setFrameShape(QFrame::HLine);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
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

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NVel", nullptr));
        label_107->setText(QCoreApplication::translate("MainWindow", "Polttokammion pituus / Length of the combustion chamber (Unit: cm)", nullptr));
        label_108->setText(QCoreApplication::translate("MainWindow", "Suuttimen ulostuloala / Nozzle exit area (Unit: cm^2)", nullptr));
        label->setText(QString());
        label_109->setText(QCoreApplication::translate("MainWindow", "Suuttimen kurkun ala / Nozzle throat area (Unit: cm^2)", nullptr));
        label_110->setText(QCoreApplication::translate("MainWindow", "Polttokammion poikkipinta-ala / Cross-sectional area of the combustion chamber (Unit: cm^2)", nullptr));
        label_111->setText(QCoreApplication::translate("MainWindow", "Suuttimen pituus / Nozzle length (Unit: cm)", nullptr));
        label_112->setText(QCoreApplication::translate("MainWindow", "Suorituskyky / Performance:", nullptr));
        label_113->setText(QCoreApplication::translate("MainWindow", "Ty\303\266nt\303\266voima / Thrust (Unit: Newton)", nullptr));
        label_114->setText(QCoreApplication::translate("MainWindow", "Kammiopaine / Chamber pressure (Unit: bar)", nullptr));
        label_115->setText(QCoreApplication::translate("MainWindow", "Polttoaineen ominaisuudet / Propellant properties:\n"
"", nullptr));
        label_116->setText(QCoreApplication::translate("MainWindow", "Nestehappi / Liquid oxygen:", nullptr));
        label_117->setText(QCoreApplication::translate("MainWindow", "Tiheys / Density (Unit: kg/m^3)", nullptr));
        label_118->setText(QCoreApplication::translate("MainWindow", "Ominaisl\303\244mp\303\266kapasiteetti / Specific heat (Unit: J/kg-K)", nullptr));
        label_119->setText(QCoreApplication::translate("MainWindow", "Palamisl\303\244mp\303\266 / Burning temperature (Unit: Kelvin)", nullptr));
        label_120->setText(QCoreApplication::translate("MainWindow", "T\303\244yt\303\244 oletusarvot / Fill generic values", nullptr));
        checkBox_12->setText(QString());
        label_121->setText(QCoreApplication::translate("MainWindow", "Etanoli / Liquid ethanol:", nullptr));
        label_122->setText(QCoreApplication::translate("MainWindow", "Tiheys / Density (Unit: kg/m^3)", nullptr));
        label_123->setText(QCoreApplication::translate("MainWindow", "Palamisl\303\244mp\303\266 / Burning temperature (Unit: Kelvin)", nullptr));
        checkBox_13->setText(QString());
        label_124->setText(QCoreApplication::translate("MainWindow", "T\303\244yt\303\244 oletusarvot / Fill generic values", nullptr));
        label_125->setText(QCoreApplication::translate("MainWindow", "Ominaisl\303\244mp\303\266kapasiteetti / Specific heat (Unit: J/kg-K)", nullptr));
        label_126->setText(QCoreApplication::translate("MainWindow", "Massavirtausnopeus / Mass flow rate (Unit: kg/s)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Laske / Calculate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Laskuri / Calculator", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Optimize parameters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Guide", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "About / credits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VER1GUI_H
