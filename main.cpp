#include "mywindow.h"
#include"connection.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mywindow w;
    Connection C;

    if ( C.create_connection())
    {



        w.show();
    }


    //qw.show();

    return a.exec();
}
