#ifndef VOITURES_H
#define VOITURES_H
#include"carac_voiture.h"

//QT_BEGIN_NAMESPACE
//namespace Ui { class delivaro; }
//QT_END_NAMESPACE

class Voitures
{
private:
    QVector<Carac_voiture> V;

public:
    Voitures();
    /*void Ajouter( Ui::delivaro *);
    void Supprimer(Ui::delivaro *);
    void Modifier(Ui::delivaro *,int,int);
    void Dispo(Ui::delivaro *);
    void Rechercher(Ui::delivaro *);
    void Affecter(Ui::delivaro *,carac_trajet);
    void Load_DB(Ui::delivaro *);
    void Statistiques();
    void Exporter(Ui::delivaro *);

    void Trajets_Associes(Ui::delivaro *, QVector<carac_trajet>);*/


    //QVector<Carac_voiture> Get_V(){return V;};




};

#endif // VOITURES_H
