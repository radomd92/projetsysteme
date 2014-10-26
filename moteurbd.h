#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cJSON/cJSON.h>

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
    vector<LigneDonnee> *m_liste;
public:
    MoteurBD();
    ~MoteurBD();

    // manipulation de données
    bool ajouterDonnee(DonneeElementaire donnee);
    bool supprimerDonnee(DonneeElementaire clef);
    bool modifierDonneee(DonneeElementaire clef);

    // lecture des données (incomplet)
    LigneDonnee lireclef(DonneeElementaire clef);


};

#endif // MOTEURBD_H
