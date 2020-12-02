#ifndef TRAJETS_H
#define TRAJETS_H
#include"voitures.h"

QT_BEGIN_NAMESPACE
namespace Ui { class mywindow; }
QT_END_NAMESPACE

class Trajets
{
private:
    QVector<carac_trajet> T;
public:
    Trajets();
    void Ajouter( Ui::mywindow *, Voitures);
    void Supprimer(Ui::mywindow *);
    void Load_DB(Ui::mywindow *);

    QVector<carac_trajet> Get_T(){return T;};

};

#endif // TRAJETS_H
