#ifndef CARAC_VOITURE_H
#define CARAC_VOITURE_H

#include"carac_trajet.h"
#include<QVector>
/*
#include<QDebug>
#include <QMainWindow>
#include<QMessageBox>
#include<QTableWidget>
#include<QCompleter>
#include<QComboBox>
#include<QFile>
#include <QTextStream>
//#include "connection.h"
#include <QtCharts>
#include <QMediaPlayer>
#include<QUrl>
*/
class Carac_voiture
{
private:
    QString matricule;
    QString type;
    int capacite;
    int kilometrage;
    QString statut;
    QVector<QString> Traj;

public:
    Carac_voiture();
    void set_matricule(QString m){matricule=m;};
    void set_type(QString m){type=m;};
    void set_capacite(int i){capacite=i;};
    void set_kilometrage(int i){kilometrage=i;};
    void set_statut(QString s){statut=s;};


    QString get_matricule(){return matricule;};
    QString get_type(){return type;};
    int get_capacite(){return capacite;};
    int get_kilometrage(){return kilometrage;};
    QString get_statut(){return statut;};
    QVector<QString> &get_num_traj(){return Traj;};
    //QString getting(int i ){Traj[i].data()}



};

#endif // CARAC_VOITURE_H
