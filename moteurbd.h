#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "structures.h"
#include <map>
#include <cJSON/cJSON.h>
#include "structures.h"

using namespace std;
//using namespace JSON;

class MoteurBD
{
private:
    map<DonneeElementaire, DonneeElementaire> *m_map;
    long int clef;
public:
    MoteurBD();
    ~MoteurBD();

    // visualisation
    void afficherDonnees();

    // manipulation de données
    bool ajouterDonnee(DonneeElementaire clef,DonneeElementaire valeur);
    bool supprimerDonnee(DonneeElementaire clef);
    bool modifierDonneee(DonneeElementaire clef,DonneeElementaire valeur);

    // lecture des données
    DonneeElementaire lireclef(DonneeElementaire clef);
<<<<<<< HEAD
=======

    // Interface réseau (à faire)


>>>>>>> 762bd38770beb6ff1c1be1de3e48902ba352f2fe
};

#endif // MOTEURBD_H
