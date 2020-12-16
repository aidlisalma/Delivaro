#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QPropertyAnimation>
#include <QSound>
#include "partenaire.h"
#include "colis.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Colis tmpcolis;
    partenaire tmp_partenaires;
    QPropertyAnimation *contract_animation;
    QPropertyAnimation *expand_animation;
};
#endif // MAINWINDOW_H
