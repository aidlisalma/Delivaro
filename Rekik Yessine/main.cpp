#include "delivaro.h"
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication program(argc, argv);



    Connection c;
    bool test=c.createconnect();
     delivaro w;
    if(test)
    {//w.show();  //displays it on the GUI
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    w.show();

    return program.exec(); //excecutes the program
}
