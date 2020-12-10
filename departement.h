#ifndef POSTE_H
#define POSTE_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class departement
{
    QString NOM;
    int ID;
    QString DESCRIPTION;
    QString FICHE;
public:
    //constructeur
    departement();
    departement(QString n,int i,QString d,QString f):NOM(n),ID(i),DESCRIPTION(d),FICHE(f){}

    //getters
    QString get_NOM(){return NOM;}
    int get_ID(){return ID;}
    QString get_DESCRIPTION(){return DESCRIPTION;}
    QString get_FICHE(){return FICHE;}

    //setters
    void set_NOM(QString n){NOM=n;}
    void set_ID(int i)     {ID=i;}
    void set_DESCRIPTION(QString d){DESCRIPTION=d;}
    void set_FICHE(QString f){FICHE=f;}

    //fonctions realtifs
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(QString NOM);
    QSqlQueryModel* rechercher(QString);
    QSqlQueryModel *tri();
};

#endif // POSTE_H
