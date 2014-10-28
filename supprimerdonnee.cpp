#include "moteurbd.h"

bool MoteurBD::supprimerDonnee(DonneeElementaire clef)
{
    /* Supprime une donnée élémentaire définie par "clef" dans la BD */

    bool modif=false;
    DonneeElementaire tmp;
    map<DonneeElementaire,DonneeElementaire>:: iterator i;

    for(i = m_map->begin();i != m_map->end(); i++)
    {
        tmp = i->first; // accede à la clé
        if(memcmp(tmp.donnee,clef.donnee,tmp.taille)==0)
        {
            m_map->erase(i);
            return true;
        }
    }
    return false;
}
