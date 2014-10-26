#ifndef MOTEURBD_H
#define MOTEURBD_H

#include <stdlib>

using namespace std;

typedef DonneeElementaire
{
    char *donnee; int taille;
} DonneeElementaire;

typedef LigneDonnee
{
    DonneeElementaire clef, valeur;
} LigneDonnee;

class MoteurBD
{
private:
    LigneDonnee
public:
    MoteurBD();
    ~MoteurBD();

    // manipulation de données
    bool ajouterDonnee(Donnee donnee);
    bool supprimerDonnee(char *clef);
    bool modifierDonneee(char *clef);

    // lecture des données (incomplet)
    LigneDonnee lireclef(char *clef);


};

#endif // MOTEURBD_H
