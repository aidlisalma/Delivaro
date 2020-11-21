#ifndef CONNECTION_H
#define CONNECTION_H
#include"QSqlDatabase"
#include<QtSql>
#include<QFileInfo>
#include<QtDebug>
#include<QSqlQuery>
class Connection
{
public:
    Connection();
    bool create_connection();
    void close_connection();
    QSqlDatabase mydb;
private:
 //QSqlDatabase mydb;
};

#endif // CONNECTION_H

