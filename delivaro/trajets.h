#ifndef TRAJETS_H
#define TRAJETS_H
#include"voitures.h"

//QT_BEGIN_NAMESPACE
//namespace Ui { class delivaro; }
//QT_END_NAMESPACE

class Trajets
{
private:
    QVector<carac_trajet> T;
public:
    Trajets();
    /*void Ajouter( Ui::delivaro *, Voitures);
    void Supprimer(Ui::delivaro *);
    void Load_DB(Ui::delivaro *);*/

    //QVector<carac_trajet> Get_T(){return T;};

};

#endif // TRAJETS_H
