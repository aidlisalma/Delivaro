#include "delivaro.h"
#include "ui_delivaro.h"

delivaro::delivaro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delivaro)
{
    ui->setupUi(this);
}

delivaro::~delivaro()
{
    delete ui;
}

void delivaro::on_pushButton_ajouterP_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

        bool nom_verif = nom_regex.exactMatch(ui->lineEdit_nom->text());
        bool id_verif=identifiant_regex.exactMatch(ui->lineEdit_ID->text());
        bool nbC_verif=nombre_commandes_regex.exactMatch(ui->lineEdit_nbC->text());
        //bool produit_verif=type_produit_regex.exactMatch(ui->lineEdit_produit->text());
       if(ui->lineEdit_ID->text()!= "" &&
               ui->lineEdit_nbC->text()!="" &&
               ui->lineEdit_nom->text() != "") {

           if (nom_verif && id_verif && nbC_verif ) {
               QString nom=ui->lineEdit_nom->text();
               QString identifiant=ui->lineEdit_ID->text();
               int nombre_commandes=ui->lineEdit_nbC->text().toInt();
               QString type_produit=ui->comboBox_produit->currentText();

               partenaire partenaire(nom,identifiant,nombre_commandes,type_produit);

              bool test=partenaire.ajouter();
               if(test)
                  { ui->tableView_part->setModel(tmp_partenaires.afficher());

               }
               else
                       {

                           if (!nom_verif)
                           {
                               //QMessageBox::warning(this,"Erreur lors de l'ajout","E-mail invalid");
                               ui->lineEdit_nom->setStyleSheet("color: blue");
                           }
                           if (!id_verif)
                           {
                               //QMessageBox::warning(this,"Erreur lors de l'ajout","CIN invalid");
                               ui->lineEdit_ID->setStyleSheet("color: blue");
                           }
                           if (!nbC_verif )
                           {
                               //QMessageBox::warning(this,"Erreur lors de l'ajout","Téléphone invalid");
                               ui->lineEdit_nbC->setStyleSheet("color: blue");
                           }


                       }
           }
       }



     else {
         QMessageBox::warning(this,"Erreur lors de l ajout du partenaire","Veuillez remplir tous les champs à nouveau");
     }


}

void delivaro::on_pushButton_ajouterColis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    int num_colis=ui->lineEdit_numcolis->text().toInt();
     QString adresse=ui->lineEdit_adresseliv->text();
     QString nom_exp=ui->lineEdit_expediteur->text();
     QString nom_dest=ui->lineEdit_destinataire->text();
     QDate date_livraison=ui->dateEdit_livraison->date();
     Colis colis(num_colis,adresse,nom_exp,nom_dest,date_livraison);

    bool test=colis.ajouter();
     if(test)
        { ui->tableView_colis->setModel(tmpcolis.afficher());

     }
     else {
         QMessageBox::warning(this,"Erreur lors de l ajout du colis","Veuillez remplir tous les champs à nouveau");
     }
}

void delivaro::on_pushButton_modifier_Partenaires_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    if (ui->pushButton_modifier_Partenaires->isChecked())
        {

            ui->pushButton_modifier_Partenaires->setText("Modification en cours");
            QSqlTableModel *tableModel= new QSqlTableModel();
            tableModel->setTable("PARTENAIRES");
            tableModel->select();
            ui->tableView_part->setModel(tableModel);
        }
        else
        {
            ui->pushButton_modifier_Partenaires->setText("Modifier");
            ui->tableView_part->setModel(tmp_partenaires.afficher());

        }
}

void delivaro::on_pushButton_modifier_colis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    if (ui->pushButton_modifier_colis->isChecked())
        {
            ui->pushButton_modifier_colis->setText("Modification en cours");
            QSqlTableModel *tableModel= new QSqlTableModel();
            tableModel->setTable("COLIS");
            tableModel->select();
            ui->tableView_colis->setModel(tableModel);
        }
        else
        {
            ui->pushButton_modifier_colis->setText("Modifier");
            ui->tableView_colis->setModel(tmpcolis.afficher());

        }
}

void delivaro::on_pushButton_supprimer_colis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    QItemSelectionModel *select = ui->tableView_colis->selectionModel();

        int num_colis =select->selectedRows(0).value(0).data().toInt();

       if(tmpcolis.supprimer(num_colis))
        {
            ui->tableView_colis->setModel(tmpcolis.afficher());
            ui->statusbar->showMessage("colis supprimé");
         }
}

void delivaro::on_pushButton_recherche_colis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    int NUM_COLIS = ui->lineEdit_recherche_colis->text().toInt();
    QSqlQueryModel * test=tmpcolis.chercher_colis(NUM_COLIS);
    if (ui->pushButton_recherche_colis->isChecked()){
        ui->pushButton_recherche_colis->setText("En cours");

        if(test != nullptr)
    {
        QMessageBox::information(nullptr, QObject::tr("chercher un colis"),
                    QObject::tr("colis trouvé.\n"
                                "Click Cancel to get informations."), QMessageBox::Cancel);
            ui->tableView_colis->setModel(test);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("chercher un colis"),
                    QObject::tr("Erreur , colis introuvable !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_colis->setModel(test);
}}
        else
        {
            ui->pushButton_recherche_colis->setText("Recherche");
            ui->tableView_colis->setModel(tmpcolis.afficher());

        }
}

void delivaro::on_pushButton_export_colis_clicked()
{       QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    tmpcolis.exporter(ui->tableView_colis);
    ui->statusbar->showMessage("EXPORT TABLE ",5000);
}

void delivaro::on_pushButton_tabcolis_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void delivaro::on_pushButton_tabpartenaires_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/*void delivaro::on_pushButton_StatistiquesColis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->statcolis->setBackground(QBrush(gradient));
    QCPBars *test= new QCPBars(ui->statcolis->xAxis, ui->statcolis->yAxis);
    test->setAntialiased(false);
    test->setStackingGap(1);
    test->setName("Nombre de commandes");
    test->setPen(QPen(QColor(0,168,140).lighter(130)));
    test->setBrush(QColor(0,168,140));
    //axes des x
    QVector<double> nb;
    QVector<QString> nom;
    nb <<1<<2 ;
    nom <<"alimentaire"<<"divers";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
       textTicker->addTicks(nb,nom);
       ui->statcolis->xAxis->setTicker(textTicker);
       ui->statcolis->xAxis->setTickLabelRotation(60);
       ui->statcolis->xAxis->setSubTicks(false);
       ui->statcolis->xAxis->setTickLength(0, 4);
       ui->statcolis->xAxis->setRange(0, 8);
       ui->statcolis->xAxis->setBasePen(QPen(Qt::white));
       ui->statcolis->xAxis->setTickPen(QPen(Qt::white));
       ui->statcolis->xAxis->grid()->setVisible(true);
       ui->statcolis->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
       ui->statcolis->xAxis->setTickLabelColor(Qt::white);
       ui->statcolis->xAxis->setLabelColor(Qt::white);
    //axe des y
           ui->statcolis->yAxis->setRange(0,30);
           ui->statcolis->yAxis->setPadding(5); // a bit more space to the left border
           ui->statcolis->yAxis->setBasePen(QPen(Qt::white));
           ui->statcolis->yAxis->setTickPen(QPen(Qt::white));
           ui->statcolis->yAxis->setSubTickPen(QPen(Qt::white));
           ui->statcolis->yAxis->grid()->setSubGridVisible(true);
           ui->statcolis->yAxis->setTickLabelColor(Qt::white);
           ui->statcolis->yAxis->setLabelColor(Qt::white);
           ui->statcolis->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
           ui->statcolis->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
//njibou el data
           QVector<double> testData=tmpcolis.getData();

           test->setData(nb,testData);
           ui->statcolis->legend->setVisible(true);
               ui->statcolis->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
               ui->statcolis->legend->setBrush(QColor(255, 255, 255, 100));
               ui->statcolis->legend->setBorderPen(Qt::NoPen);

               QFont legendFont = font();
               legendFont.setPointSize(10);
               ui->statcolis->legend->setFont(legendFont);
               ui->statcolis->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}*/

void delivaro::on_pushButton_triColis_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    if(ui->radioButton_numcolis->isChecked())
    {
        ui->tableView_colis->setModel(tmpcolis.trier("NUM_COLIS",ui->AD->currentText()));
    }
    else if(ui->radioButton_adresse->isChecked())
    {
        ui->tableView_colis->setModel(tmpcolis.trier("ADRESSE",ui->AD->currentText()));
    }
    else if(ui->radioButton_destinataire->isChecked())
    {
        ui->tableView_colis->setModel(tmpcolis.trier("ID_PARTENAIRE",ui->AD->currentText()));
    }
    else if(ui->radioButton_expediteur->isChecked())
    {
        ui->tableView_colis->setModel(tmpcolis.trier("ID_CLIENT",ui->AD->currentText()));
    }
    else if(ui->radioButton_dateL->isChecked())
    {
        ui->tableView_colis->setModel(tmpcolis.trier("DATE_LIVRAISON",ui->AD->currentText()));
    }
}

void delivaro::on_lineEdit_recherche_colis_textChanged(const QString &arg1)
{
   ui->tableView_colis->setModel(tmpcolis.recherche_avancee(arg1));
}

void delivaro::on_pushButton_export_partenaires_clicked()
{
        QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

        tmp_partenaires.imprimerpdf(ui->tableView_part);

}

void delivaro::on_pushButton_supp_Partenaires_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    QItemSelectionModel *select = ui->tableView_part->selectionModel();

    QString n =select->selectedRows(0).value(0).data().toString();
       if(tmp_partenaires.supprimer(n))
        {
            ui->tableView_part->setModel(tmp_partenaires.afficher());
            ui->statusbar->showMessage("partenaire supprimé");
         }
}

void delivaro::on_pushButton_Statistiques_partenaires_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->statPartenaires->setBackground(QBrush(gradient));
    QCPBars *test= new QCPBars(ui->statPartenaires->xAxis, ui->statPartenaires->yAxis);
    test->setAntialiased(false);
    test->setStackingGap(1);
    //test->setName("Nombre de commandes");
    test->setPen(QPen(QColor(255,67,27)));
   test->setBrush(QColor(255,67,27));
    //axes des x
    QVector<double> nb;
    QVector<QString> nom;
    nb <<1<<2<<3<<4 ;
    nom <<"alimentaire"<<"esthétique"<<"vestimentaire"<<"divers";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
       textTicker->addTicks(nb,nom);
       ui->statPartenaires->xAxis->setTicker(textTicker);
       ui->statPartenaires->xAxis->setTickLabelRotation(60);
       ui->statPartenaires->xAxis->setSubTicks(false);
       ui->statPartenaires->xAxis->setTickLength(0, 4);
       ui->statPartenaires->xAxis->setRange(0, 8);
       ui->statPartenaires->xAxis->setBasePen(QPen(Qt::white));
       ui->statPartenaires->xAxis->setTickPen(QPen(Qt::white));
       ui->statPartenaires->xAxis->grid()->setVisible(true);
       ui->statPartenaires->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
       ui->statPartenaires->xAxis->setTickLabelColor(Qt::white);
       ui->statPartenaires->xAxis->setLabelColor(Qt::white);
    //axe des y
           ui->statPartenaires->yAxis->setRange(0,30);
           ui->statPartenaires->yAxis->setPadding(5); // a bit more space to the left border
           ui->statPartenaires->yAxis->setBasePen(QPen(Qt::white));
           ui->statPartenaires->yAxis->setTickPen(QPen(Qt::white));
           ui->statPartenaires->yAxis->setSubTickPen(QPen(Qt::white));
           ui->statPartenaires->yAxis->grid()->setSubGridVisible(true);
           ui->statPartenaires->yAxis->setTickLabelColor(Qt::white);
           ui->statPartenaires->yAxis->setLabelColor(Qt::white);
           ui->statPartenaires->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
           ui->statPartenaires->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
//njibou el data
           QVector<double> testData=tmp_partenaires.getData();

           test->setData(nb,testData);
            ui->statPartenaires->legend->setVisible(false);
               ui->statPartenaires->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
               ui->statPartenaires->legend->setBrush(QColor(255, 255, 255, 100));
               ui->statPartenaires->legend->setBorderPen(Qt::NoPen);

               QFont legendFont = font();
               legendFont.setPointSize(20);
               ui->statPartenaires->legend->setFont(legendFont);
               ui->statPartenaires->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void delivaro::on_contract_colis_clicked()
{
    static int turn=1;
        if (turn==1)
        {
            contract_animation->start();
            ui->contract_colis->setText("Expand");
        }
        else
        {
            expand_animation->start();
            ui->contract_colis->setText("Contract");
        }
        turn*=-1;
        QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");
}

void delivaro::on_pushButton_recherche_partenaires_clicked()
{
    QSound::play("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/click.wav");

    QString NOM = ui->lineEdit_recherche__partenaires->text();
    QSqlQueryModel *test=tmp_partenaires.chercher_partenaire(NOM);
    if (ui->pushButton_recherche_partenaires->isChecked()){
        ui->pushButton_recherche_partenaires->setText("En cours");

        if(test != nullptr)
    {
        QMessageBox::information(nullptr, QObject::tr("chercher un colis"),
                    QObject::tr("colis trouvé.\n"
                                "Click Cancel to get informations."), QMessageBox::Cancel);
            ui->tableView_colis->setModel(test);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("chercher un partenaire"),
                    QObject::tr("Erreur , partenaire introuvable !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_part->setModel(test);
}}
        else
        {
            ui->pushButton_recherche_partenaires->setText("Recherche");
            ui->tableView_part->setModel(tmp_partenaires.afficher());

        }
}


