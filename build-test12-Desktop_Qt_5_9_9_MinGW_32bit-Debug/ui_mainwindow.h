/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_8;
    QLabel *label_6;
    QLineEdit *lineEdit_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QTableView *tableView;
    QPushButton *pushButton_16;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QCustomPlot *gplot;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView_2;
    QPushButton *pushButton_15;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QCustomPlot *widget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1072, 542);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-color:#FFEEE7;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("\n"
"\n"
"QTabWidget:pane {\n"
"border:4px;\n"
"background-color:#FFEEE7;\n"
"border-color:#666666;\n"
"border-radius:4px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 40, 251, 221));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(90, 20, 113, 20));
        lineEdit_6->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 180, 101, 31));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 60, 47, 13));
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(90, 140, 113, 20));
        lineEdit_8->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 20, 47, 13));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 100, 71, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 140, 47, 13));
        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(90, 100, 110, 22));
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 60, 113, 20));
        lineEdit_7->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        lineEdit_9 = new QLineEdit(tab);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(320, 19, 131, 21));
        lineEdit_9->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(480, 12, 91, 31));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(860, 10, 91, 31));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(290, 60, 491, 192));
        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(600, 10, 91, 31));
        pushButton_16->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(400, 280, 91, 31));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_10->setCheckable(true);
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(560, 280, 91, 31));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
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
        gplot = new QCustomPlot(tab);
        gplot->setObjectName(QStringLiteral("gplot"));
        gplot->setGeometry(QRect(800, 50, 251, 281));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 80, 231, 251));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 47, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 47, 13));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 71, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 61, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 101, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 20, 113, 20));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 140, 113, 20));
        lineEdit_4->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 60, 113, 20));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setEnabled(true);
        dateEdit_2->setGeometry(QRect(100, 100, 110, 22));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 170, 81, 16));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 170, 113, 20));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(320, 60, 121, 21));
        lineEdit_5->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"color:#000;\n"
"border:2px solid  #999999; \n"
"  border-radius: 4px;\n"
"\n"
"}"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 50, 101, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(850, 50, 111, 31));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 310, 91, 41));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(260, 90, 501, 192));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(600, 50, 91, 31));
        pushButton_15->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 310, 91, 41));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_3->setCheckable(true);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 310, 91, 41));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        widget->setGeometry(QRect(780, 100, 271, 271));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(960, 10, 75, 23));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_13 = new QPushButton(tab_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(860, 10, 75, 23));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1072, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajouter Publicite", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Dur\303\251e", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Date d'ajout", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Prix", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Publicite", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter reclamation", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Produit ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Date d'ajout", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Etat traitement", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Exporter", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Mute", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Reclmation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
