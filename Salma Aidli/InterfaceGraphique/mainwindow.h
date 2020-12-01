#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QSqlTableModel>
#include <QDebug>
#include "partenaire.h"
#include "colis.h"
#include "ui_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ajouterP_clicked();

    void on_pushButton_ajouterColis_clicked();

    void on_pushButton_modifier_Partenaires_clicked();

    void on_pushButton_modifier_colis_clicked();

    void on_pushButton_supprimer_colis_clicked();

    void on_pushButton_recherche_colis_clicked();



    void on_pushButton_export_colis_clicked();

    void on_pushButton_tabcolis_clicked();

    void on_pushButton_tabpartenaires_clicked();

    void on_pushButton_StatistiquesColis_clicked();

    void on_pushButton_triColis_clicked();

private:
    Ui::MainWindow *ui;
    Colis tmpcolis;
    partenaire tmp_partenaires;
};
#endif // MAINWINDOW_H
