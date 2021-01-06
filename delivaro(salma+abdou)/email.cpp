#include "email.h"
#include "ui_email.h"
#include "smtp.h"

email::email(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::email)
{
    ui->setupUi(this);
}

email::~email()
{
    delete ui;
}

email::email(QString e,QString n,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::email)
{
    QString contenu="Contenu";
    ui->setupUi(this);

    ui->lineEdit_email->setText(e);
    ui->message->setText("Cher Client "+n+",\n\n"+contenu+"\n\n"+"Cordialement,\n");


}
void email::on_envoyermail_clicked()
{
        Smtp* smtp = new Smtp("delivaro2a1@gmail.com", "&Delivaro2a1!" , "smtp.gmail.com", 465);

        smtp->sendMail(ui->lineEdit_email->text(),"Commande" ,ui->message->toPlainText());
}

