#include "statistique.h"
#include <QSqlQuery>
#include <QPainter>
#include <QString>

#include <QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QVariant>
#include <QPaintEvent>
statistique::statistique()
{

}
double statistique::statestique_partie1()
{
    // QString a="playground";

    //QSqlQuery query;
    double count=0 ;
    QSqlQuery requete("select * from publicite where prix between 1 and 50") ;
    while(requete.next())
    {
        count++ ;
    }

    return count ;



}

double statistique::statestique_partie2()
{

    // QString b=" Salle de jeux";
    //  QSqlQuery query;
    double count=0 ;
    QSqlQuery requete("select * from publicite where prix between 51 and 100") ;
    while(requete.next())
    {
        count++ ;
    }

    return count ;
}

double statistique::traite1()
{

    double count=0 ;
    QSqlQuery requete("select * from reclamation where traite =1") ;
    while(requete.next())
    {
        count++ ;
    }
    return count;
}

double statistique::traite0()
{

    double count=0 ;
    QSqlQuery requete("select * from reclamation where traite =0") ;
    while(requete.next())
    {
        count++ ;
    }
    return count;
}
