#include "moteurbd.h"

bool MoteurBD::ajouterDonnee(DonneeElementaire clef,DonneeElementaire valeur)
{
    m_map->insert( pair<DonneeElementaire,DonneeElementaire>(clef,valeur) );
    m_compteur ++;
    return true;
}
