#include "moteurbd.h"

bool MoteurBD::supprimerDonnee(DonneeElementaire clef)
{
    /* Supprime une donnée élémentaire définie par "clef" dans la BD */
    m_map->erase(clef);
    return true;
}
