#include "mywindow.h"
#include "ui_mywindow.h"

mywindow::mywindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mywindow)
{

    ui->setupUi(this);

}

mywindow::~mywindow()
{
    delete ui;
}





void mywindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void mywindow::on_pushButton_9_clicked()
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
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        msgbox.setText("Matricule Existe Deja !");
        msgbox.exec();
    }
}







void mywindow::on_matricule_textChanged(const QString &arg1)
{
    if (arg1.size()>=3)
        ui->pushButton_9->setEnabled(true);
    else
        ui->pushButton_9->setEnabled(false);
}



void mywindow::on_lineEdit_textChanged(const QString &arg1)
{
    QStringList wordlist;

    for (int i=0;i<V.size();i++)
        wordlist.push_back(V[i].get_matricule());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(completer);
}



void mywindow::on_actionSupprimer_triggered()
{
    QMessageBox msgbox;
    msgbox.addButton(msgbox.Yes);
    msgbox.addButton(msgbox.No);
    QMessageBox msgbox2;

    if (ui->tabWidget_2->currentIndex()==0)//TAB VOITURES
    {

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
    }


    else if (ui->tabWidget_2->currentIndex()==1)//TAB TRAJETS
    {
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
    }
}



void mywindow::on_actionNouveau_triggered()
{
    if(ui->tabWidget_2->currentIndex()==0)
        ui->stackedWidget->setCurrentIndex(1);
    else if (ui->tabWidget_2->currentIndex()==1)
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
}



void mywindow::on_lineEdit_editingFinished()
{
    int i=0;
       while(i<V.size() && ui->lineEdit->text()!=ui->table_modif->item(i,0)->text())
           i++;
    if(i<V.size())
        ui->table_modif->selectRow(i);
}







void mywindow::on_pushButton_4_clicked()
{

    ui->stackedWidget_2->setCurrentIndex(0);

}



void mywindow::on_stackedWidget_currentChanged(int arg1)
{
    if (arg1 == 0  )
    {
        ui->tabWidget_2->setTabEnabled(1,true);
        ui->toolBar->show();
    }
    else
    {
        ui->toolBar->hide();
        ui->tabWidget_2->setTabEnabled(1,false);
    }
    if (arg1==1)
        ui->matricule->setText("");



}






void mywindow::on_dateEdit_userDateChanged(const QDate &date)
{
    ui->dateEdit_2->setMinimumDate(date);
}



void mywindow::on_pushButton_6_clicked()
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


        foreach(QModelIndex index, ui->tabledispo->selectionModel()->selectedRows())
            {
                for (i=0;i<V.size();i++)
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
        //
        ///////// Fin test Affecation

        msgbox.setText("Trajet Ajouté");
        msgbox.exec();
        ui->stackedWidget_2->setCurrentIndex(0);
    }
    else
    {
        msgbox.setText("Numero deja existant");
        msgbox.exec();
    }
}








void mywindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    QStringList wordlist;

    for (int i=0;i<V.size();i++)
        if(V[i].get_statut()=="Disponible")
        wordlist.push_back(V[i].get_matricule());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_6->setCompleter(completer);
}



void mywindow::on_actionaffecter_triggered()
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
}



void mywindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void mywindow::on_table_modif_cellChanged(int row, int column)
{
    int i=0;
    while(i<V.size()&& V[i].get_matricule()!=ui->table_modif->item(row,0)->text())
        i++;
    if(i<V.size())
    {
        switch (column)
        {
        case 3:
        {
            //V[i].set_kilometrage( Q (ui->table_modif->item(row,3)->text()))

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
}

void mywindow::on_actionEnrigistrer_triggered()
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
    QFile csvFile("C:/Users/Yessine/Desktop/testinggg/test.csv");
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
}

void mywindow::on_stackedWidget_2_currentChanged(int arg1)
{
    if (arg1 == 0  )
    {
        ui->tabWidget_2->setTabEnabled(0,true);
        ui->toolBar->show();
    }
    else
    {
        ui->tabWidget_2->setTabEnabled(0,false);
        ui->toolBar->hide();
    }


}

void mywindow::on_tabWidget_2_currentChanged(int index)
{
    if (index==1)
    {
        ui->actionNouveau->setText("Nouveau Trajet");
        ui->actionSupprimer->setText("Supprimer");
        ui->actionaffecter->setVisible(false);
        ui->table_trajet->setSortingEnabled(true);

    }
    else if(index==0)
    {
        ui->actionNouveau->setText("Nouvelle Voiture");
        ui->actionSupprimer->setText("Supprimer");
        ui->actionaffecter->setVisible(true);
        ui->table_modif->setSortingEnabled(true);

    }
    ui->toolBar->show();
}

void mywindow::on_lineEdit_10_textChanged(const QString &arg1)
{
    QStringList wordlist;

    for (int i=0;i<T.size();i++)
        wordlist.push_back(T[i].get_numero());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_10->setCompleter(completer);
}



void mywindow::on_pushButton_2_clicked()
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


//LOAD TRAJETS DB
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

            ui->table_trajet->setSortingEnabled(true);
            qDebug()<<f.get_numero();
        }
    ui->pushButton_2->hide();
}



void mywindow::on_actionStatistiques_triggered()
{

    /*QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Samantha");*/
    int j;
    int k;
    int x;
    //TESting
    QBarSeries *series = new QBarSeries();
    for(int i=0;i<V.size();i++)
    {
        j=0;
        while (j<i && V[j].get_type()!=V[i].get_type())
            j++;
        if (j==i)//New Type
        {
            QBarSet *set_i=new QBarSet(V[i].get_type());
            x=0;
            for (k=i;k<V.size();k++)//Occurences
                if(V[k].get_type()==V[i].get_type())
                    x++;
            *set_i<<x;
            series->append(set_i);


        }

    }

    /**set0 << 1 << 2 << 3 << 4 << 5 << 6;
        *set1 << 5 << 0 << 0 << 4 << 0 << 7;
        *set2 << 3 << 5 << 8 << 13 << 8 << 5;
        *set3 << 5 << 6 << 7 << 3 << 4 << 5;
        *set4 << 9 << 7 << 5 << 3 << 1 << 2;*/

    /*QBarSeries *series = new QBarSeries();
        series->append(set0);
        series->append(set1);
        series->append(set2);
        series->append(set3);
        series->append(set4);*/

     QChart *chart = new QChart();
           chart->addSeries(series);
           chart->setTitle("Statistiques");
           chart->setAnimationOptions(QChart::SeriesAnimations);

     QStringList categories;
             categories << "Type Voitures"; //<< "Feb" << "Mar" << "Apr" << "May" << "Jun";
     QBarCategoryAxis *axis = new QBarCategoryAxis();
              axis->append(categories);
              chart->createDefaultAxes();
              chart->setAxisX(axis, series);


              chart->legend()->setVisible(true);
              chart->legend()->setAlignment(Qt::AlignBottom);

      QChartView *chartView = new QChartView(chart);
                 chartView->setRenderHint(QPainter::Antialiasing);
                 chartView->resize(620,325);
                 chartView->show();
}
