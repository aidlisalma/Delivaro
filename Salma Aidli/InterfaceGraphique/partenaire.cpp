#include "partenaire.h"

partenaire::partenaire()
{

}

bool partenaire::ajouter()
{
    QSqlQuery query;


        query.prepare("INSERT INTO PARTENAIRES (NOM,IDENTIFIANT,NOMBRE_COMMANDES,TYPE_PRODUIT) VALUES(:NOM,:IDENTIFIANT,:NOMBRE_COMMANDES,:TYPE_PRODUIT)");

        query.bindValue(":NOM",NOM );
        query.bindValue(":IDENTIFIANT",IDENTIFIANT );
        query.bindValue(":NOMBRE_COMMANDES",NOMBRE_COMMANDES );
        query.bindValue(":TYPE_PRODUIT",TYPE_PRODUIT );

  return query.exec();
}

QSqlQueryModel* partenaire::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select* from PARTENAIRES");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

    return model;
}


