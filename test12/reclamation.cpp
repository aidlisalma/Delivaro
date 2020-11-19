#include "reclamation.h"


reclamation::reclamation()
{
    this->id=0;
    this->prodID=0;
    this->Description="";
       // QDate d;
}
reclamation::reclamation(int id,int prodID ,QString Description )    // QDate d;
{
    this->id=id;
    this->prodID=prodID;
    this->Description=Description;
       // QDate d;
}
bool reclamation::ajouter()
{
QSqlQuery query;
query.prepare("Insert into reclamation(id,prodID,Description)"    // QDate d;
              "values(:id,:prodID,:Description)");	   // QDate d;
query.bindValue(":id",id);
query.bindValue(":duree",prodID);
query.bindValue(":prix",Description);
   // QDate d;
return query.exec();

}
/*
QSqlQueryModel * publicite::afficher()
{

}

bool publicite::supprimer(int)
{

}*/
