#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "structures.h"
#include <map>
#include <cJSON/cJSON.h>
#include <time.h>

using namespace std;
//using namespace JSON;

class MoteurBD
{
private:
    map<DonneeElementaire, DonneeElementaire> *m_map;
    int m_compteur;

public:
    MoteurBD();
    ~MoteurBD();

    // visualisation
    void afficherDonnees();

    // manipulation de données
    bool ajouterDonnee(DonneeElementaire clef,DonneeElementaire valeur);
    bool supprimerDonnee(DonneeElementaire clef);
    bool modifierDonneee(DonneeElementaire clef,DonneeElementaire valeur);
    DonneeElementaire genererClef();
    DonneeElementaire genererClef(int n);

    // lecture des données
    DonneeElementaire lireclef(DonneeElementaire clef); // valeur associée à clef

    // fichier
    void charger();
    void sauvegarder();

    // Interface réseau (à faire)

};

bool operator < (const DonneeElementaire &b, const DonneeElementaire &c);

#endif // MOTEURBD_H
