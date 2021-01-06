#include "trajets.h"
//#include "ui_delivaro.h"


Trajets::Trajets()
{

}

/*void Trajets::Ajouter(Ui::delivaro *ui, Voitures V1)
{
    carac_trajet e;
    e.set_numero(ui->lineEdit_2->text());
    e.set_pays_chargement(ui->lineEdit_3->text());
    e.set_ville_chargement(ui->lineEdit_4->text());
    e.set_cdp_chargement(ui->lineEdit_5->text());
    e.set_date_chargement(QString::number(ui->dateEdit->date().day()) + "/" + QString::number(ui->dateEdit->date().month()) +
                          "/" + QString::number(ui->dateEdit->date().year()));

    e.set_pays_livaison(ui->lineEdit_7->text());
    e.set_ville_livraison(ui->lineEdit_8->text());
    e.set_cdp_livraison(ui->lineEdit_9->text());
    e.set_date_livraison(QString::number(ui->dateEdit_2->date().day()) + "/" + QString::number(ui->dateEdit_2->date().month()) +
                          "/" + QString::number(ui->dateEdit_2->date().year()));

    QMessageBox msgbox;
    int i=0;
    while (i<T.size() && T[i].get_numero()!=e.get_numero())
    {
        i++;
    }
    if (i==T.size())
    {
        ui->table_trajet->setSortingEnabled(false);

        msgbox.setText("Trajet Ajoutée");
        T.push_back(e);

        ui->table_trajet->insertRow(ui->table_trajet->rowCount());
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,0,new QTableWidgetItem(e.get_numero()));
        ui->table_trajet->item(ui->table_trajet->rowCount()-1,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,1,new QTableWidgetItem(e.get_pays_chargement()));
        ui->table_trajet->item(ui->table_trajet->rowCount()-1,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,2,new QTableWidgetItem(e.get_pays_livaison()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,3,new QTableWidgetItem(e.get_ville_chargement()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,4,new QTableWidgetItem(e.get_ville_livraison()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,5,new QTableWidgetItem(e.get_cdp_chargement()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,6,new QTableWidgetItem(e.get_cdp_livraison()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,7,new QTableWidgetItem(e.get_date_chargement()));
        ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,8,new QTableWidgetItem(e.get_ddate_livraison() ));
        ui->table_trajet->setSortingEnabled(true);


        QSqlQuery qry;
        qry.prepare("insert into TRAJETS (NUMERO,PAYS_CHARGEMENT,PAYS_LIVRAISON,VILLE_CHARGEMENT,VILLE_LIVRAISON,CDP_CHARGEMENT,CDP_LIVRAISON,DATE_CHARGEMENT,DATE_LIVRAISON) values('"+e.get_numero()+"','"+e.get_pays_chargement()+"','"+ e.get_pays_livaison()+"','"+e.get_ville_chargement()+"','"+e.get_ville_livraison()+"','"+e.get_cdp_chargement()+"','"+e.get_cdp_livraison()+"','"+e.get_date_chargement()+"','"+e.get_ddate_livraison()+"')");
        //can't insert INT :(
        if (qry.exec())
        {
        }
        ///////// Debut test Affectation trajet ->voitures
        ///


        V1.Affecter(ui,e);
        //
        ///////// Fin test Affecation

        msgbox.setText("Trajet Ajouté");
        msgbox.exec();
        ui->stackedWidget_4->setCurrentIndex(0);
    }
    else
    {
        msgbox.setText("Numero deja existant");
        msgbox.exec();
    }
}*/

/*void Trajets::Supprimer(Ui::delivaro *ui)
{
    QMessageBox msgbox;
    msgbox.addButton(msgbox.Yes);
    msgbox.addButton(msgbox.No);
    QMessageBox msgbox2;

    if (ui->table_trajet->currentRow()>=0)
    {
        msgbox.setText("Etes vous sur de vouloir supprimer ce trajet ?");
        if (msgbox.exec()==msgbox.Yes) //gonna run it here
        {
            int i=0;
            while (i<T.size() && T[i].get_numero()!=ui->table_trajet->item(ui->table_trajet->currentRow(),0)->text())
            {
                i++;
            }
            if (i<T.size())//tjr verifié
            {
                QSqlQuery qry;
                qry.prepare("Delete from TRAJETS where NUMERO='"+T[i].get_numero()+"'");
                if (qry.exec())
                {
                }
                T.remove(i);
            }

            ui->table_trajet->removeRow(ui->table_trajet->currentRow());
        }
    }
    else
    {
        msgbox2.setText("Veuillez selectionner un trajet !");
        msgbox2.exec();
    }
}*/


/*void Trajets::Load_DB(Ui::delivaro *ui)
{
    qDebug()<<"looks good\n";
    Connection C;
    QSqlQuery dbQuery;

    if(dbQuery.exec("select * from TRAJETS"))
        while (dbQuery.next())
        {
            carac_trajet f;
            f.set_numero(dbQuery.value(0).toString());
            f.set_pays_chargement(dbQuery.value(1).toString());
            f.set_pays_livaison(dbQuery.value(2).toString());
            f.set_ville_chargement(dbQuery.value(3).toString());
            f.set_ville_livraison(dbQuery.value(4).toString());
            f.set_cdp_chargement(dbQuery.value(5).toString());
            f.set_cdp_livraison(dbQuery.value(6).toString());
            f.set_date_chargement(dbQuery.value(7).toString());
            f.set_date_livraison(dbQuery.value(8).toString());

            T.push_back(f);

            ui->table_trajet->insertRow(ui->table_trajet->rowCount());
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,0,new QTableWidgetItem(f.get_numero()));
            ui->table_trajet->item(ui->table_trajet->rowCount()-1,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,1,new QTableWidgetItem(f.get_pays_chargement()));
            ui->table_trajet->item(ui->table_trajet->rowCount()-1,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,2,new QTableWidgetItem(f.get_pays_livaison()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,3,new QTableWidgetItem(f.get_ville_chargement()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,4,new QTableWidgetItem(f.get_ville_livraison()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,5,new QTableWidgetItem(f.get_cdp_chargement()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,6,new QTableWidgetItem(f.get_cdp_livraison()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,7,new QTableWidgetItem(f.get_date_chargement()));
            ui->table_trajet->setItem(ui->table_trajet->rowCount()-1,8,new QTableWidgetItem(f.get_ddate_livraison() ));

            qDebug()<<f.get_numero();
        }
    ui->table_trajet->setSortingEnabled(true);
}*/
