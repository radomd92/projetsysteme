#include "mainwindow.h"
#include "moteurbd.h"
#include <iostream>
#include <QApplication>
#include <ctime>
#include <stdlib.h>

#define NRQ 50000

using namespace std;

int main(int argc, char **argv)
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */

    MoteurBD *bd = new MoteurBD();
    DonneeElementaire *de;
    int S, txt_sz, i, m;
    double dt;

    S = atoi(argv[1]);
    txt_sz = atoi(argv[2]);


    cout << "taille tableau: " << S << "elem."<< endl
         << "taille max. texte: " << txt_sz+100 << "car." << endl;

    de = new DonneeElementaire[S];

    for (i=0; i<S; i++)
    {
        de[i].initialiser(bd->genererClef(10).donnee);
    }

    for (i=0; i<S; i++)
    {
        bd->ajouterDonnee(de[i], bd->genererClef(rand()%txt_sz+100));
    }

    clock_t start;

    dt = 0;
    start = clock();

    for (i=0;i<NRQ; i++)
    {
        m = rand() % S;
        bd->lireclef(de[m]);
    }
    dt = (clock() - start) / (double)(CLOCKS_PER_SEC / 1000);
    cout << "moyenne : " << dt/NRQ  << " ms/req. soit " << NRQ/dt * 1000 << " req/sec." << std::endl;

    //bd->afficherDonnees();
    delete bd;
    delete de;
    return 0;
}
