#include "mainwindow.h"
#include "moteurbd.h"
#include <iostream>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */

    MoteurBD *bd = new MoteurBD();
    DonneeElementaire de;
    de.initialiser("[\"Eday\", \"Monday\"]");
    bd->ajouterDonnee(de);
    de.initialiser("[\"Eday\", \"Mondazy\"]");
    bd->ajouterDonnee(de);
    de.initialiser("[\"Edazezeezy\", \"ezsfMondazy\"]");
    bd->ajouterDonnee(de);

    bd->afficherDonnees();

    delete bd;

}
