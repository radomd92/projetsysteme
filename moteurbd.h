#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib.h>
#include <iostream>
#include <map>
#include <cJSON/cJSON.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//using namespace JSON;

typedef struct DonneeElementaire
{
    char *donnee; int taille;
} DonneeElementaire;

typedef struct LigneDonnee
{
    DonneeElementaire clef, valeur;
} LigneDonnee;

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

    // lecture des données (incomplet)
    LigneDonnee lireclef(DonneeElementaire clef);


};

#endif // MOTEURBD_H
