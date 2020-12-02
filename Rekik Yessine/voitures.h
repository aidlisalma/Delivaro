#ifndef VOITURES_H
#define VOITURES_H
#include"carac_voiture.h"

QT_BEGIN_NAMESPACE
namespace Ui { class mywindow; }
QT_END_NAMESPACE

class Voitures
{
private:
    QVector<Carac_voiture> V;

public:
    Voitures();
    void Ajouter( Ui::mywindow *);
    void Supprimer(Ui::mywindow *);
    void Modifier(Ui::mywindow *,int,int);
    void Dispo(Ui::mywindow *);
    void Rechercher(Ui::mywindow *);
    void Affecter(Ui::mywindow *,carac_trajet);
    void Load_DB(Ui::mywindow *);
    void Statistiques();
    void Exporter(Ui::mywindow *);

    void Trajets_Associes(Ui::mywindow *, QVector<carac_trajet>);


    QVector<Carac_voiture> Get_V(){return V;};




};

#endif // VOITURES_H
