#ifndef COLIS_H
#define COLIS_H
#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlRecord>
#include<QTableView>
#include<QFile>
#include<QFileDialog>
#include<QCoreApplication>
#include<QTextStream>

class Colis
{
    int NUM_COLIS;
    QString ADRESSE;
    QString ID_PARTENAIRE;
    QString ID_CLIENT;
    QDate DATE_LIVRAISON;
public:
    Colis();
    Colis(int n,QString a,QString b,QString c,QDate d):NUM_COLIS(n),ADRESSE(a),ID_PARTENAIRE(b),ID_CLIENT(c),DATE_LIVRAISON(d){}
    int get_NUM_COLIS(){return NUM_COLIS;}
    QString get_ADRESSE(){return ADRESSE;}
    QString get_ID_PARTENAIRE(){return ID_PARTENAIRE;}
    QString get_ID_CLIENT(){return ID_CLIENT;}
    QDate get_DATE_LIVRAISON() {return DATE_LIVRAISON;}
    void set_NUM_COLIS(int n) {NUM_COLIS=n;}
    void set_ADRESSE(QString a) {ADRESSE=a;}
    void set_ID_PARTENAIRE(QString b) {ID_PARTENAIRE=b;}
    void set_ID_CLIENT(QString c) {ID_CLIENT=c;}
    void set_DATE_LIVRAISON(QDate d) {DATE_LIVRAISON=d;}

    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
    QSqlQueryModel * chercher_colis(int num);
    void exporter(QTableView *table);
    //QVector<double> getData();
    QSqlQueryModel *trier(QString ,QString );
    QSqlQueryModel *recherche_avancee(QString );



};

#endif // COLIS_H
