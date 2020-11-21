#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QDebug>
#include <QMainWindow>
#include<QMessageBox>
#include"carac_voiture.h"
#include"carac_trajet.h"
#include<QTableWidget>
#include<QCompleter>
#include<QComboBox>
#include<QFile>
#include <QTextStream>
#include "connection.h"
#include <QtCharts>


QT_BEGIN_NAMESPACE
namespace Ui { class mywindow; }
QT_END_NAMESPACE

class mywindow : public QMainWindow
{
    Q_OBJECT

public:
    mywindow(QWidget *parent = nullptr);
    ~mywindow();

private slots:

//9,10,,3,4,6

    void on_pushButton_10_clicked();



    void on_pushButton_9_clicked();









    void on_matricule_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);



    void on_actionSupprimer_triggered();

    void on_actionNouveau_triggered();



    void on_lineEdit_editingFinished();


    void on_pushButton_4_clicked();


    void on_stackedWidget_currentChanged(int arg1);


    void on_dateEdit_userDateChanged(const QDate &date);


    void on_pushButton_6_clicked();



    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_actionaffecter_triggered();

    void on_pushButton_3_clicked();



    void on_table_modif_cellChanged(int row, int column);

    void on_actionEnrigistrer_triggered();

    void on_stackedWidget_2_currentChanged(int arg1);

    void on_tabWidget_2_currentChanged(int index);

    void on_lineEdit_10_textChanged(const QString &arg1);


    //void afficher_trajets();
    void on_pushButton_2_clicked();



    void on_actionStatistiques_triggered();

private:
    Ui::mywindow *ui;
    QVector<Carac_voiture> V;
    QVector<carac_trajet> T;



};
#endif // MYWINDOW_H
