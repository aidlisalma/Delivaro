#ifndef COLIS_H
#define COLIS_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include<QSqlQueryModel>


class Colis
{
        int NUM_COLIS;
        QString ADRESSE;
        QString NOM_EXP;
        QString NOM_DEST;
        QDate DATE_LIVRAISON;
public:
    Colis();
    Colis(int n,QString a,QString b,QString c,QDate d):NUM_COLIS(n),ADRESSE(a),NOM_EXP(b),NOM_DEST(c),DATE_LIVRAISON(d){}
    int get_NUM_COLIS(){return NUM_COLIS;}
    QString get_ADRESSE(){return ADRESSE;}
    QString get_NOM_EXP(){return NOM_EXP;}
    QString get_NOM_DEST(){return NOM_DEST;}
    QDate get_DATE_LIVRAISON() {return DATE_LIVRAISON;}
    void set_NUM_COLIS(int n) {NUM_COLIS=n;}
    void set_ADRESSE(QString a) {ADRESSE=a;}
    void set_NOM_EXP(QString b) {NOM_EXP=b;}
    void set_NOM_DEST(QString c) {NOM_DEST=c;}
    void set_DATE_LIVRAISON(QDate d) {DATE_LIVRAISON=d;}

    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
    QSqlQueryModel * trier_colis();
    QSqlQueryModel * chercher_client(int num);
};

#endif // COLIS_H
