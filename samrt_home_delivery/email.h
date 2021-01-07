#ifndef EMAIL_H
#define EMAIL_H

#include <QDialog>

namespace Ui {
class email;
}

class email : public QDialog
{
    Q_OBJECT

public:
    explicit email(QWidget *parent = nullptr);
    explicit email(QString,QString,QWidget *parent = nullptr);
    ~email();
    void set_tmpemail(QString e){tmpemail=e;}

private slots:
    void on_envoyermail_clicked();

private:
    Ui::email *ui;
    QString tmpemail;
};

#endif // EMAIL_H
