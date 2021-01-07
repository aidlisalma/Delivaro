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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_delivaro
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_12;
    QStackedWidget *stackedWidget;
    QWidget *authentification;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_28;
    QLabel *titre;
    QVBoxLayout *verticalLayout_29;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_password;
    QCheckBox *passwordcheck;
    QVBoxLayout *verticalLayout_30;
    QPushButton *login;
    QPushButton *options;
    QPushButton *quit;
    QWidget *menugestion;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *gestionpartenaires;
    QPushButton *gestioncolis;
    QPushButton *gestionpubreclamation;
    QPushButton *vt;
    QWidget *colisPartenaires;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_tabcolis;
    QPushButton *pushButton_tabpartenaires;
    QStackedWidget *stackedWidget_2;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_StatistiquesColis;
    QHBoxLayout *horizontalLayout_4;
    QCustomPlot *statcolis;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *retour;
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
    QCommandLinkButton *retour2;
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
    QPushButton *deconnexion;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QCustomPlot *widget_2;
    QPushButton *StatPub;
    QTableView *tableViewPub;
    QPushButton *AjouterPub;
    QLabel *label;
    QLineEdit *DureePub;
    QLineEdit *IdPub;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *PrixPub;
    QDateEdit *DatePub;
    QPushButton *ModifierPub;
    QPushButton *SupprimerPub;
    QLineEdit *RecherchePub_2;
    QPushButton *RecherchePub;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QPushButton *StatistiqueRec;
    QCustomPlot *widget;
    QPushButton *AjouterRec;
    QLabel *iDLabel;
    QLabel *produitIDLabel;
    QLineEdit *IdRec;
    QLineEdit *ProduitIdRec;
    QLabel *etatTraitementLabel;
    QLineEdit *TraiteRec;
    QLabel *descriptionLabel;
    QDateEdit *DateRec;
    QLabel *dateDAjoutLabel;
    QLineEdit *DescriptionRec;
    QTableView *tableViewRec;
    QLineEdit *RechercheRec_2;
    QPushButton *RechercheRec;
    QPushButton *TriRec;
    QPushButton *Play;
    QPushButton *Mute;
    QPushButton *ModifierRec;
    QPushButton *SupprimerRec;
    QPushButton *Exporter;
    QPushButton *retourmenu;
    QWidget *page_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QStackedWidget *stackedWidget_3;
    QWidget *page_4;
    QTableWidget *table_modif;
    QLineEdit *ln1;
    QLabel *label_6;
    QPushButton *y1;
    QPushButton *y2;
    QPushButton *y3;
    QWidget *page_9;
    QGroupBox *groupBox_5;
    QComboBox *comboBox;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QLineEdit *matricule;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QPushButton *pb2;
    QLabel *label_8;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pb3;
    QWidget *page_10;
    QGroupBox *groupBox_6;
    QTableWidget *table_trajeff;
    QPushButton *pb4;
    QWidget *tab_5;
    QStackedWidget *stackedWidget_4;
    QWidget *page_11;
    QTableWidget *table_trajet;
    QLabel *label_17;
    QLineEdit *lineEdit_10;
    QPushButton *y5;
    QPushButton *y6;
    QWidget *page_12;
    QGroupBox *groupBox_7;
    QTabWidget *tabWidget_3;
    QWidget *tab_3;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QDateEdit *dateEdit;
    QWidget *tab_6;
    QLabel *label_16;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_18;
    QLineEdit *lineEdit_9;
    QLabel *label_19;
    QDateEdit *dateEdit_2;
    QLabel *label_20;
    QWidget *tab_7;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QTableWidget *tabledispo;
    QPushButton *pb6;
    QPushButton *pb5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *delivaro)
    {
        if (delivaro->objectName().isEmpty())
            delivaro->setObjectName(QStringLiteral("delivaro"));
        delivaro->resize(1579, 879);
        delivaro->setLayoutDirection(Qt::LeftToRight);
        delivaro->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-color:#FFEEE7;\n"
"\n"
"}"));
        centralwidget = new QWidget(delivaro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}\n"
"QPushButton {\\n background-color:#e86054;  /* Green */ \\n  border: none;\\n /* color: gray; \\n  padding: 15px 32px;*/\\n  text-align: center;\\n  font-size: 16px;\\n	border:9px;\\n}\\nQPushButton:hover{\\n\\nbackground-color:#e0987b;\\ncolor:#7d2b20;\\n}\\nQPushButton:click{\\n\\nbackground-color:#FCDBCE;\\n}"));
        verticalLayout_12 = new QVBoxLayout(centralwidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
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
        lineEdit_login = new QLineEdit(layoutWidget_11);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setMaximumSize(QSize(16777215, 31));
        lineEdit_login->setAutoFillBackground(false);
        lineEdit_login->setAlignment(Qt::AlignCenter);

        verticalLayout_29->addWidget(lineEdit_login);

        lineEdit_password = new QLineEdit(layoutWidget_11);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMaximumSize(QSize(16777215, 31));
        lineEdit_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setAlignment(Qt::AlignCenter);

        verticalLayout_29->addWidget(lineEdit_password);

        passwordcheck = new QCheckBox(layoutWidget_11);
        passwordcheck->setObjectName(QStringLiteral("passwordcheck"));
        QIcon icon;
        icon.addFile(QStringLiteral("showpasswordicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordcheck->setIcon(icon);

        verticalLayout_29->addWidget(passwordcheck);


        verticalLayout_28->addLayout(verticalLayout_29);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        login = new QPushButton(layoutWidget_11);
        login->setObjectName(QStringLiteral("login"));

        verticalLayout_30->addWidget(login);

        options = new QPushButton(layoutWidget_11);
        options->setObjectName(QStringLiteral("options"));

        verticalLayout_30->addWidget(options);

        quit = new QPushButton(layoutWidget_11);
        quit->setObjectName(QStringLiteral("quit"));

        verticalLayout_30->addWidget(quit);


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
        gestionpartenaires = new QPushButton(layoutWidget);
        gestionpartenaires->setObjectName(QStringLiteral("gestionpartenaires"));

        verticalLayout->addWidget(gestionpartenaires);

        gestioncolis = new QPushButton(layoutWidget);
        gestioncolis->setObjectName(QStringLiteral("gestioncolis"));

        verticalLayout->addWidget(gestioncolis);

        gestionpubreclamation = new QPushButton(layoutWidget);
        gestionpubreclamation->setObjectName(QStringLiteral("gestionpubreclamation"));

        verticalLayout->addWidget(gestionpubreclamation);

        vt = new QPushButton(layoutWidget);
        vt->setObjectName(QStringLiteral("vt"));

        verticalLayout->addWidget(vt);

        stackedWidget->addWidget(menugestion);
        colisPartenaires = new QWidget();
        colisPartenaires->setObjectName(QStringLiteral("colisPartenaires"));
        layoutWidget1 = new QWidget(colisPartenaires);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(219, 11, 121, 22));
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

        pushButton_tabpartenaires = new QPushButton(layoutWidget1);
        pushButton_tabpartenaires->setObjectName(QStringLiteral("pushButton_tabpartenaires"));
        pushButton_tabpartenaires->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_20->addWidget(pushButton_tabpartenaires);

        stackedWidget_2 = new QStackedWidget(colisPartenaires);
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

        retour = new QCommandLinkButton(stackedWidgetPage1);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setMaximumSize(QSize(101, 41));
        retour->setStyleSheet(QLatin1String("QPushButton {\n"
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

        gridLayout_3->addWidget(retour, 0, 2, 1, 1);

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
        page_7->setGeometry(QRect(0, 0, 588, 294));
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
        page_8->setGeometry(QRect(0, 0, 588, 294));
        layoutWidget_3 = new QWidget(page_8);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 483, 24));
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
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
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

        retour2 = new QCommandLinkButton(stackedWidgetPage2);
        retour2->setObjectName(QStringLiteral("retour2"));
        retour2->setStyleSheet(QLatin1String("QPushButton {\n"
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

        gridLayout_2->addWidget(retour2, 0, 2, 1, 1);

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
        layoutWidget_5->setGeometry(QRect(23, 30, 299, 24));
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
        deconnexion = new QPushButton(colisPartenaires);
        deconnexion->setObjectName(QStringLiteral("deconnexion"));
        deconnexion->setGeometry(QRect(530, 10, 93, 28));
        stackedWidget->addWidget(colisPartenaires);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget:pane {\n"
"border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 280, 211, 241));
        widget_2 = new QCustomPlot(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(800, 80, 219, 269));
        StatPub = new QPushButton(tab);
        StatPub->setObjectName(QStringLiteral("StatPub"));
        StatPub->setGeometry(QRect(850, 40, 121, 31));
        StatPub->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tableViewPub = new QTableView(tab);
        tableViewPub->setObjectName(QStringLiteral("tableViewPub"));
        tableViewPub->setGeometry(QRect(260, 60, 491, 229));
        AjouterPub = new QPushButton(tab);
        AjouterPub->setObjectName(QStringLiteral("AjouterPub"));
        AjouterPub->setGeometry(QRect(90, 210, 101, 41));
        AjouterPub->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(51, 91, 16, 16));
        DureePub = new QLineEdit(tab);
        DureePub->setObjectName(QStringLiteral("DureePub"));
        DureePub->setGeometry(QRect(116, 117, 110, 20));
        DureePub->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        IdPub = new QLineEdit(tab);
        IdPub->setObjectName(QStringLiteral("IdPub"));
        IdPub->setGeometry(QRect(116, 91, 110, 20));
        IdPub->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(51, 143, 59, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(51, 167, 18, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(51, 117, 29, 16));
        PrixPub = new QLineEdit(tab);
        PrixPub->setObjectName(QStringLiteral("PrixPub"));
        PrixPub->setGeometry(QRect(116, 167, 110, 20));
        PrixPub->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        DatePub = new QDateEdit(tab);
        DatePub->setObjectName(QStringLiteral("DatePub"));
        DatePub->setGeometry(QRect(116, 143, 111, 18));
        ModifierPub = new QPushButton(tab);
        ModifierPub->setObjectName(QStringLiteral("ModifierPub"));
        ModifierPub->setGeometry(QRect(390, 330, 101, 31));
        ModifierPub->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ModifierPub->setCheckable(true);
        SupprimerPub = new QPushButton(tab);
        SupprimerPub->setObjectName(QStringLiteral("SupprimerPub"));
        SupprimerPub->setGeometry(QRect(520, 330, 101, 31));
        SupprimerPub->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SupprimerPub->setCheckable(false);
        RecherchePub_2 = new QLineEdit(tab);
        RecherchePub_2->setObjectName(QStringLiteral("RecherchePub_2"));
        RecherchePub_2->setGeometry(QRect(370, 30, 110, 20));
        RecherchePub_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        RecherchePub = new QPushButton(tab);
        RecherchePub->setObjectName(QStringLiteral("RecherchePub"));
        RecherchePub->setGeometry(QRect(520, 20, 91, 31));
        RecherchePub->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab, QString());
        label->raise();
        DureePub->raise();
        IdPub->raise();
        label_4->raise();
        label_2->raise();
        label_3->raise();
        PrixPub->raise();
        DatePub->raise();
        ModifierPub->raise();
        SupprimerPub->raise();
        RecherchePub_2->raise();
        RecherchePub->raise();
        groupBox_3->raise();
        widget_2->raise();
        StatPub->raise();
        tableViewPub->raise();
        AjouterPub->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 300, 261, 231));
        StatistiqueRec = new QPushButton(tab_2);
        StatistiqueRec->setObjectName(QStringLiteral("StatistiqueRec"));
        StatistiqueRec->setGeometry(QRect(960, 50, 91, 31));
        StatistiqueRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        widget = new QCustomPlot(tab_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(900, 118, 239, 271));
        AjouterRec = new QPushButton(tab_2);
        AjouterRec->setObjectName(QStringLiteral("AjouterRec"));
        AjouterRec->setGeometry(QRect(90, 250, 91, 31));
        AjouterRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        iDLabel = new QLabel(tab_2);
        iDLabel->setObjectName(QStringLiteral("iDLabel"));
        iDLabel->setGeometry(QRect(41, 111, 16, 16));
        produitIDLabel = new QLabel(tab_2);
        produitIDLabel->setObjectName(QStringLiteral("produitIDLabel"));
        produitIDLabel->setGeometry(QRect(41, 137, 48, 16));
        IdRec = new QLineEdit(tab_2);
        IdRec->setObjectName(QStringLiteral("IdRec"));
        IdRec->setGeometry(QRect(122, 111, 108, 20));
        IdRec->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        ProduitIdRec = new QLineEdit(tab_2);
        ProduitIdRec->setObjectName(QStringLiteral("ProduitIdRec"));
        ProduitIdRec->setGeometry(QRect(122, 137, 108, 20));
        ProduitIdRec->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        etatTraitementLabel = new QLabel(tab_2);
        etatTraitementLabel->setObjectName(QStringLiteral("etatTraitementLabel"));
        etatTraitementLabel->setGeometry(QRect(41, 213, 75, 16));
        TraiteRec = new QLineEdit(tab_2);
        TraiteRec->setObjectName(QStringLiteral("TraiteRec"));
        TraiteRec->setGeometry(QRect(122, 213, 108, 20));
        TraiteRec->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        descriptionLabel = new QLabel(tab_2);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(41, 187, 53, 16));
        DateRec = new QDateEdit(tab_2);
        DateRec->setObjectName(QStringLiteral("DateRec"));
        DateRec->setGeometry(QRect(122, 163, 111, 18));
        dateDAjoutLabel = new QLabel(tab_2);
        dateDAjoutLabel->setObjectName(QStringLiteral("dateDAjoutLabel"));
        dateDAjoutLabel->setGeometry(QRect(41, 163, 59, 16));
        DescriptionRec = new QLineEdit(tab_2);
        DescriptionRec->setObjectName(QStringLiteral("DescriptionRec"));
        DescriptionRec->setGeometry(QRect(122, 187, 108, 20));
        DescriptionRec->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        tableViewRec = new QTableView(tab_2);
        tableViewRec->setObjectName(QStringLiteral("tableViewRec"));
        tableViewRec->setGeometry(QRect(301, 101, 561, 192));
        RechercheRec_2 = new QLineEdit(tab_2);
        RechercheRec_2->setObjectName(QStringLiteral("RechercheRec_2"));
        RechercheRec_2->setGeometry(QRect(390, 50, 110, 31));
        RechercheRec_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        RechercheRec = new QPushButton(tab_2);
        RechercheRec->setObjectName(QStringLiteral("RechercheRec"));
        RechercheRec->setGeometry(QRect(520, 50, 91, 31));
        RechercheRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        TriRec = new QPushButton(tab_2);
        TriRec->setObjectName(QStringLiteral("TriRec"));
        TriRec->setGeometry(QRect(650, 50, 91, 31));
        TriRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Play = new QPushButton(tab_2);
        Play->setObjectName(QStringLiteral("Play"));
        Play->setGeometry(QRect(940, 0, 81, 31));
        Play->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Mute = new QPushButton(tab_2);
        Mute->setObjectName(QStringLiteral("Mute"));
        Mute->setGeometry(QRect(1038, 0, 81, 31));
        Mute->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ModifierRec = new QPushButton(tab_2);
        ModifierRec->setObjectName(QStringLiteral("ModifierRec"));
        ModifierRec->setGeometry(QRect(361, 338, 101, 41));
        ModifierRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ModifierRec->setCheckable(true);
        SupprimerRec = new QPushButton(tab_2);
        SupprimerRec->setObjectName(QStringLiteral("SupprimerRec"));
        SupprimerRec->setGeometry(QRect(506, 338, 101, 41));
        SupprimerRec->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Exporter = new QPushButton(tab_2);
        Exporter->setObjectName(QStringLiteral("Exporter"));
        Exporter->setGeometry(QRect(651, 338, 101, 41));
        Exporter->setStyleSheet(QLatin1String("QPushButton {\n"
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
        retourmenu = new QPushButton(tab_2);
        retourmenu->setObjectName(QStringLiteral("retourmenu"));
        retourmenu->setGeometry(QRect(1230, 20, 93, 28));
        tabWidget->addTab(tab_2, QString());
        iDLabel->raise();
        produitIDLabel->raise();
        IdRec->raise();
        ProduitIdRec->raise();
        etatTraitementLabel->raise();
        TraiteRec->raise();
        descriptionLabel->raise();
        DateRec->raise();
        dateDAjoutLabel->raise();
        DescriptionRec->raise();
        tableViewRec->raise();
        RechercheRec_2->raise();
        RechercheRec->raise();
        TriRec->raise();
        Play->raise();
        Mute->raise();
        ModifierRec->raise();
        SupprimerRec->raise();
        Exporter->raise();
        groupBox_4->raise();
        StatistiqueRec->raise();
        widget->raise();
        AjouterRec->raise();
        retourmenu->raise();

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tabWidget_2 = new QTabWidget(page_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(730, 30, 741, 391));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        stackedWidget_3 = new QStackedWidget(tab_4);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 0, 681, 361));
        stackedWidget_3->setStyleSheet(QStringLiteral(""));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        table_modif = new QTableWidget(page_4);
        if (table_modif->columnCount() < 5)
            table_modif->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_modif->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_modif->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_modif->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_modif->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_modif->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_modif->setObjectName(QStringLiteral("table_modif"));
        table_modif->setEnabled(true);
        table_modif->setGeometry(QRect(50, 40, 521, 281));
        ln1 = new QLineEdit(page_4);
        ln1->setObjectName(QStringLiteral("ln1"));
        ln1->setGeometry(QRect(90, 10, 111, 20));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 12, 71, 16));
        y1 = new QPushButton(page_4);
        y1->setObjectName(QStringLiteral("y1"));
        y1->setGeometry(QRect(590, 50, 75, 23));
        y1->setStyleSheet(QLatin1String("QPushButton {\n"
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
        y2 = new QPushButton(page_4);
        y2->setObjectName(QStringLiteral("y2"));
        y2->setGeometry(QRect(590, 90, 75, 23));
        y2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        y3 = new QPushButton(page_4);
        y3->setObjectName(QStringLiteral("y3"));
        y3->setGeometry(QRect(590, 130, 75, 23));
        y3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_3->addWidget(page_4);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_5 = new QGroupBox(page_9);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(80, 0, 491, 321));
        comboBox = new QComboBox(groupBox_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 70, 111, 21));
        spinBox_2 = new QSpinBox(groupBox_5);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(180, 130, 91, 21));
        spinBox_2->setMaximum(1000000);
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 160, 47, 14));
        matricule = new QLineEdit(groupBox_5);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(180, 40, 113, 20));
        comboBox_2 = new QComboBox(groupBox_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(180, 160, 111, 21));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 40, 61, 16));
        pb2 = new QPushButton(groupBox_5);
        pb2->setObjectName(QStringLiteral("pb2"));
        pb2->setEnabled(false);
        pb2->setGeometry(QRect(136, 250, 91, 23));
        pb2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 130, 91, 16));
        spinBox = new QSpinBox(groupBox_5);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 100, 42, 21));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 100, 71, 16));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 70, 47, 14));
        pb3 = new QPushButton(groupBox_5);
        pb3->setObjectName(QStringLiteral("pb3"));
        pb3->setGeometry(QRect(240, 250, 91, 23));
        pb3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_3->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_6 = new QGroupBox(page_10);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 591, 331));
        table_trajeff = new QTableWidget(groupBox_6);
        if (table_trajeff->columnCount() < 9)
            table_trajeff->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_trajeff->setHorizontalHeaderItem(8, __qtablewidgetitem13);
        table_trajeff->setObjectName(QStringLiteral("table_trajeff"));
        table_trajeff->setGeometry(QRect(10, 30, 571, 261));
        pb4 = new QPushButton(groupBox_6);
        pb4->setObjectName(QStringLiteral("pb4"));
        pb4->setGeometry(QRect(260, 300, 80, 22));
        pb4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_3->addWidget(page_10);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        stackedWidget_4 = new QStackedWidget(tab_5);
        stackedWidget_4->setObjectName(QStringLiteral("stackedWidget_4"));
        stackedWidget_4->setGeometry(QRect(0, 0, 721, 351));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        table_trajet = new QTableWidget(page_11);
        if (table_trajet->columnCount() < 9)
            table_trajet->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table_trajet->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        table_trajet->setObjectName(QStringLiteral("table_trajet"));
        table_trajet->setGeometry(QRect(10, 40, 611, 281));
        label_17 = new QLabel(page_11);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 12, 71, 16));
        lineEdit_10 = new QLineEdit(page_11);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(90, 10, 111, 20));
        y5 = new QPushButton(page_11);
        y5->setObjectName(QStringLiteral("y5"));
        y5->setGeometry(QRect(630, 80, 75, 23));
        y5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        y6 = new QPushButton(page_11);
        y6->setObjectName(QStringLiteral("y6"));
        y6->setGeometry(QRect(630, 120, 75, 23));
        y6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_4->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        groupBox_7 = new QGroupBox(page_12);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(60, 0, 501, 331));
        tabWidget_3 = new QTabWidget(groupBox_7);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 20, 441, 271));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 40, 61, 16));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 70, 47, 14));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 100, 47, 14));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 130, 71, 16));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 160, 47, 14));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 38, 113, 20));
        lineEdit_2->setMaxLength(32767);
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 68, 113, 20));
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 98, 113, 20));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 128, 113, 20));
        dateEdit = new QDateEdit(tab_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(150, 158, 113, 22));
        dateEdit->setDateTime(QDateTime(QDate(2020, 1, 1), QTime(0, 0, 0)));
        tabWidget_3->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(50, 132, 47, 14));
        lineEdit_7 = new QLineEdit(tab_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 40, 113, 20));
        lineEdit_8 = new QLineEdit(tab_6);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(150, 70, 113, 20));
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 102, 71, 16));
        lineEdit_9 = new QLineEdit(tab_6);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(150, 100, 113, 20));
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 42, 47, 14));
        dateEdit_2 = new QDateEdit(tab_6);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(150, 130, 113, 22));
        dateEdit_2->setDateTime(QDateTime(QDate(2020, 1, 1), QTime(0, 0, 0)));
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(50, 72, 47, 14));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_21 = new QLabel(tab_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 10, 71, 16));
        lineEdit_6 = new QLineEdit(tab_7);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 10, 113, 20));
        tabledispo = new QTableWidget(tab_7);
        if (tabledispo->columnCount() < 4)
            tabledispo->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tabledispo->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tabledispo->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tabledispo->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tabledispo->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        tabledispo->setObjectName(QStringLiteral("tabledispo"));
        tabledispo->setGeometry(QRect(7, 40, 421, 201));
        tabWidget_3->addTab(tab_7, QString());
        pb6 = new QPushButton(groupBox_7);
        pb6->setObjectName(QStringLiteral("pb6"));
        pb6->setGeometry(QRect(250, 300, 75, 23));
        pb6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb5 = new QPushButton(groupBox_7);
        pb5->setObjectName(QStringLiteral("pb5"));
        pb5->setEnabled(true);
        pb5->setGeometry(QRect(150, 300, 81, 23));
        pb5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_4->addWidget(page_12);
        tabWidget_2->addTab(tab_5, QString());
        stackedWidget->addWidget(page_3);

        verticalLayout_12->addWidget(stackedWidget);

        delivaro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(delivaro);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1579, 21));
        delivaro->setMenuBar(menubar);
        statusbar = new QStatusBar(delivaro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        delivaro->setStatusBar(statusbar);

        retranslateUi(delivaro);

        stackedWidget->setCurrentIndex(3);
        stackedWidget_2->setCurrentIndex(0);
        toolBox_colis->setCurrentIndex(0);
        toolBox_part->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);
        stackedWidget_4->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(delivaro);
    } // setupUi

    void retranslateUi(QMainWindow *delivaro)
    {
        delivaro->setWindowTitle(QApplication::translate("delivaro", "delivaro", Q_NULLPTR));
        titre->setText(QApplication::translate("delivaro", "Delivaro", Q_NULLPTR));
        lineEdit_login->setPlaceholderText(QApplication::translate("delivaro", "Username", Q_NULLPTR));
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("delivaro", "Password", Q_NULLPTR));
        passwordcheck->setText(QApplication::translate("delivaro", "show password", Q_NULLPTR));
        login->setText(QApplication::translate("delivaro", "Login", Q_NULLPTR));
        options->setText(QApplication::translate("delivaro", "Options", Q_NULLPTR));
        quit->setText(QApplication::translate("delivaro", "Quit", Q_NULLPTR));
        gestionpartenaires->setText(QApplication::translate("delivaro", "Gestion des partenaires", Q_NULLPTR));
        gestioncolis->setText(QApplication::translate("delivaro", "Gestion des colis", Q_NULLPTR));
        gestionpubreclamation->setText(QApplication::translate("delivaro", "Gestion des publicites et reclamations", Q_NULLPTR));
        vt->setText(QApplication::translate("delivaro", "Gestion de Voitures & Trajets", Q_NULLPTR));
        pushButton_tabcolis->setText(QApplication::translate("delivaro", "Colis", Q_NULLPTR));
        pushButton_tabpartenaires->setText(QApplication::translate("delivaro", "Partenaires", Q_NULLPTR));
        pushButton_StatistiquesColis->setText(QApplication::translate("delivaro", "Statistiques ", Q_NULLPTR));
        retour->setText(QApplication::translate("delivaro", "Retour", Q_NULLPTR));
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
        retour2->setText(QApplication::translate("delivaro", "retour", Q_NULLPTR));
        pushButton_Statistiques_partenaires->setText(QApplication::translate("delivaro", "Statistiques", Q_NULLPTR));
        pushButton_recherche_partenaires->setText(QApplication::translate("delivaro", "Rechercher", Q_NULLPTR));
        toolBox_part->setItemText(toolBox_part->indexOf(page_5), QApplication::translate("delivaro", "recherche", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("delivaro", "nom", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("delivaro", "nombre_commandes", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("delivaro", "produit", Q_NULLPTR));
        toolBox_part->setItemText(toolBox_part->indexOf(page_6), QApplication::translate("delivaro", "tri", Q_NULLPTR));
        pushButton_export_partenaires->setText(QApplication::translate("delivaro", "Imprimer PDF", Q_NULLPTR));
        deconnexion->setText(QApplication::translate("delivaro", "D\303\251connexion", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("delivaro", "Ajouter Publicite", Q_NULLPTR));
        StatPub->setText(QApplication::translate("delivaro", "Statistique", Q_NULLPTR));
        AjouterPub->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("delivaro", "ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("delivaro", "Date d'ajout", Q_NULLPTR));
        label_2->setText(QApplication::translate("delivaro", "Prix", Q_NULLPTR));
        label_3->setText(QApplication::translate("delivaro", "Dur\303\251e", Q_NULLPTR));
        ModifierPub->setText(QApplication::translate("delivaro", "Modifier", Q_NULLPTR));
        SupprimerPub->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        RecherchePub->setText(QApplication::translate("delivaro", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("delivaro", "Publicite", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("delivaro", "Ajouter Reclamation", Q_NULLPTR));
        StatistiqueRec->setText(QApplication::translate("delivaro", "Statistique", Q_NULLPTR));
        AjouterRec->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        iDLabel->setText(QApplication::translate("delivaro", "ID", Q_NULLPTR));
        produitIDLabel->setText(QApplication::translate("delivaro", "Produit ID", Q_NULLPTR));
        etatTraitementLabel->setText(QApplication::translate("delivaro", "Etat Traitement", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("delivaro", "Description", Q_NULLPTR));
        dateDAjoutLabel->setText(QApplication::translate("delivaro", "Date d'ajout", Q_NULLPTR));
        RechercheRec->setText(QApplication::translate("delivaro", "Recherche ", Q_NULLPTR));
        TriRec->setText(QApplication::translate("delivaro", "Tri", Q_NULLPTR));
        Play->setText(QApplication::translate("delivaro", "Play", Q_NULLPTR));
        Mute->setText(QApplication::translate("delivaro", "Mute", Q_NULLPTR));
        ModifierRec->setText(QApplication::translate("delivaro", "Modifier", Q_NULLPTR));
        SupprimerRec->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        Exporter->setText(QApplication::translate("delivaro", "Exporter", Q_NULLPTR));
        retourmenu->setText(QApplication::translate("delivaro", "Menu", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("delivaro", "Reclamation", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table_modif->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("delivaro", "Matricule", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table_modif->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("delivaro", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table_modif->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("delivaro", "Capacit\303\251 (T)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table_modif->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("delivaro", "Kilom\303\251trage (Km)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = table_modif->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("delivaro", "Statut", Q_NULLPTR));
        ln1->setText(QString());
        label_6->setText(QApplication::translate("delivaro", "Rechercher ", Q_NULLPTR));
        y1->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        y2->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        y3->setText(QApplication::translate("delivaro", "Stats", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("delivaro", "Nouvelle Voiture", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("delivaro", "Remorque", Q_NULLPTR)
         << QApplication::translate("delivaro", "Citerne", Q_NULLPTR)
         << QApplication::translate("delivaro", "Frigofrique", Q_NULLPTR)
         << QApplication::translate("delivaro", "Benne", Q_NULLPTR)
         << QApplication::translate("delivaro", "Porte-Char", Q_NULLPTR)
         << QApplication::translate("delivaro", "Fourgon", Q_NULLPTR)
         << QApplication::translate("delivaro", "Ampliroll", Q_NULLPTR)
         << QApplication::translate("delivaro", "Plateau", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("delivaro", "Statut", Q_NULLPTR));
        matricule->setText(QString());
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("delivaro", "Disponible", Q_NULLPTR)
         << QApplication::translate("delivaro", "Indisponible", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("delivaro", "#Matricule", Q_NULLPTR));
        pb2->setText(QApplication::translate("delivaro", "Valider", Q_NULLPTR));
        label_8->setText(QApplication::translate("delivaro", "Kilom\303\251trage (Km)", Q_NULLPTR));
        label_9->setText(QApplication::translate("delivaro", "Capacit\303\251 (T)", Q_NULLPTR));
        label_10->setText(QApplication::translate("delivaro", "Type", Q_NULLPTR));
        pb3->setText(QApplication::translate("delivaro", "Annuler", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("delivaro", "Trajets effectu\303\251 par cette Voiture", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = table_trajeff->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("delivaro", "Num\303\251ro", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = table_trajeff->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("delivaro", "Pays Chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = table_trajeff->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("delivaro", "Pays Livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = table_trajeff->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("delivaro", "Ville Chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = table_trajeff->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("delivaro", "Ville Livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = table_trajeff->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("delivaro", "Cdp Chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = table_trajeff->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("delivaro", "Cdp Livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = table_trajeff->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("delivaro", "Date Chargment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = table_trajeff->horizontalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("delivaro", "Date Livraison", Q_NULLPTR));
        pb4->setText(QApplication::translate("delivaro", "Retour", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("delivaro", "Gestion de Voitures", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = table_trajet->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("delivaro", "Num\303\251ro", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = table_trajet->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("delivaro", "Pays chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = table_trajet->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("delivaro", "Pays livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = table_trajet->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("delivaro", "Ville chargment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = table_trajet->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("delivaro", "Ville livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = table_trajet->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("delivaro", "Cdp chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = table_trajet->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QApplication::translate("delivaro", "Cdp livraison", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = table_trajet->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QApplication::translate("delivaro", "Date chargement", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = table_trajet->horizontalHeaderItem(8);
        ___qtablewidgetitem22->setText(QApplication::translate("delivaro", "Date livraison", Q_NULLPTR));
        label_17->setText(QApplication::translate("delivaro", "Rechercher ", Q_NULLPTR));
        lineEdit_10->setText(QString());
        y5->setText(QApplication::translate("delivaro", "Ajouter", Q_NULLPTR));
        y6->setText(QApplication::translate("delivaro", "Supprimer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("delivaro", "Nouveau Trajet", Q_NULLPTR));
        label_11->setText(QApplication::translate("delivaro", "#Numero", Q_NULLPTR));
        label_12->setText(QApplication::translate("delivaro", "Pays", Q_NULLPTR));
        label_13->setText(QApplication::translate("delivaro", "Ville", Q_NULLPTR));
        label_14->setText(QApplication::translate("delivaro", "Code Postal", Q_NULLPTR));
        label_15->setText(QApplication::translate("delivaro", "Date", Q_NULLPTR));
        lineEdit_2->setInputMask(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("delivaro", "Chargement", Q_NULLPTR));
        label_16->setText(QApplication::translate("delivaro", "Date", Q_NULLPTR));
        lineEdit_7->setText(QString());
        label_18->setText(QApplication::translate("delivaro", "Code Postal", Q_NULLPTR));
        label_19->setText(QApplication::translate("delivaro", "Pays", Q_NULLPTR));
        label_20->setText(QApplication::translate("delivaro", "Ville", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("delivaro", "Livraison", Q_NULLPTR));
        label_21->setText(QApplication::translate("delivaro", "Rechercher", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tabledispo->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("delivaro", "Matricule", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tabledispo->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("delivaro", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tabledispo->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("delivaro", "Capacit\303\251 (T)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tabledispo->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("delivaro", "Kilom\303\251trage (Km)", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("delivaro", "Affectation", Q_NULLPTR));
        pb6->setText(QApplication::translate("delivaro", "Annuler", Q_NULLPTR));
        pb5->setText(QApplication::translate("delivaro", "Valider", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("delivaro", "Gestion de Trajets", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class delivaro: public Ui_delivaro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVARO_H
