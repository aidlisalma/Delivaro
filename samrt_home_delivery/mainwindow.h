#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "partenaire.h"
#include "colis.h"
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QSqlTableModel>
#include <QDebug>
#include <functional>
#include <QPropertyAnimation>
#include <QSound>
#include "reclamation.h"
#include "publicite.h"
#include<QMediaPlayer>
#include<QTranslator>
#include "email.h"
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    //boutons salma
    void on_deconnexion_clicked();
    void on_pushButton_ajouterP_clicked();

    void on_pushButton_ajouterColis_clicked();

    void on_pushButton_modifier_Partenaires_clicked();

    void on_pushButton_modifier_colis_clicked();

    void on_pushButton_supprimer_colis_clicked();

    void on_pushButton_recherche_colis_clicked();



    void on_pushButton_export_colis_clicked();

    void on_pushButton_tabcolis_clicked();

    void on_pushButton_tabpartenaires_clicked();



    void on_pushButton_triColis_clicked();

    void on_lineEdit_recherche_colis_textChanged(const QString &arg1);

    void on_pushButton_export_partenaires_clicked();

    void on_pushButton_supp_Partenaires_clicked();

    void on_pushButton_Statistiques_partenaires_clicked();

    void on_contract_colis_clicked();

    void on_pushButton_recherche_partenaires_clicked();

    void on_retour_clicked();

    void on_retour2_clicked();
    void on_pushButton_envoyerbonC_clicked();

    //boutons abdou
    void on_RecherchePub_clicked();

    void on_SupprimerPub_clicked();

    void on_TriRec_clicked();

    void on_ModifierRec_clicked();

    void on_SupprimerRec_clicked();

    void on_Exporter_clicked();

    void on_StatistiqueRec_clicked();

    void on_Play_clicked();

    void on_Mute_clicked();

    void on_AjouterRec_clicked();

    void on_AjouterPub_clicked();

    void on_ModifierPub_clicked();

    void on_StatPub_clicked();

    void on_RechercheRec_clicked();










    void on_retourmenu_clicked();

    //boutons menu
    void on_gestionpartenaires_clicked();
    void on_gestioncolis_clicked();
    void on_gestionpubreclamation_clicked();
    //boutons login
    void on_passwordcheck_toggled(bool checked);
    void on_login_clicked();






    void update_label();



    void on_radioButton_modeNuit_toggled(bool);

    void on_radioButton_modeJour_toggled(bool);

    void on_alerte_clicked();

    void on_radioButton_anglais_toggled(bool checked);

    void on_radioButton_francais_toggled(bool checked);

    void on_deconnexMenu_clicked();

private:
    Ui::MainWindow *ui;
    Colis tmpcolis;
    partenaire tmp_partenaires;
    QRegExp nom_regex;
    QRegExp identifiant_regex;
    QRegExp nombre_commandes_regex;
    QRegExp type_produit_regex;
    QPropertyAnimation *contract_animation;
    QPropertyAnimation *expand_animation;

    reclamation rtmp;
    publicite ptmp;
    QSound *son;
    QSound *click;
    QByteArray donnee;
    arduino A;
    double temperature;
    QString buzzer ="no";
    QTranslator* translator=new QTranslator;


};
#endif // MAINWINDOW_H
