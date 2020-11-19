#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "publicite.h"
#include "reclamation.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_8_clicked()
{
    int id=ui->lineEdit_6->text().toInt();
    int duree=ui->lineEdit_7->text().toInt();
    int prix=ui->lineEdit_8->text().toInt();
    QDate date = ui->dateEdit->date();

    publicite p(id,duree,prix,date);

    qDebug() << "id:" << p.getID();
    qDebug() << "duree:" << p.getDuree();
    qDebug() << "prix:" << p.getPrix();
    qDebug() << "Date:" << p.getDate();

    bool test=p.ajouter();
       qDebug() << "test :" << test;
    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("ok")
                                 ,QObject::tr("Ajout effectué\n"
                                              "Click Cancel to exit."),QMessageBox::Cancel);
    }
else
    {
        QMessageBox::critical(nullptr,QObject::tr("not ok")
                                 ,QObject::tr("Ajout non effectué\n"
                                              "Click Cancel to exit."),QMessageBox::Cancel);
    }

}

