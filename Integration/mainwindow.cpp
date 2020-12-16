#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Graphics
                   QPixmap background("C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/background.jpg");
                   background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
                   QPalette palette;
                   palette.setBrush(QPalette::Background, background);
                   this->setPalette(palette);
    //Affichage des tableaux
            /*           ui->tableView_colis->setModel(tmpcolis.afficher());
                       ui->tableView_colis->setSelectionBehavior(QAbstractItemView::SelectRows);
                       ui->tableView_colis->setSelectionMode(QAbstractItemView::SingleSelection);

                       ui->tableView_part->setModel(tmp_partenaires.afficher());

                       ui->tableView_part->setSelectionBehavior(QAbstractItemView::SelectRows);
                       ui->tableView_part->setSelectionMode(QAbstractItemView::SingleSelection);
                       */

     //Animations
                          //contract_animation = new QPropertyAnimation(ui->groupBox_2,"maximumWidth");
                          contract_animation->setDuration(400);
                          contract_animation->setStartValue(300);
                          contract_animation->setEndValue(80);
                          //expand_animation = new QPropertyAnimation(ui->groupBox_2,"maximumWidth");
                          expand_animation->setDuration(400);
                          expand_animation->setStartValue(80);
                          expand_animation->setEndValue(300);
                         // ui->contract_colis->setText("Contract");
                          expand_animation->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

