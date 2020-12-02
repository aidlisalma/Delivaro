#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "publicite.h"
#include "reclamation.h"
#include "statistique.h"
#include "smtp.h"
#include "qcustomplot.h"
#include <QMessageBox>
#include <QDebug>

#include <QPdfWriter>
#include <QPainter>

//#include <QtNetwork/QAbstractSocket>
//#include <QtNetwork/QSslSocket>

#include <QString>

#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QSqlTableModel>
#include <QSound>

//------------------

#include <QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QTextEdit>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include <QPainter>
#include <QAbstractSocket>
#include <QDesktopServices>
#include <QPdfWriter>
#include <QMessageBox>
#include <QUrl>
#include <QFileDialog>
#include <QPixmap>
#include <QTabWidget>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QVariant>

#include <QApplication>
#include <QtCore>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
//---------
#include<QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QTextEdit>
#include <QMessageBox>
#include<QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include<QPainter>
#include <QAbstractSocket>
#include<QDesktopServices>
#include<QPdfWriter>
#include <QMessageBox>
#include<QUrl>
#include<QFileDialog>
#include <QPixmap>
#include <QTabWidget>
#include <QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QVariant>
#include <QSharedPointer>
#include <QPaintEvent>
#include "qcustomplot.h"
#include <QSound>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView_2->setModel(rtmp.afficher()); //affichage table reclamation
    ui->tableView->setModel(ptmp.afficher()); //affichage table publicite

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);


    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    son = new QSound("sound.wav");
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_pushButton_8_clicked() //ajouter pub
{
    int id=ui->lineEdit_6->text().toInt();
    int duree=ui->lineEdit_7->text().toInt();
    int prix=ui->lineEdit_8->text().toInt();
    QString date = ui->dateEdit->text();


    publicite p(id,duree,prix,date);

    qDebug() << "id:" << p.getID();
    qDebug() << "duree:" << p.getDuree();
    qDebug() << "prix:" << p.getPrix();
    qDebug() << "Date:" << p.getDate();

    bool test=p.ajouter();
       qDebug() << "test :" << test;
    if (test)
    {
        ui->tableView->setModel(ptmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("")
                                 ,QObject::tr("Ajout effectué\n"
                                              "Click Cancel to exit."),QMessageBox::Cancel);
    }
else
    {
        QMessageBox::critical(nullptr,QObject::tr("erreur")
                                 ,QObject::tr("Ajout non effectué\n"
                                              "Click Cancel to exit."),QMessageBox::Cancel);
    }

}


void MainWindow::on_pushButton_clicked() //ajouter reclamation
{
    int id=ui->lineEdit->text().toInt();
    int produitID=ui->lineEdit_2->text().toInt();
    QString descrption=ui->lineEdit_4->text();
    QString date = ui->dateEdit_2->text();
    int traite = ui->lineEdit_3->text().toInt();
    reclamation r(id,produitID,descrption,date,traite);

    qDebug() << "id:" << r.getID();
    qDebug() << "prod id:" << r.getProdID();
    qDebug() << "descrption :" << r.getDescription();
    qDebug() << "Date:" << r.getDate();
    //qDebug() << "traite" << r.getTraite;
    if(traite ==1 || traite== 0)
    {
        bool test=r.ajouter();
           qDebug() << "test :" << test;
        if (test)
        {
            ui->tableView_2->setModel(rtmp.afficher());
            QMessageBox::information(nullptr,QObject::tr("")
                                     ,QObject::tr("Ajout effectué\n"
                                                  "Click Cancel to exit."),QMessageBox::Cancel);
            ui->tableView_2->setModel(rtmp.afficher());
        }
    }
    else
        {
            QMessageBox::critical(nullptr,QObject::tr("erreur")
                                     ,QObject::tr("Ajout non effectué\n"
                                                  "Click Cancel to exit."),QMessageBox::Cancel);
        }
    }



void MainWindow::on_tableView_activated(const QModelIndex &index)
{

}

void MainWindow::on_pushButton_11_clicked() //supprimer pub
{
    QItemSelectionModel *select = ui->tableView->selectionModel();

            int id =select->selectedRows(0).value(0).data().toInt();

           if(ptmp.supprimer(id))
            {
                ui->tableView->setModel(ptmp.afficher());
                ui->statusbar->showMessage("publicite supprimé");
             }
}

void MainWindow::on_pushButton_4_clicked() //supprimer reclamation
{
    QItemSelectionModel *select = ui->tableView_2->selectionModel();

            int id =select->selectedRows(0).value(0).data().toInt();

           if(rtmp.supprimer(id))
            {
                ui->tableView_2->setModel(rtmp.afficher());
                ui->statusbar->showMessage("Reclamation supprimé");
             }
}

void MainWindow::on_pushButton_3_clicked() //modifier reclamation
{
    if (ui->pushButton_3->isChecked())
            {
               // ui->pushButton_modifier->setDisabled(true);
                ui->pushButton_3->setText("Modifiable");
                QSqlTableModel *tableModel= new QSqlTableModel();
                tableModel->setTable("RECLAMATION");
                tableModel->select();
                ui->tableView_2->setModel(tableModel);
            }
            else
            {
                ui->pushButton_3->setText("Modifier");
                ui->tableView_2->setModel(rtmp.afficher());

            }
    }

void MainWindow::on_pushButton_10_clicked() //modifier pub button
{

    if (ui->pushButton_10->isChecked())
            {
               // ui->pushButton_modifier->setDisabled(true);
                ui->pushButton_10->setText("Modifiable");
                QSqlTableModel *tableModel= new QSqlTableModel();
                tableModel->setTable("PUBLICITE");
                tableModel->select();
                ui->tableView->setModel(tableModel);
            }
            else
            {
                ui->pushButton_10->setText("Modifier");
                ui->tableView->setModel(ptmp.afficher());

            }
 }



void MainWindow::on_pushButton_2_clicked() // recherche reclamation selon id
{
    ui->tableView_2->setModel(rtmp.afficher(  ));
   int id= ui->lineEdit_5->text().toInt();
   ui->tableView_2->setModel(rtmp.recherche(id));

    }




void MainWindow::on_pushButton_15_clicked() //reclamatioh tri works
{

   ui->tableView_2->setModel(rtmp.tri());

}

void MainWindow::on_pushButton_16_clicked() //tri pub works
{
   ui->tableView->setModel(ptmp.tri());
}

void MainWindow::on_pushButton_9_clicked() //Recherche pub
{
    ui->tableView->setModel(ptmp.afficher(  ));
   int id= ui->lineEdit_9->text().toInt();
   ui->tableView->setModel(ptmp.recherche(id));
}



void MainWindow::on_pushButton_5_clicked() //stat recl
{
    statistique stat;
  double dag = stat.traite0();
  double dir = stat.traite1();


    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->widget->setBackground(QBrush(gradient));
    // create empty bar chart objects:

    QCPBars *fossil = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    fossil->setAntialiased(false);


    fossil->setStackingGap(1);



    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 ;
    labels << "les reclamation traite" << "les reclamation non traite" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setTickLabelRotation(60);
    ui->widget->xAxis->setSubTicks(false);
    ui->widget->xAxis->setTickLength(0, 4);
    ui->widget->xAxis->setRange(0, 13);
    ui->widget->xAxis->setBasePen(QPen(Qt::white));
    ui->widget->xAxis->setTickPen(QPen(Qt::white));
    ui->widget->xAxis->grid()->setVisible(true);
    ui->widget->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->widget->xAxis->setTickLabelColor(Qt::white);
    ui->widget->xAxis->setLabelColor(Qt::white);

    // prepare y axis:
    ui->widget->yAxis->setRange(0, 10);
    ui->widget->yAxis->setPadding(5); // a bit more space to the left border
    ui->widget->yAxis->setLabel("Nombres des reclamations traite");
    ui->widget->yAxis->setBasePen(QPen(Qt::white));
    ui->widget->yAxis->setTickPen(QPen(Qt::white));
    ui->widget->yAxis->setSubTickPen(QPen(Qt::white));
    ui->widget->yAxis->grid()->setSubGridVisible(true);
    ui->widget->yAxis->setTickLabelColor(Qt::white);
    ui->widget->yAxis->setLabelColor(Qt::white);
    ui->widget->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->widget->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:
    QVector<double> fossilData;

    fossilData  << dag << dir ;
    fossil->setData(ticks, fossilData);

    ui->widget->legend->setVisible(true);
    ui->widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->widget->legend->setBrush(QColor(255, 255, 255, 100));
    ui->widget->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->widget->legend->setFont(legendFont);
}

void MainWindow::on_pushButton_6_clicked() //export pdf
{
    QMessageBox msgBox;

    int y=0;
    QPdfWriter pdf("try.pdf");
    QPainter painter;
    if (!painter.begin(&pdf))
    {
        msgBox.setText("Couldn't write in the file.");
        msgBox.exec();
    }

  QSqlQuery query("SELECT * FROM RECLAMATION");


  while (query.next())
  {
      painter.setPen(Qt::red);
      painter.drawText(4500,2000,"Fiche Reclamation");
      painter.setPen(Qt::black);
      painter.drawText(3000,3500+y,"Identifiant de reclamation:");
      painter.drawText(3000,4000+y,"produit id:");
      painter.drawText(3000,4500+y,"description:");
      painter.drawText(3000,5000+y,"Date d'ajout de reclamation:");

      QString id = query.value(0).toString();
      QString produit_id = query.value(1).toString();
      QString description = query.value(2).toString();
      QString date_a = query.value(3).toString();


      painter.drawText(5200,3500+y,id);
      painter.drawText(5200,4000+y,produit_id);
      painter.drawText(5200,4500+y,description);
      painter.drawText(5200,5000+y,date_a);
      y=y+3000;
      query.next();
  }
  msgBox.setText("The document has been saved.");
  msgBox.exec();

}

void MainWindow::on_pushButton_12_clicked() //stat pub
{
      statistique stat;
    double dag = stat.statestique_partie1();
    double dir = stat.statestique_partie2();


      // set dark background gradient:
      QLinearGradient gradient(0, 0, 0, 400);
      gradient.setColorAt(0, QColor(90, 90, 90));
      gradient.setColorAt(0.38, QColor(105, 105, 105));
      gradient.setColorAt(1, QColor(70, 70, 70));
      ui->gplot->setBackground(QBrush(gradient));
      // create empty bar chart objects:

      QCPBars *fossil = new QCPBars(ui->gplot->xAxis, ui->gplot->yAxis);
      fossil->setAntialiased(false);


      fossil->setStackingGap(1);


      // prepare x axis with country labels:
      QVector<double> ticks;
      QVector<QString> labels;
      ticks << 1 << 2 ;
      labels << "prix entre 1 et 50" << "prix entre 50 et 100 " ;
      QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
      textTicker->addTicks(ticks, labels);
      ui->gplot->xAxis->setTicker(textTicker);
      ui->gplot->xAxis->setTickLabelRotation(60);
      ui->gplot->xAxis->setSubTicks(false);
      ui->gplot->xAxis->setTickLength(0, 4);
      ui->gplot->xAxis->setRange(0, 13);
      ui->gplot->xAxis->setBasePen(QPen(Qt::white));
      ui->gplot->xAxis->setTickPen(QPen(Qt::white));
      ui->gplot->xAxis->grid()->setVisible(true);
      ui->gplot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
      ui->gplot->xAxis->setTickLabelColor(Qt::white);
      ui->gplot->xAxis->setLabelColor(Qt::white);

      // prepare y axis:
      ui->gplot->yAxis->setRange(0, 10);
      ui->gplot->yAxis->setPadding(5); // a bit more space to the left border
      ui->gplot->yAxis->setLabel("Les prix du publicite");
      ui->gplot->yAxis->setBasePen(QPen(Qt::white));
      ui->gplot->yAxis->setTickPen(QPen(Qt::white));
      ui->gplot->yAxis->setSubTickPen(QPen(Qt::white));
      ui->gplot->yAxis->grid()->setSubGridVisible(true);
      ui->gplot->yAxis->setTickLabelColor(Qt::white);
      ui->gplot->yAxis->setLabelColor(Qt::white);
      ui->gplot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
      ui->gplot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

      // Add data:
      QVector<double> fossilData;

      fossilData  << dag << dir ;
      fossil->setData(ticks, fossilData);

      ui->gplot->legend->setVisible(true);
      ui->gplot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
      ui->gplot->legend->setBrush(QColor(255, 255, 255, 100));
      ui->gplot->legend->setBorderPen(Qt::NoPen);
      QFont legendFont = font();
      legendFont.setPointSize(10);
      ui->gplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
      ui->gplot->legend->setFont(legendFont);


}

void MainWindow::on_pushButton_13_clicked()
{

    son->play();
    son->setLoops(QSound::Infinite);

}

void MainWindow::on_pushButton_7_clicked()
{
    son->stop();
}
