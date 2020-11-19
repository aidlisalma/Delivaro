#ifndef PUBLICITE_H
#define PUBLICITE_H
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDate>
class publicite
{
    int id;
    int duree;
    int prix;
    QDate date;
public:
    publicite();
    publicite(int id,int duree,int prix,QDate date);

    //getters
    int getID(){return id;}
    int getDuree(){return duree;}
    int getPrix(){return prix;}
    QDate getDate(){return date;}

    //Setters
    void setID(int x){id = x ;}
    void setDuree(int x){duree = x ;}
    void setPrix(int x){prix = x ;}
    void setDate(QDate x){date = x ;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);

};



#endif // PUBLICITE_H
