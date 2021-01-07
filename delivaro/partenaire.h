#ifndef PARTENAIRE_H
#define PARTENAIRE_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QTableView>
#include <QFile>
#include <QFileDialog>
#include <QCoreApplication>
#include <QTextStream>
#include <QPrinter>
#include <QTextDocument>


class partenaire
{
    QString NOM;
    QString IDENTIFIANT;
    int NOMBRE_COMMANDES;
    QString TYPE_PRODUIT;
public:
    partenaire();
    partenaire(QString a,QString b,int c, QString d):NOM(a),IDENTIFIANT(b),NOMBRE_COMMANDES(c),TYPE_PRODUIT(d){}

    QString get_NOM(){return NOM;}
    QString get_IDENTIFIANT() {return IDENTIFIANT;};
    int get_NOMBRE_COMMANDES() {return NOMBRE_COMMANDES;};
    QString get_TYPE_PRODUIT() {return TYPE_PRODUIT;};
    void set_NOM(QString a) {NOM=a;}
    void set_IDENTIFIANT(QString b) {IDENTIFIANT=b;}
    void set_NOMBRE_COMMANDES(int c) {NOMBRE_COMMANDES=c;}
    void set_TYPE_PRODUIT(QString d) {TYPE_PRODUIT=d;}

    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(QString);
    QSqlQueryModel * chercher_partenaire(QString);
    QVector<double> getData();
    QSqlQueryModel * trier_partenaire();
    void imprimerpdf (QTableView *table);
};

#endif // PARTENAIRE_H
