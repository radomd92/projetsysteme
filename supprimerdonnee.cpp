#include "moteurbd.h"

bool operator < (const DonneeElementaire &a, const DonneeElementaire &b)
{
    if (a.taille < b.taille) // taille(a) < taille(b)
        return true;
    else if (a.taille == b.taille) // taille(a) = taille(b)
    {
        if (strncmp(a.donnee, b.donnee, b.taille)<0) // a < b
            return true;
        else
            return false;
    }
    else
        return false;
}

bool MoteurBD::supprimerDonnee(DonneeElementaire clef)
{
    /* Supprime une donnée élémentaire définie par "clef" dans la BD */
    m_map->erase(clef);
    return true;
}
