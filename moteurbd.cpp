#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    m_map = new map<DonneeElementaire, DonneeElementaire>();
}

MoteurBD::~MoteurBD()
{
    delete m_map;
}

bool MoteurBD::ajouterDonnee(DonneeElementaire donnee)
{
    return true;

}

bool MoteurBD::supprimerDonnee(DonneeElementaire clef)
{
    /* Supprime une donnée élémentaire définie par "clef" dans la BD
     */
    return true;
}

LigneDonnee MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire.
     */

}
