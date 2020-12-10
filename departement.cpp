#include "departement.h"

departement::departement()
{

}

bool departement::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO POSTE (NOM,ID,NBRH,SALAIRE) "
                  "VALUES(:NOM,:ID,:NBRH,:SALAIRE)");

    query.bindValue(":NOM",NOM);
    query.bindValue(":ID",ID);
    query.bindValue(":DESCRIPTION",DESCRIPTION );
    query.bindValue(":FILE",FICHE );

    return query.exec();
}

QSqlQueryModel * departement::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select* from POSTE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("FICHE"));

    return model;
}

bool departement::supprimer(QString NOM)
{
    QSqlQuery qry;
    QString temp_nom =NOM;
    qry.prepare("Delete from POSTE where NOM = :NOM");
    qry.bindValue(":NOM",temp_nom);
    return qry.exec();
}

QSqlQueryModel *departement::rechercher(QString rech)
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from POSTE where ID LIKE '"+rech+"%'"/*or NOM LIKE '"+rech+"%' or PRENOM LIKE '"+rech+"%'"*/);



    return model;
}

QSqlQueryModel* departement::tri()
{
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery* q = new QSqlQuery();
    q->prepare("select * from POSTE order by ID desc");
    q->exec();
    model->setQuery(*q);
    return  model;
}
