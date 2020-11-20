#include "publicite.h"
#include <QDate>
#include <QString>

publicite::publicite()
{
    this->id=0;
    this->duree=0;
    this->prix=0;
}
publicite::publicite(int id,int duree ,int prix,QDate date)
{
    this->id=id;
    this->duree=duree;
    this->prix=prix;
    this->date=date;
}
bool publicite::ajouter()
{
QSqlQuery query;
query.prepare("Insert into PUBLICITE(ID,DUREE,PRIX,DATE)"
              "values(:id,:duree,:prix,:date)");
query.bindValue(":id",id);
query.bindValue(":duree",duree);
query.bindValue(":prix",prix);
query.bindValue(":date",date);
return query.exec();  //Test

}
QSqlQueryModel * publicite::afficher()
    {
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from publicite");
    model->setHeaderData(0,Qt::Vertical,QObject::tr("ID")); //horizontal
    model->setHeaderData(1,Qt::Vertical,QObject::tr("DUREE")); //horizontal
    model->setHeaderData(2,Qt::Vertical,QObject::tr("PRIX")); //horizontal
    model->setHeaderData(3,Qt::Vertical,QObject::tr("DATE")); //horizontal
    return model;
    }

bool publicite::supprimer(int id)
{
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("Delete from publicite where ID = :id");
    query.bindValue(":id",res);
    return query.exec();
    }
