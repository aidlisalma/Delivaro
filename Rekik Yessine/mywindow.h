#ifndef MYWINDOW_H
#define MYWINDOW_H
#include"trajets.h"

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

    void on_pb3_clicked();

    void on_pb2_clicked();

    void on_matricule_textChanged(const QString &arg1);

    void on_ln1_textChanged(const QString &arg1);

    void on_actionSupprimer_triggered();

    void on_actionNouveau_triggered();

    void on_ln1_editingFinished();

    void on_pb6_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_pb5_clicked();

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_actionaffecter_triggered();

    void on_pb4_clicked();

    void on_table_modif_cellChanged(int row, int column);

    void on_actionEnrigistrer_triggered();

    void on_stackedWidget_2_currentChanged(int arg1);

    void on_tabWidget_2_currentChanged(int index);

    void on_lineEdit_10_textChanged(const QString &arg1);

    void on_pb1_clicked();

    void on_actionStatistiques_triggered();




private:
    Ui::mywindow *ui;
    //QVector<Carac_voiture> V;
    QVector<carac_trajet> T;
    Voitures V1;
    Trajets T1;
    void playsound();


};
#endif // MYWINDOW_H
