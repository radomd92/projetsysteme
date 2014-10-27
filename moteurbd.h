#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <map>
#include <cJSON/cJSON.h>

using namespace std;
//using namespace JSON;

class MoteurBD
{
private:
    map<DonneeElementaire, DonneeElementaire> *m_map;
public:
    MoteurBD();
    ~MoteurBD();

    // manipulation de données
    bool ajouterDonnee(DonneeElementaire donnee);
    bool supprimerDonnee(DonneeElementaire clef);
    bool modifierDonneee(DonneeElementaire clef,DonneeElementaire valeur);

    // lecture des données
    DonneeElementaire lireclef(DonneeElementaire clef);

    // Interface réseau (à faire)


};

#endif // MOTEURBD_H
