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
    playsound();
    ui->stackedWidget->setCurrentIndex(0);
}


void mywindow::on_pushButton_9_clicked()
{
    playsound();
    V1.Ajouter(ui);
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

    for (int i=0;i<V1.Get_V().size();i++)
        wordlist.push_back(V1.Get_V()[i].get_matricule());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(completer);


}


void mywindow::on_actionSupprimer_triggered()
{
    if (ui->tabWidget_2->currentIndex()==0)//TAB VOITURES
    {
        V1.Supprimer(ui);
    }
    else if (ui->tabWidget_2->currentIndex()==1)//TAB TRAJETS
    {
        T1.Supprimer(ui);
    }
}


void mywindow::on_actionNouveau_triggered()
{
    if(ui->tabWidget_2->currentIndex()==0)
        ui->stackedWidget->setCurrentIndex(1);
    else if (ui->tabWidget_2->currentIndex()==1)
    V1.Dispo(ui);
}


void mywindow::on_lineEdit_editingFinished()
{
    V1.Rechercher(ui);
}


void mywindow::on_pushButton_4_clicked()
{
    playsound();
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
    playsound();
    T1.Ajouter(ui,V1);
}


void mywindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    QStringList wordlist;

    for (int i=0;i<V1.Get_V().size();i++)
        if(V1.Get_V()[i].get_statut()=="Disponible")
        wordlist.push_back(V1.Get_V()[i].get_matricule());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_6->setCompleter(completer);
}


void mywindow::on_actionaffecter_triggered()
{
    V1.Trajets_Associes(ui,T);
}


void mywindow::on_pushButton_3_clicked()
{
    playsound();
    ui->stackedWidget->setCurrentIndex(0);
}


void mywindow::on_table_modif_cellChanged(int row, int column)
{
    V1.Modifier(ui,row,column);
}


void mywindow::on_actionEnrigistrer_triggered()
{
    V1.Exporter(ui);
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

    for (int i=0;i<T1.Get_T().size();i++)
        wordlist.push_back(T1.Get_T()[i].get_numero());
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_10->setCompleter(completer);
}


void mywindow::on_pushButton_2_clicked()
{
    //BEGIN TEST
    playsound();

    //END TEST
    Connection C;
    QSqlQuery dbQuery;

    V1.Load_DB(ui);
    qDebug()<<"VOITURES DB LOADED";
    T1.Load_DB(ui);
    ui->stackedWidget_3->setCurrentIndex(1);


}


void mywindow::on_actionStatistiques_triggered()
{
    V1.Statistiques();
}

void mywindow::playsound()
{
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("C:/Users/Yessine/Desktop/Projet/testinggg/Sounds/sound.mp3"));
    music->setVolume(80);
    qDebug()<<"played";
    music->play();
}
