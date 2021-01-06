#include "publicite.h"
#include <QDate>
#include <QString>
#include <QDebug>
publicite::publicite()
{
    this->id=0;
    this->duree=0;
    this->prix=0;
    this->date="";
}
publicite::publicite(int id,int duree ,int prix,QString date)
{
    this->id=id;
    this->duree=duree;
    this->prix=prix;
    this->date=date;
}
bool publicite::ajouter() //works
{
    QSqlQuery query;
    query.prepare("INSERT INTO PUBLICITE VALUES(:id,:prix,:duree,:date)");

    query.bindValue(":id",getID());
    query.bindValue(":duree",getDuree());
    query.bindValue(":prix",getPrix());
    query.bindValue(":date",getDate());
    return query.exec();
}
QSqlQueryModel * publicite::afficher() //Works
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from publicite");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID")); //horizontal
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRIX")); //horizontal
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DUREE")); //horizontal
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE")); //horizontal
    return model;
}

bool publicite::supprimer(int id) //works
{
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("DELETE FROM PUBLICITE WHERE ID = :id");
    query.bindValue(":id",res);
    return query.exec();
}
QSqlQueryModel *publicite::recherche(int id) //Works
{
    QString query1="SELECT * FROM PUBLICITE WHERE ID=";
    QString idtxt= QString::number(id);
    QString queryfull=query1 + idtxt;

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery(queryfull);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID")); //horizontal
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRIX")); //horizontal
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DUREE")); //horizontal
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE")); //horizontal
    return model;
}
QSqlQueryModel *publicite::tri() //works
{
    QSqlQuery query;
    query.prepare("SELECT * FROM PUBLICITE ORDER BY ID ASC");
    query.exec();
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID")); //horizontal
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("PRIX")); //horizontal
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DUREE")); //horizontal
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE")); //horizontal;
    return model;
}

