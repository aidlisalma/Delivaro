#ifndef CARAC_TRAJET_H
#define CARAC_TRAJET_H
#include<QString>

class carac_trajet
{
private:
    QString numero;
    QString pays_chargement;
    QString pays_livaison;
    QString ville_chargement;
    QString ville_livraison;
    QString cdp_chargement;
    QString cdp_livraison;
    QString date_chargement;
    QString date_livraison;




    QString date;


public:
    carac_trajet();
    QString get_numero(){return numero;};
    QString get_pays_chargement(){return pays_chargement;};
    QString get_pays_livaison(){return pays_livaison;};
    QString get_ville_chargement(){return ville_chargement;};
    QString get_ville_livraison(){return ville_livraison;};
    QString get_cdp_livraison(){return cdp_livraison;};
    QString get_cdp_chargement(){return cdp_chargement;};
    QString get_date_chargement(){return date_chargement;};
    QString get_ddate_livraison(){return date_livraison;};

    void set_numero(QString s){numero=s;};
    void set_pays_chargement(QString s){pays_chargement=s;};
    void set_pays_livaison(QString s){pays_livaison=s;};
    void set_ville_chargement(QString s){ville_chargement=s;};
    void set_ville_livraison(QString s){ville_livraison=s;};
    void set_cdp_livraison(QString s){cdp_livraison=s;};
    void set_cdp_chargement(QString s){cdp_chargement=s;};
    void set_date_chargement(QString s){date_chargement=s;};
    void set_date_livraison(QString s){date_livraison=s;};

};

#endif // CARAC_TRAJET_H
