#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    this->m_liste = new vector <LigneDonnee> ();
}

bool MoteurBD::ajouterDonnee(DonneeElementaire donnee)
{
    /* Insertion d'une donnée d'une donnée élémentaire dans la base de donnée
     * - La clef est auto-incrémentée(?)
     *
   */
    int estUnique = 0;

    for (vector<DonneeElementaire>::iterator it = m_liste->begin(); // ATTENTION: NE marche PAS
         it != m_liste->end();
         it++)
    {
        //if ( strcmp(it., donnee.taille)
    }
    if (estUnique)
    {
        m_liste->insert(m_liste->size(), &donnee, &donnee);
        return true;
    }
    else
        return false;

}

bool MoteurBD::supprimerDonnee(DonneeElementaire clef)
{
    /* Supprime une donnée élémentaire définie par "clef" dans la BD
     */

}

bool MoteurBD::modifierDonneee(DonneeElementaire clef)
{
    /* Modifier une donnée élémentaire définie par "clef" dans la BD
     */

}


LigneDonnee MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire.
     */

}
