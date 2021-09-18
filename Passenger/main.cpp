#include "passenger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Passenger w;
    w.show();
    return a.exec();
}
