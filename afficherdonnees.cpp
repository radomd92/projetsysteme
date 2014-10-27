#include "moteurbd.h"
#include <iostream>

void MoteurBD::afficherDonnees()
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire. */
    DonneeElementaire clef, donnee;
    map<DonneeElementaire,DonneeElementaire>:: iterator i;

    for(i = m_map->begin();i != m_map->end(); i++)
    {
        clef = i->first; // accede à la clé
        donnee = i->second;
        std::cout << "clef:"
                  << clef.donnee
                  << " - donnee:"
                  << donnee.donnee << endl;
    }
}

