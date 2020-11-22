#include "colis.h"

Colis::Colis()
{

}

bool Colis::ajouter()
{ QSqlQuery query;



    query.prepare("INSERT INTO COLIS (NUM_COLIS,ADRESSE,NOM_EXP,NOM_DEST,DATE_LIVRAISON) VALUES(:NUM_COLIS,:ADRESSE,:NOM_EXP,:NOM_DEST,:DATE_LIVRAISON)");

    query.bindValue(":NUM_COLIS",NUM_COLIS );
    query.bindValue(":ADRESSE",ADRESSE );
    query.bindValue(":NOM_EXP",NOM_EXP );
    query.bindValue(":NOM_DEST",NOM_DEST );
    query.bindValue(":DATE_LIVRAISON",DATE_LIVRAISON );

    return query.exec();

}

QSqlQueryModel* Colis::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select* from COLIS");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NUM_COLIS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ADRESSE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOM_EXP"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("NOM_DEST"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("DATE_LIVRAISON"));
        return model;



}

bool Colis::supprimer(int NUM_COLIS)
{
    QSqlQuery qry;
    QString a = QString::number(NUM_COLIS);
    qry.prepare("Delete from COLIS where NUM_COLIS = :NUM_COLIS");
    qry.bindValue(":NUM_COLIS",a);
    return qry.exec();
}

QSqlQueryModel * Colis::trier_colis()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from COLIS ORDER BY NUM_COLIS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_COLIS"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_DEST "));


    return model;
}
