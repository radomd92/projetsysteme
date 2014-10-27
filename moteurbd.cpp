#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    this->m_liste = new vector <LigneDonnee> ();
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

bool MoteurBD::modifierDonneee(DonneeElementaire clef)
{
    /* Modifier une donnée élémentaire définie par "clef" dans la BD
     */
    return false;
}


LigneDonnee MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire.
     */

}
