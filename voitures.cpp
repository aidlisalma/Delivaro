#include "voitures.h"
//#include "ui_delivaro.h"


Voitures::Voitures()
{

}
/*void Voitures::Ajouter(Ui::delivaro *ui)
{
    Carac_voiture e;
    e.set_matricule(ui->matricule->text());
    e.set_type(ui->comboBox->currentText());
    e.set_capacite(ui->spinBox->value());
    e.set_kilometrage(ui->spinBox_2->value());
    e.set_statut(ui->comboBox_2->currentText());

    QMessageBox msgbox;
    int i=0;
    while (i<V.size() && V[i].get_matricule()!=e.get_matricule())
    {
        i++;
    }
    if (i==V.size())
    {

        ui->table_modif->setSortingEnabled(false);
        msgbox.setText("Voiture Ajoutée");
        V.push_back(e);
        ui->table_modif->insertRow(ui->table_modif->rowCount());
        ui->table_modif->setItem(ui->table_modif->rowCount()-1,0,new QTableWidgetItem(e.get_matricule()));
        ui->table_modif->item(ui->table_modif->rowCount()-1,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        ui->table_modif->setItem(ui->table_modif->rowCount()-1,1,new QTableWidgetItem(e.get_type()));
        ui->table_modif->item(ui->table_modif->rowCount()-1,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        ui->table_modif->setItem(ui->table_modif->rowCount()-1,2,new QTableWidgetItem); // INT SORTING
        ui->table_modif->item(ui->table_modif->rowCount()-1,2)->setData(Qt::DisplayRole,e.get_capacite());
        //ui->table_modif->setItem(ui->table_modif->rowCount()-1,3,new QTableWidgetItem(QString::number(e.get_kilometrage()))); //Sorting Problem
        ui->table_modif->setItem(ui->table_modif->rowCount()-1,3,new QTableWidgetItem);
        ui->table_modif->item(ui->table_modif->rowCount()-1,3)->setData(Qt::DisplayRole,e.get_kilometrage());//int sorting


        ui->table_modif->setItem(ui->table_modif->rowCount()-1,4,new QTableWidgetItem(e.get_statut()));
        ui->table_modif->setSortingEnabled(true);
//test DB

        QSqlQuery qry;
        qry.prepare("insert into VOITURES (MATRICULE,TYPE,CAPACITE,KILOMETRAGE,STATUT) values('"+e.get_matricule()+"','"+e.get_type()+"','"+ QString::number(e.get_capacite())+"','"+QString::number(e.get_kilometrage())+"','"+e.get_statut()+"')");
        //can't insert INT :(
        if (qry.exec())
        {
        }

//test DB
        msgbox.exec();
        ui->stackedWidget_3->setCurrentIndex(0);
    }
    else
    {
        msgbox.setText("Matricule Existe Deja !");
        msgbox.exec();
    }
}*/

/*void Voitures::Supprimer(Ui::delivaro *ui)
{
    QMessageBox msgbox;
    msgbox.addButton(msgbox.Yes);
    msgbox.addButton(msgbox.No);
    QMessageBox msgbox2;
    if (ui->table_modif->currentRow()>=0)
    {
        msgbox.setText("Etes vous sur de vouloir supprimer cette voiture ?");
        if (msgbox.exec()==msgbox.Yes) //gonna run it here
        {
            int i=0;
            while (i<V.size() && V[i].get_matricule()!=ui->table_modif->item(ui->table_modif->currentRow(),0)->text())
            {
                i++;
            }
            if (i<V.size())//tjr verifié
            {
                QSqlQuery qry;
                qry.prepare("Delete from VOITURES where MATRICULE='"+V[i].get_matricule()+"'");
                if (qry.exec())
                {
                }
                V.remove(i);
            }
            ui->table_modif->removeRow(ui->table_modif->currentRow());
        }
    }
    else
    {
        msgbox2.setText("Veuillez selectionner une voiture!");
        msgbox2.exec();
    }
   // ui->table_modif->clearSelection(); not working
}*/

/*void Voitures::Dispo(Ui::delivaro *ui)
{
    {
        ui->stackedWidget_2->setCurrentIndex(1);
        /////////////////////////////////////////////
        ui->tabledispo->setRowCount(0);
        ui->tabledispo->setSortingEnabled(false);
        int d;
        for (int i=0;i<V.size();i++)
        if (V[i].get_statut()=="Disponible")
        {
            ui->tabledispo->insertRow(ui->tabledispo->rowCount());
            ui->tabledispo->setItem(ui->tabledispo->rowCount()-1,0,new QTableWidgetItem(V[i].get_matricule()));
            ui->tabledispo->setItem(ui->tabledispo->rowCount()-1,1,new QTableWidgetItem(V[i].get_type()));
            ui->tabledispo->setItem(ui->tabledispo->rowCount()-1,2,new QTableWidgetItem);
            ui->tabledispo->item(ui->tabledispo->rowCount()-1,2)->setData(Qt::DisplayRole,V[i].get_capacite());//int sorting
            ui->tabledispo->setItem(ui->tabledispo->rowCount()-1,3,new QTableWidgetItem);
            ui->tabledispo->item(ui->tabledispo->rowCount()-1,3)->setData(Qt::DisplayRole,V[i].get_kilometrage());//int sorting

            for (d=0;d<=3;d++)
                ui->tabledispo->item(ui->tabledispo->rowCount()-1,d)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        }
        ui->tabledispo->setSortingEnabled(true);
    }
}*/


/*void Voitures::Rechercher(Ui::delivaro *ui)
{
    int i=0;
       while(i<V.size() && ui->ln1->text()!=ui->table_modif->item(i,0)->text())
           i++;
    if(i<V.size())
        ui->table_modif->selectRow(i);
}*/

/*void Voitures::Affecter(Ui::delivaro *ui,carac_trajet e)
{

    foreach(QModelIndex index, ui->tabledispo->selectionModel()->selectedRows())
        {
            for (int i=0;i<V.size();i++)
                if(V[i].get_matricule()==ui->tabledispo->item(index.row(),0)->text())//Check V with SELECETED MATRICULES
                {
                    V[i].get_num_traj().push_back(e.get_numero());//V[i].T.push_brack(NUM) //TRAJ ajouté à V[i]
                    V[i].set_statut("Indisponible");
                    for(int j=0;j<ui->table_modif->rowCount();j++)
                        if(ui->table_modif->item(j,0)->text()==V[i].get_matricule())
                        {
                            ui->table_modif->item(j,4)->setText("Indisponible");
                            // UPDATE DB
                            QSqlQuery qry;
                            qry.prepare("update VOITURES set STATUT='""Indisponible""' where MATRICULE='"+V[i].get_matricule()+"' ");
                            //can't insert INT :(
                            if (qry.exec())
                            {
                            }
                        }
                    //msgbox.setText(msgbox.text() + QString::number(V[i].get_num_traj().size())); nbr d'affectation
                }
        }
}*/


// TRAAAAAAAAJ ASSSSOOOOOOOOOO
/*void Voitures::Trajets_Associes(Ui::delivaro *ui, QVector<carac_trajet> T)
{
    if (ui->table_modif->currentRow()>=0)
     ui->table_trajeff->setRowCount(0);
    int i=0;
    while(i<V.size() && V[i].get_matricule()!=ui->table_modif->item(ui->table_modif->currentRow(),0)->text()) //Matricule
        i++;
    if (i<V.size())
    {
        int k=0;
        int d;

        ui->table_trajeff->setSortingEnabled(false);

        for(int j=0; j<V[i].get_num_traj().size(); j++) //Matricule.NUM
        {
            while (k<T.size() && T[k].get_numero()!=V[i].get_num_traj()[j]) //faute possible -> getter(numero)
                k++;
            if (k<T.size())
            {
                ui->table_trajeff->insertRow(ui->table_trajeff->rowCount());
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,0,new QTableWidgetItem(T[k].get_numero()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,1,new QTableWidgetItem(T[k].get_pays_chargement()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,2,new QTableWidgetItem(T[k].get_pays_livaison()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,3,new QTableWidgetItem(T[k].get_ville_chargement()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,4,new QTableWidgetItem(T[k].get_ville_livraison()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,5,new QTableWidgetItem(T[k].get_cdp_chargement()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,6,new QTableWidgetItem(T[k].get_cdp_livraison()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,7,new QTableWidgetItem(T[k].get_date_chargement()));
                ui->table_trajeff->setItem(ui->table_trajeff->rowCount()-1,8,new QTableWidgetItem(T[k].get_ddate_livraison() ));
                for (d=0;d<=8;d++)
                    ui->table_trajeff->item(ui->table_trajeff->rowCount()-1,d)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            }
        }
        ui->table_trajeff->setSortingEnabled(true);
        ui->stackedWidget->setCurrentIndex(2);
    }
}*/


/*void Voitures::Modifier(Ui::delivaro *ui,int row,int column)
{
    int i=0;
    while(i<V.size()&& V[i].get_matricule()!=ui->table_modif->item(row,0)->text())
        i++;
    if(i<V.size())
    {
        switch (column)
        {
        case 2:
        {
            V[i].set_capacite(ui->table_modif->item(row,2)->text().toInt());
            QSqlQuery qry;
            qry.prepare("update VOITURES set CAPACITE='"+ui->table_modif->item(row,2)->text()+"' where MATRICULE='"+V[i].get_matricule()+"' ");
            //can't insert INT :(
            if (qry.exec())
            {
            }
        }break;
        case 3:
        {

            V[i].set_kilometrage( ui->table_modif->item(row,3)->text().toInt());
            QSqlQuery qry;
            qry.prepare("update VOITURES set KILOMETRAGE='"+ui->table_modif->item(row,3)->text()+"' where MATRICULE='"+V[i].get_matricule()+"' ");
            //can't insert INT :(
            if (qry.exec())
            {
            }

        }break;
        case 4:
        {
            if ((ui->table_modif->item(row,4)->text()!="Disponible") && (ui->table_modif->item(row,4)->text()!="Indisponible"))
            ui->table_modif->item(row,4)->setText(V[i].get_statut());
            else
            V[i].set_statut(ui->table_modif->item(row,4)->text());
        }break;
        }
    }
}*/

/*void Voitures::Exporter(Ui::delivaro *ui)
{
    QString textData;
    int rows = ui->table_modif->rowCount();
    int columns = ui->table_modif->columnCount();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

                textData += ui->table_modif->item(i,j)->text();
                if (j<columns-1)
                textData += ";" ;
                // for .csv file format
        }
        textData += "\n";             // (optional: for new line segmentation)
    }

    // [Save to file] (header file <QFile> needed)
    // .csv
    QFile csvFile("C:/Users/Yessine/Desktop/delivaro/test.csv");
    if(csvFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {

        QTextStream out(&csvFile);

        out << textData;

        //csvFile.open(QIODevice::ReadOnly);
        csvFile.close();
        QMessageBox msgbox;
        msgbox.setText("Fichier Exporté Avec Succès");
        msgbox.exec();
    }
}*/
/*void Voitures::Load_DB(Ui::delivaro *ui)
{
    Connection C;
    QSqlQuery dbQuery;

//LOAD VOITURES DB
    if(dbQuery.exec("select * from VOITURES"))
        while (dbQuery.next())
        {
            Carac_voiture t;

            t.set_matricule(dbQuery.value(0).toString());
            t.set_type(dbQuery.value(1).toString());
            t.set_capacite(dbQuery.value(2).toInt());
            t.set_kilometrage(dbQuery.value(3).toInt());
            t.set_statut(dbQuery.value(4).toString());

            V.push_back(t);
            //ui->table_modif->setSortingEnabled(false);
            ui->table_modif->insertRow(ui->table_modif->rowCount());
            ui->table_modif->setItem(ui->table_modif->rowCount()-1,0,new QTableWidgetItem(t.get_matricule()));
            ui->table_modif->item(ui->table_modif->rowCount()-1,0)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            ui->table_modif->setItem(ui->table_modif->rowCount()-1,1,new QTableWidgetItem(t.get_type()));
            ui->table_modif->item(ui->table_modif->rowCount()-1,1)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            ui->table_modif->setItem(ui->table_modif->rowCount()-1,2,new QTableWidgetItem);
            ui->table_modif->item(ui->table_modif->rowCount()-1,2)->setData(Qt::DisplayRole,t.get_capacite());//int sorting
            ui->table_modif->setItem(ui->table_modif->rowCount()-1,3,new QTableWidgetItem);
            ui->table_modif->item(ui->table_modif->rowCount()-1,3)->setData(Qt::DisplayRole,t.get_kilometrage());//int sorting
            ui->table_modif->setItem(ui->table_modif->rowCount()-1,4,new QTableWidgetItem(t.get_statut()));

            qDebug()<<t.get_matricule();
        }
    ui->table_modif->setSortingEnabled(true);
}*/


