/********************************************************************************
** Form generated from reading UI file 'delivaro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVARO_H
#define UI_DELIVARO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_delivaro
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *authentification;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_28;
    QLabel *titre;
    QVBoxLayout *verticalLayout_29;
    QLineEdit *lineEdit_login_2;
    QLineEdit *lineEdit_password;
    QVBoxLayout *verticalLayout_30;
    QPushButton *login_2;
    QPushButton *options_2;
    QPushButton *quit_2;
    QWidget *menugestion;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_tabcolis;
    QPushButton *partenaires;
    QStackedWidget *stackedWidget_2;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_StatistiquesColis;
    QHBoxLayout *horizontalLayout_4;
    QCustomPlot *statcolis;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *commandLinkButton;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_Arduino;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QToolBox *toolBox_colis;
    QWidget *page_7;
    QPushButton *pushButton_recherche_colis;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_recherche_colis;
    QWidget *page_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *radioButton_numcolis;
    QRadioButton *radioButton_adresse;
    QRadioButton *radioButton_destinataire;
    QRadioButton *radioButton_expediteur;
    QRadioButton *radioButton_dateL;
    QComboBox *AD;
    QPushButton *pushButton_triColis;
    QTableView *tableView_colis;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_export_colis;
    QPushButton *pushButton_imprimeColis;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_dateliv;
    QDateEdit *dateEdit_livraison;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_adresseliv;
    QLineEdit *lineEdit_adresseliv;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_expediteur;
    QLineEdit *lineEdit_expediteur;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_destinataire;
    QLineEdit *lineEdit_destinataire;
    QPushButton *pushButton_ajouterColis;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_numcolis;
    QLineEdit *lineEdit_numcolis;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *pushButton_modifier_colis;
    QPushButton *contract_colis;
    QPushButton *pushButton_supprimer_colis;
    QWidget *stackedWidgetPage2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_nom;
    QLineEdit *lineEdit_nom;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_ID;
    QLineEdit *lineEdit_ID;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_nbC;
    QLineEdit *lineEdit_nbC;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_produit;
    QComboBox *comboBox_produit;
    QPushButton *pushButton_ajouterP;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_modifier_Partenaires;
    QPushButton *pushButton_supp_Partenaires;
    QCommandLinkButton *commandLinkButton_retour;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_Statistiques_partenaires;
    QCustomPlot *statPartenaires;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QToolBox *toolBox_part;
    QWidget *page_5;
    QPushButton *pushButton_recherche_partenaires;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_recherche__partenaires;
    QWidget *page_6;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QTableView *tableView_part;
    QPushButton *pushButton_export_partenaires;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *delivaro)
    {
        if (delivaro->objectName().isEmpty())
            delivaro->setObjectName(QStringLiteral("delivaro"));
        delivaro->resize(1579, 879);
        centralwidget = new QWidget(delivaro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1581, 841));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        authentification = new QWidget();
        authentification->setObjectName(QStringLiteral("authentification"));
        layoutWidget_11 = new QWidget(authentification);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(510, 10, 1011, 811));
        verticalLayout_28 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        titre = new QLabel(layoutWidget_11);
        titre->setObjectName(QStringLiteral("titre"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        titre->setFont(font);
        titre->setContextMenuPolicy(Qt::NoContextMenu);
        //titre->setTextFormat(Qt::MarkdownText);
        titre->setScaledContents(false);
        titre->setAlignment(Qt::AlignCenter);

        verticalLayout_28->addWidget(titre);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        lineEdit_login_2 = new QLineEdit(layoutWidget_11);
        lineEdit_login_2->setObjectName(QStringLiteral("lineEdit_login_2"));
        lineEdit_login_2->setMaximumSize(QSize(16777215, 31));
        lineEdit_login_2->setAutoFillBackground(false);
        lineEdit_login_2->setAlignment(Qt::AlignCenter);

        verticalLayout_29->addWidget(lineEdit_login_2);

        lineEdit_password = new QLineEdit(layoutWidget_11);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMaximumSize(QSize(16777215, 31));

        verticalLayout_29->addWidget(lineEdit_password);


        verticalLayout_28->addLayout(verticalLayout_29);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        login_2 = new QPushButton(layoutWidget_11);
        login_2->setObjectName(QStringLiteral("login_2"));

        verticalLayout_30->addWidget(login_2);

        options_2 = new QPushButton(layoutWidget_11);
        options_2->setObjectName(QStringLiteral("options_2"));

        verticalLayout_30->addWidget(options_2);

        quit_2 = new QPushButton(layoutWidget_11);
        quit_2->setObjectName(QStringLiteral("quit_2"));

        verticalLayout_30->addWidget(quit_2);


        verticalLayout_28->addLayout(verticalLayout_30);

        stackedWidget->addWidget(authentification);
        menugestion = new QWidget();
        menugestion->setObjectName(QStringLiteral("menugestion"));
        layoutWidget = new QWidget(menugestion);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(780, 90, 481, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        stackedWidget->addWidget(menugestion);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(219, 11, 121, 21));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        pushButton_tabcolis = new QPushButton(layoutWidget1);
        pushButton_tabcolis->setObjectName(QStringLiteral("pushButton_tabcolis"));
        pushButton_tabcolis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_20->addWidget(pushButton_tabcolis);

        partenaires = new QPushButton(layoutWidget1);
        partenaires->setObjectName(QStringLiteral("partenaires"));
        partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_20->addWidget(partenaires);

        stackedWidget_2 = new QStackedWidget(page);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 30, 1521, 781));
        stackedWidget_2->setStyleSheet(QStringLiteral(""));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        gridLayout_3 = new QGridLayout(stackedWidgetPage1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_StatistiquesColis = new QPushButton(stackedWidgetPage1);
        pushButton_StatistiquesColis->setObjectName(QStringLiteral("pushButton_StatistiquesColis"));
        pushButton_StatistiquesColis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));
        pushButton_StatistiquesColis->setCheckable(true);

        verticalLayout_3->addWidget(pushButton_StatistiquesColis);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout_3->addLayout(horizontalLayout_4);

        statcolis = new QCustomPlot(stackedWidgetPage1);
        statcolis->setObjectName(QStringLiteral("statcolis"));
        statcolis->setMinimumSize(QSize(300, 400));
        horizontalLayout_3 = new QHBoxLayout(statcolis);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout_3->addWidget(statcolis);


        gridLayout_3->addLayout(verticalLayout_3, 1, 2, 1, 1);

        commandLinkButton = new QCommandLinkButton(stackedWidgetPage1);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setMaximumSize(QSize(101, 41));
        commandLinkButton->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        gridLayout_3->addWidget(commandLinkButton, 0, 2, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pushButton_Arduino = new QPushButton(stackedWidgetPage1);
        pushButton_Arduino->setObjectName(QStringLiteral("pushButton_Arduino"));
        pushButton_Arduino->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        verticalLayout_10->addWidget(pushButton_Arduino);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolBox_colis = new QToolBox(stackedWidgetPage1);
        toolBox_colis->setObjectName(QStringLiteral("toolBox_colis"));
        toolBox_colis->setAutoFillBackground(false);
        toolBox_colis->setStyleSheet(QLatin1String("QToolBox{\n"
"border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px;}\n"
"\n"
"QToolBox::tab {\n"
"background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;}\n"
"QToolBox::page {\n"
"	border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px\n"
"}"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 585, 279));
        pushButton_recherche_colis = new QPushButton(page_7);
        pushButton_recherche_colis->setObjectName(QStringLiteral("pushButton_recherche_colis"));
        pushButton_recherche_colis->setGeometry(QRect(260, 20, 131, 19));
        pushButton_recherche_colis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));
        pushButton_recherche_colis->setCheckable(true);
        layoutWidget_2 = new QWidget(page_7);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(12, 19, 224, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_recherche_colis = new QLineEdit(layoutWidget_2);
        lineEdit_recherche_colis->setObjectName(QStringLiteral("lineEdit_recherche_colis"));

        horizontalLayout->addWidget(lineEdit_recherche_colis);

        toolBox_colis->addItem(page_7, QStringLiteral("Recherche simple"));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        page_8->setGeometry(QRect(0, 0, 585, 279));
        layoutWidget_3 = new QWidget(page_8);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 473, 22));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        radioButton_numcolis = new QRadioButton(layoutWidget_3);
        radioButton_numcolis->setObjectName(QStringLiteral("radioButton_numcolis"));

        horizontalLayout_19->addWidget(radioButton_numcolis);

        radioButton_adresse = new QRadioButton(layoutWidget_3);
        radioButton_adresse->setObjectName(QStringLiteral("radioButton_adresse"));

        horizontalLayout_19->addWidget(radioButton_adresse);

        radioButton_destinataire = new QRadioButton(layoutWidget_3);
        radioButton_destinataire->setObjectName(QStringLiteral("radioButton_destinataire"));

        horizontalLayout_19->addWidget(radioButton_destinataire);

        radioButton_expediteur = new QRadioButton(layoutWidget_3);
        radioButton_expediteur->setObjectName(QStringLiteral("radioButton_expediteur"));

        horizontalLayout_19->addWidget(radioButton_expediteur);

        radioButton_dateL = new QRadioButton(layoutWidget_3);
        radioButton_dateL->setObjectName(QStringLiteral("radioButton_dateL"));

        horizontalLayout_19->addWidget(radioButton_dateL);

        AD = new QComboBox(page_8);
        AD->setObjectName(QStringLiteral("AD"));
        AD->setGeometry(QRect(30, 91, 121, 21));
        QPalette palette;
        QBrush brush(QColor(232, 96, 84, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        AD->setPalette(palette);
        QFont font1;
        font1.setStyleStrategy(QFont::PreferDefault);
        AD->setFont(font1);
        AD->setAutoFillBackground(false);
        AD->setStyleSheet(QLatin1String("QComboBox {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QComboBox:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}"));
        pushButton_triColis = new QPushButton(page_8);
        pushButton_triColis->setObjectName(QStringLiteral("pushButton_triColis"));
        pushButton_triColis->setGeometry(QRect(250, 90, 151, 28));
        pushButton_triColis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}"));
        toolBox_colis->addItem(page_8, QStringLiteral("Tri"));

        verticalLayout_2->addWidget(toolBox_colis);

        tableView_colis = new QTableView(stackedWidgetPage1);
        tableView_colis->setObjectName(QStringLiteral("tableView_colis"));
        tableView_colis->setMinimumSize(QSize(341, 351));
        tableView_colis->setStyleSheet(QLatin1String("QTableView {\n"
"    selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                stop: 0 #FF92BB, stop: 1 white);\n"
"}"));

        verticalLayout_2->addWidget(tableView_colis);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_export_colis = new QPushButton(stackedWidgetPage1);
        pushButton_export_colis->setObjectName(QStringLiteral("pushButton_export_colis"));
        pushButton_export_colis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_export_colis);

        pushButton_imprimeColis = new QPushButton(stackedWidgetPage1);
        pushButton_imprimeColis->setObjectName(QStringLiteral("pushButton_imprimeColis"));
        pushButton_imprimeColis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_imprimeColis);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_10->addLayout(verticalLayout_4);


        gridLayout_3->addLayout(verticalLayout_10, 0, 1, 2, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_2 = new QGroupBox(stackedWidgetPage1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 431));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_dateliv = new QLabel(groupBox_2);
        label_dateliv->setObjectName(QStringLiteral("label_dateliv"));
        QFont font2;
        font2.setFamily(QStringLiteral("Lucida Sans"));
        font2.setBold(true);
        font2.setWeight(75);
        label_dateliv->setFont(font2);

        horizontalLayout_15->addWidget(label_dateliv);

        dateEdit_livraison = new QDateEdit(groupBox_2);
        dateEdit_livraison->setObjectName(QStringLiteral("dateEdit_livraison"));
        QFont font3;
        font3.setKerning(true);
        dateEdit_livraison->setFont(font3);
        dateEdit_livraison->setStyleSheet(QStringLiteral(""));

        horizontalLayout_15->addWidget(dateEdit_livraison);


        gridLayout->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_adresseliv = new QLabel(groupBox_2);
        label_adresseliv->setObjectName(QStringLiteral("label_adresseliv"));
        label_adresseliv->setFont(font2);

        horizontalLayout_16->addWidget(label_adresseliv);

        lineEdit_adresseliv = new QLineEdit(groupBox_2);
        lineEdit_adresseliv->setObjectName(QStringLiteral("lineEdit_adresseliv"));

        horizontalLayout_16->addWidget(lineEdit_adresseliv);


        gridLayout->addLayout(horizontalLayout_16, 2, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_expediteur = new QLabel(groupBox_2);
        label_expediteur->setObjectName(QStringLiteral("label_expediteur"));
        label_expediteur->setFont(font2);

        horizontalLayout_17->addWidget(label_expediteur);

        lineEdit_expediteur = new QLineEdit(groupBox_2);
        lineEdit_expediteur->setObjectName(QStringLiteral("lineEdit_expediteur"));
        QPalette palette1;
        lineEdit_expediteur->setPalette(palette1);

        horizontalLayout_17->addWidget(lineEdit_expediteur);


        gridLayout->addLayout(horizontalLayout_17, 3, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_destinataire = new QLabel(groupBox_2);
        label_destinataire->setObjectName(QStringLiteral("label_destinataire"));
        label_destinataire->setFont(font2);

        horizontalLayout_18->addWidget(label_destinataire);

        lineEdit_destinataire = new QLineEdit(groupBox_2);
        lineEdit_destinataire->setObjectName(QStringLiteral("lineEdit_destinataire"));

        horizontalLayout_18->addWidget(lineEdit_destinataire);


        gridLayout->addLayout(horizontalLayout_18, 4, 0, 1, 1);

        pushButton_ajouterColis = new QPushButton(groupBox_2);
        pushButton_ajouterColis->setObjectName(QStringLiteral("pushButton_ajouterColis"));
        pushButton_ajouterColis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_ajouterColis, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_numcolis = new QLabel(groupBox_2);
        label_numcolis->setObjectName(QStringLiteral("label_numcolis"));
        label_numcolis->setFont(font2);

        horizontalLayout_5->addWidget(label_numcolis);

        lineEdit_numcolis = new QLineEdit(groupBox_2);
        lineEdit_numcolis->setObjectName(QStringLiteral("lineEdit_numcolis"));

        horizontalLayout_5->addWidget(lineEdit_numcolis);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        pushButton_modifier_colis = new QPushButton(stackedWidgetPage1);
        pushButton_modifier_colis->setObjectName(QStringLiteral("pushButton_modifier_colis"));
        pushButton_modifier_colis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));
        pushButton_modifier_colis->setCheckable(true);

        horizontalLayout_22->addWidget(pushButton_modifier_colis);

        contract_colis = new QPushButton(stackedWidgetPage1);
        contract_colis->setObjectName(QStringLiteral("contract_colis"));
        contract_colis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_22->addWidget(contract_colis);

        pushButton_supprimer_colis = new QPushButton(stackedWidgetPage1);
        pushButton_supprimer_colis->setObjectName(QStringLiteral("pushButton_supprimer_colis"));
        pushButton_supprimer_colis->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_22->addWidget(pushButton_supprimer_colis);


        verticalLayout_5->addLayout(horizontalLayout_22);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 2, 1);

        stackedWidget_2->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        gridLayout_2 = new QGridLayout(stackedWidgetPage2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox = new QGroupBox(stackedWidgetPage2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 451));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_nom = new QLabel(groupBox);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        QFont font4;
        font4.setFamily(QStringLiteral("Lucida Sans"));
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        label_nom->setFont(font4);

        horizontalLayout_8->addWidget(label_nom);

        lineEdit_nom = new QLineEdit(groupBox);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        horizontalLayout_8->addWidget(lineEdit_nom);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_ID = new QLabel(groupBox);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        label_ID->setFont(font4);

        horizontalLayout_11->addWidget(label_ID);

        lineEdit_ID = new QLineEdit(groupBox);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));

        horizontalLayout_11->addWidget(lineEdit_ID);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_nbC = new QLabel(groupBox);
        label_nbC->setObjectName(QStringLiteral("label_nbC"));
        label_nbC->setFont(font4);

        horizontalLayout_12->addWidget(label_nbC);

        lineEdit_nbC = new QLineEdit(groupBox);
        lineEdit_nbC->setObjectName(QStringLiteral("lineEdit_nbC"));

        horizontalLayout_12->addWidget(lineEdit_nbC);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_produit = new QLabel(groupBox);
        label_produit->setObjectName(QStringLiteral("label_produit"));
        label_produit->setFont(font4);

        horizontalLayout_13->addWidget(label_produit);

        comboBox_produit = new QComboBox(groupBox);
        comboBox_produit->setObjectName(QStringLiteral("comboBox_produit"));
        comboBox_produit->setStyleSheet(QLatin1String("QComboBox {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QComboBox:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QComboBox:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_13->addWidget(comboBox_produit);


        verticalLayout_7->addLayout(horizontalLayout_13);

        pushButton_ajouterP = new QPushButton(groupBox);
        pushButton_ajouterP->setObjectName(QStringLiteral("pushButton_ajouterP"));
        pushButton_ajouterP->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}"));

        verticalLayout_7->addWidget(pushButton_ajouterP);


        verticalLayout_8->addWidget(groupBox);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton_modifier_Partenaires = new QPushButton(stackedWidgetPage2);
        pushButton_modifier_Partenaires->setObjectName(QStringLiteral("pushButton_modifier_Partenaires"));
        pushButton_modifier_Partenaires->setMaximumSize(QSize(16777215, 19));
        pushButton_modifier_Partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}"));
        pushButton_modifier_Partenaires->setCheckable(true);

        horizontalLayout_14->addWidget(pushButton_modifier_Partenaires);

        pushButton_supp_Partenaires = new QPushButton(stackedWidgetPage2);
        pushButton_supp_Partenaires->setObjectName(QStringLiteral("pushButton_supp_Partenaires"));
        pushButton_supp_Partenaires->setMaximumSize(QSize(16777215, 19));
        pushButton_supp_Partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        horizontalLayout_14->addWidget(pushButton_supp_Partenaires);


        verticalLayout_8->addLayout(horizontalLayout_14);


        gridLayout_2->addLayout(verticalLayout_8, 0, 0, 2, 1);

        commandLinkButton_retour = new QCommandLinkButton(stackedWidgetPage2);
        commandLinkButton_retour->setObjectName(QStringLiteral("commandLinkButton_retour"));
        commandLinkButton_retour->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}"));

        gridLayout_2->addWidget(commandLinkButton_retour, 0, 2, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        pushButton_Statistiques_partenaires = new QPushButton(stackedWidgetPage2);
        pushButton_Statistiques_partenaires->setObjectName(QStringLiteral("pushButton_Statistiques_partenaires"));
        pushButton_Statistiques_partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        verticalLayout_9->addWidget(pushButton_Statistiques_partenaires);

        statPartenaires = new QCustomPlot(stackedWidgetPage2);
        statPartenaires->setObjectName(QStringLiteral("statPartenaires"));
        statPartenaires->setMinimumSize(QSize(300, 400));
        horizontalLayout_10 = new QHBoxLayout(statPartenaires);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));

        verticalLayout_9->addWidget(statPartenaires);


        gridLayout_2->addLayout(verticalLayout_9, 1, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        toolBox_part = new QToolBox(stackedWidgetPage2);
        toolBox_part->setObjectName(QStringLiteral("toolBox_part"));
        toolBox_part->setAutoFillBackground(false);
        toolBox_part->setStyleSheet(QLatin1String("QToolBox{\n"
"border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px;}\n"
"\n"
"QToolBox::tab {\n"
"background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;}\n"
"QToolBox::page {\n"
"	border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px\n"
"}"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 16, 16));
        pushButton_recherche_partenaires = new QPushButton(page_5);
        pushButton_recherche_partenaires->setObjectName(QStringLiteral("pushButton_recherche_partenaires"));
        pushButton_recherche_partenaires->setGeometry(QRect(280, 30, 121, 19));
        pushButton_recherche_partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));
        pushButton_recherche_partenaires->setCheckable(true);
        layoutWidget_4 = new QWidget(page_5);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 30, 224, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit_recherche__partenaires = new QLineEdit(layoutWidget_4);
        lineEdit_recherche__partenaires->setObjectName(QStringLiteral("lineEdit_recherche__partenaires"));

        horizontalLayout_7->addWidget(lineEdit_recherche__partenaires);

        toolBox_part->addItem(page_5, QStringLiteral("recherche"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 100, 30));
        layoutWidget_5 = new QWidget(page_6);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(23, 30, 299, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton_9 = new QRadioButton(layoutWidget_5);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout_6->addWidget(radioButton_9);

        radioButton_7 = new QRadioButton(layoutWidget_5);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_6->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget_5);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout_6->addWidget(radioButton_8);

        toolBox_part->addItem(page_6, QStringLiteral("tri"));

        verticalLayout_6->addWidget(toolBox_part);

        tableView_part = new QTableView(stackedWidgetPage2);
        tableView_part->setObjectName(QStringLiteral("tableView_part"));
        tableView_part->setMinimumSize(QSize(341, 341));

        verticalLayout_6->addWidget(tableView_part);

        pushButton_export_partenaires = new QPushButton(stackedWidgetPage2);
        pushButton_export_partenaires->setObjectName(QStringLiteral("pushButton_export_partenaires"));
        pushButton_export_partenaires->setMinimumSize(QSize(101, 19));
        pushButton_export_partenaires->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color:#e86054;  /* Green */ \n"
"  border: none;\n"
" /* color: gray; \n"
"  padding: 15px 32px;*/\n"
"  text-align: center;\n"
"  font-size: 16px;\n"
"	border:9px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#e0987b;\n"
"color:#7d2b20;\n"
"}\n"
"QPushButton:click{\n"
"\n"
"background-color:#FCDBCE;\n"
"}\n"
""));

        verticalLayout_6->addWidget(pushButton_export_partenaires);


        gridLayout_2->addLayout(verticalLayout_6, 1, 1, 1, 1);

        stackedWidget_2->addWidget(stackedWidgetPage2);
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 10, 93, 28));
        stackedWidget->addWidget(page);
        delivaro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(delivaro);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1579, 26));
        delivaro->setMenuBar(menubar);
        statusbar = new QStatusBar(delivaro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        delivaro->setStatusBar(statusbar);

        retranslateUi(delivaro);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(0);
        toolBox_colis->setCurrentIndex(1);
        toolBox_part->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(delivaro);
    } // setupUi

    void retranslateUi(QMainWindow *delivaro)
    {
        delivaro->setWindowTitle(QApplication::translate("delivaro", "delivaro", Q_NULLPTR));
        titre->setText(QApplication::translate("delivaro", "Delivaro", Q_NULLPTR));
        lineEdit_login_2->setPlaceholderText(QApplication::translate("delivaro", "Username", Q_NULLPTR));
        login_2->setText(QApplication::translate("delivaro", "Login", Q_NULLPTR));
        options_2->setText(QApplication::translate("delivaro", "Options", Q_NULLPTR));
        quit_2->setText(QApplication::translate("delivaro", "Quit", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("delivaro", "Gestion des partenaires", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("delivaro", "Gestion des colis", Q_NULLPTR));
        pushButton_tabcolis->setText(QApplication::translate("delivaro", "Colis", Q_NULLPTR));
        partenaires->setText(QApplication::translate("delivaro", "Partenaires", Q_NULLPTR));
        pushButton_StatistiquesColis->setText(QApplication::translate("delivaro", "Statistiques ", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("delivaro", "Retour", Q_NULLPTR));
        pushButton_Arduino->setText(QApplication::translate("delivaro", "V\303\251rifier Temp\303\251rature", Q_NULLPTR));
        pushButton_recherche_colis->setText(QApplication::translate("delivaro", "Rechercher", Q_NULLPTR));
        toolBox_colis->setItemText(toolBox_colis->indexOf(page_7), QApplication::translate("delivaro", "Recherche simple", Q_NULLPTR));
        radioButton_numcolis->setText(QApplication::translate("delivaro", "Num_colis", Q_NULLPTR));
        radioButton_adresse->setText(QApplication::translate("delivaro", "Adresse", Q_NULLPTR));
        radioButton_destinataire->setText(QApplication::translate("delivaro", "ID_partenaire", Q_NULLPTR));
        radioButton_expediteur->setText(QApplication::translate("delivaro", "ID_client", Q_NULLPTR));
        radioButton_dateL->setText(QApplication::translate("delivaro", "Date livraison", Q_NULLPTR));
        AD->clear();
        AD->insertItems(0, QStringList()
         << QApplication::translate("delivaro", "ASC", Q_NULLPTR)
         << QApplication::translate("delivaro", "DESC", Q_NULLPTR)
        );
        pushButton_triColis->setText(QApplication::translate("delivaro", "Trier", Q_NULLPTR));
        toolBox_colis->setItemText(toolBox_colis->indexOf(page_8), QApplication::translate("delivaro", "Tri", Q_NULLPTR));
        pushButton_export_colis->setText(QApplication::translate("delivaro", "Exporter Excel", Q_NULLPTR));
        pushButton_imprimeColis->setText(QApplication::translate("delivaro", "Imprimer bon de commande", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("delivaro", "Ajouter Colis", Q_NULLPTR));
        label_dateliv->setText(QApplication::translate("delivaro", "Date de livraison", Q_NULLPTR));
        label_adresseliv->setText(QApplication::translate("delivaro", "Adresse de livraison", Q_NULLPTR));
        label_expediteur->setText(QApplication::translate("delivaro", "ID Partenaire", Q_NULLPTR));
        label_destinataire->setText(QApplication::translate("delivaro", "ID client", Q_NULLPTR));
        pushButton_ajouterColis->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        label_numcolis->setText(QApplication::translate("delivaro", "Num\303\251ro de la colis", Q_NULLPTR));
        pushButton_modifier_colis->setText(QApplication::translate("delivaro", "Modifier", Q_NULLPTR));
        contract_colis->setText(QApplication::translate("delivaro", "Contract", Q_NULLPTR));
        pushButton_supprimer_colis->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("delivaro", "Nouveau Partenaire", Q_NULLPTR));
        label_nom->setText(QApplication::translate("delivaro", "Nom du partenaire", Q_NULLPTR));
        label_ID->setText(QApplication::translate("delivaro", "Identifiant", Q_NULLPTR));
        label_nbC->setText(QApplication::translate("delivaro", "Nombre de commandes", Q_NULLPTR));
        label_produit->setText(QApplication::translate("delivaro", "Type de produit", Q_NULLPTR));
        comboBox_produit->clear();
        comboBox_produit->insertItems(0, QStringList()
         << QApplication::translate("delivaro", "alimentaire", Q_NULLPTR)
         << QApplication::translate("delivaro", "esthetique", Q_NULLPTR)
         << QApplication::translate("delivaro", "vestimentaire", Q_NULLPTR)
         << QApplication::translate("delivaro", "divers", Q_NULLPTR)
        );
        comboBox_produit->setCurrentText(QApplication::translate("delivaro", "alimentaire", Q_NULLPTR));
        pushButton_ajouterP->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        pushButton_modifier_Partenaires->setText(QApplication::translate("delivaro", "Modifier", Q_NULLPTR));
        pushButton_supp_Partenaires->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        commandLinkButton_retour->setText(QApplication::translate("delivaro", "retour", Q_NULLPTR));
        pushButton_Statistiques_partenaires->setText(QApplication::translate("delivaro", "Statistiques", Q_NULLPTR));
        pushButton_recherche_partenaires->setText(QApplication::translate("delivaro", "Rechercher", Q_NULLPTR));
        toolBox_part->setItemText(toolBox_part->indexOf(page_5), QApplication::translate("delivaro", "recherche", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("delivaro", "nom", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("delivaro", "nombre_commandes", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("delivaro", "produit", Q_NULLPTR));
        toolBox_part->setItemText(toolBox_part->indexOf(page_6), QApplication::translate("delivaro", "tri", Q_NULLPTR));
        pushButton_export_partenaires->setText(QApplication::translate("delivaro", "Imprimer PDF", Q_NULLPTR));
        pushButton->setText(QApplication::translate("delivaro", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class delivaro: public Ui_delivaro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVARO_H
