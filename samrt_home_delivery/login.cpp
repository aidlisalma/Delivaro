#include "login.h"

login::login()
{

}
bool login::connexion(QString mail,QString pwd)
{
    QSqlQuery qry;
        qry.prepare("SELECT * FROM EMPLOYES WHERE MAIL=:MAIL AND PASSWORD=:PASSWORD");
        qry.bindValue(":mail",mail);
        qry.bindValue(":password",this->hash(pwd));

        //current_user=uname;

        return qry.exec() && qry.next();

}
