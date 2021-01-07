#include "reclamation.h"
#include <QDate>
#include <QDebug>
#include<QPdfWriter>
#include <QPainter>
#include<QtPrintSupport/QPrinter>

//_____________________________
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
#include <QUrl>
#include<QFileDialog>
#include <QPixmap>
#include <QTabWidget>
#include <QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QVariant>






reclamation::reclamation()
{
    this->id=0;
    this->prodID=0;
    this->Description="";
    this->date="";
    this->traite=200;

}

reclamation::reclamation(int id,int prodID,QString Description,QString date,int traite)
{
    this->id=id;
    this->prodID=prodID;
    this->Description=Description;
    this->date=date;
    this->traite=traite;

}
bool reclamation::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO RECLAMATION VALUES(:id,:ProdID,:Description,:date,:traite)");
    query.bindValue(":id",getID());
    query.bindValue(":ProdID",getProdID());
    query.bindValue(":Description",getDescription());
    query.bindValue(":date",getDate());
    query.bindValue(":traite",getTraite());

    return query.exec();

}

QSqlQueryModel * reclamation::afficher() //doesnt auto refresh unless u add someone
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM RECLAMATION");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRODUIT_ID"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("TRAITE"));


    return model;
}



bool reclamation::supprimer(int id) // when the id isnt correct doesnt show a msg
{
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("DELETE FROM RECLAMATION WHERE ID = :id");
    query.bindValue(":id",res);
    return query.exec();
}



QSqlQueryModel *reclamation::recherche(int id) //Works
{
    QString query1="SELECT * FROM RECLAMATION WHERE ID=";
    QString idtxt= QString::number(id);
    QString queryfull=query1 + idtxt;
    // qDebug() << "query  :" << queryfull;

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery(queryfull);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRODUIT_ID"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE"));
    return model;
}

QSqlQueryModel *reclamation::tri() // works
{
    QSqlQuery query;
    query.prepare("SELECT * FROM RECLAMATION ORDER BY ID ASC");
    query.exec();
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRODUIT ID"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE"));
    return model;
}

