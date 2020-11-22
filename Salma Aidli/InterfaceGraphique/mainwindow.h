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

    void on_pushButton_modifier_clicked();

    void on_pushButton_modifier_2_clicked();

    void on_pushButton_supprimer_clicked();

private:
    Ui::MainWindow *ui;
    Colis tmpcolis;
    partenaire tmp_partenaires;
};
#endif // MAINWINDOW_H
