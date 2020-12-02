#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDate>
#include <QString>
class reclamation
{
    int id;
    int prodID;
    QString Description;
   // QDate d;
public:
    reclamation();
    reclamation(int id,int prodID,QString Description);

    //getters
    int getID(){return id;}
    int getProdID(){return prodID;}
    QString getDescription(){return Description;}

    //Setters
    void setID(int x){id = x ;}
    void setProdID(int x){prodID = x ;}
    void setDescription(QString x){Description = x ;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);

};



#endif // PUBLICITE_H
