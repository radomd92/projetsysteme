#include "moteurbd.h"

DonneeElementaire MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire. */   
    DonneeElementaire ret;
    map<DonneeElementaire,DonneeElementaire>:: iterator i;

    i = m_map->find(clef);
    ret = i->first;
    return ret;
/*
    for(i = m_map->begin();i != m_map->end(); i++)
    {
        ret = i->first; // accede à la clé
        if(memcmp(ret.donnee, clef.donnee, ret.taille)==0)
        {
            return ret;
        }
    }
    return ret;
*/
}
