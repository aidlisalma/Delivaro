#include "mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_colis->setModel(tmpcolis.afficher());
    ui->tableView_colis->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_colis->setSelectionMode(QAbstractItemView::SingleSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ajouterP_clicked()
{
     QString nom=ui->lineEdit_nom->text();
     QString identifiant=ui->lineEdit_ID->text();
     int nombre_commandes=ui->lineEdit_nbC->text().toInt();
     QString type_produit=ui->lineEdit_produit->text();

     partenaire partenaire(nom,identifiant,nombre_commandes,type_produit);

    bool test=partenaire.ajouter();
     if(test)
        { ui->tableView_part->setModel(tmp_partenaires.afficher());

     }
     else {
         QMessageBox::warning(this,"Erreur lors de l ajout du partenaire","Veuillez remplir tous les champs à nouveau");
     }

    /*Form *f= new Form(this);
    f->show();
    this->hide();*/
}

void MainWindow::on_pushButton_ajouterColis_clicked()
{
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

void MainWindow::on_pushButton_modifier_clicked()
{
    if (ui->pushButton_modifier->isChecked())
        {
           // ui->pushButton_modifier->setDisabled(true);
            ui->pushButton_modifier->setText("Modifiable");
            QSqlTableModel *tableModel= new QSqlTableModel();
            tableModel->setTable("PARTENAIRES");
            tableModel->select();
            ui->tableView_part->setModel(tableModel);
        }
        else
        {
            ui->pushButton_modifier->setText("Modifier");
            ui->tableView_part->setModel(tmp_partenaires.afficher());

        }
}

void MainWindow::on_pushButton_modifier_2_clicked()
{
    if (ui->pushButton_modifier_2->isChecked())
        {
            //ui->pushButton_modifier_2->setDisabled(true);
            ui->pushButton_modifier_2->setText("Modifiable");
            QSqlTableModel *tableModel= new QSqlTableModel();
            tableModel->setTable("COLIS");
            tableModel->select();
            ui->tableView_colis->setModel(tableModel);
        }
        else
        {
            ui->pushButton_modifier_2->setText("Modifier");
            ui->tableView_colis->setModel(tmpcolis.afficher());

        }
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    QItemSelectionModel *select = ui->tableView_colis->selectionModel();

        int num_colis =select->selectedRows(0).value(0).data().toInt();

       if(tmpcolis.supprimer(num_colis))
        {
            ui->tableView_colis->setModel(tmpcolis.afficher());
            ui->statusbar->showMessage("colis supprimé");
         }
}
