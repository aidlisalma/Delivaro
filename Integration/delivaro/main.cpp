#include "delivaro.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    delivaro w;
    w.show();
    return a.exec();
}
