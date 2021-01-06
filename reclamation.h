#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDate>
#include <QString>
//Test
class reclamation
{
    int id;
    int prodID;
    QString Description;
    QString date;
    int traite;
public:
    reclamation();
    reclamation(int id,int prodID,QString Description,QString date,int traite);

    //getters
    int getID(){return id;}
    int getProdID(){return prodID;}
    QString getDescription(){return Description;}
    QString getDate(){return date;}
   int getTraite() {return traite;}

    //Setters
    void setID(int x){id = x ;}
    void setProdID(int x){prodID = x ;}
    void setDescription(QString x){Description = x ;}
    void setDate(QString x){date = x ;}
    void setTraite(int x) {traite = x;}

    QSqlQueryModel * recherche(int id);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQueryModel *tri();


};



#endif // PUBLICITE_H
