#include "gestionstock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GestionStock w;
    w.show();

    return a.exec();
}
