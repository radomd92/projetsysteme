#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    m_map = new map<DonneeElementaire, DonneeElementaire>();
}

MoteurBD::~MoteurBD()
{
    delete m_map;
}


LigneDonnee MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire.
     */

}
