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


bool partenaire::supprimer(int IDENTIFIANT)
{  QSqlQuery qry;
    QString a = QString::number(IDENTIFIANT);
    qry.prepare("Delete from PARTENAIRES where IDENTIFIANT = :IDENTIFIANT");
    qry.bindValue(":IDENTIFIANT",a);
    return qry.exec();
}

QSqlQueryModel * partenaire::trier_partenaire()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from PARTENAIRES ORDER BY IDENTIFIANT ASC");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

    return model;
}


QSqlQueryModel * partenaire::chercher_partenaire(int id){
QSqlQuery q;
q.prepare("select * from PARTENAIRES where IDENTIFIANT=:id");
q.bindValue(":IDENTIFIANT", id);
q.exec();
QSqlQueryModel * model = new QSqlQueryModel;
model->setQuery(q);
model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

QSqlRecord rec = model->record(0);
int num = rec.value("IDENTIFIANT").toInt();
if( num == id){
    return model;
  }
    return nullptr;
}
