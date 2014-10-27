#include "moteurbd.h"

bool MoteurBD::ajouterDonnee(DonneeElementaire clef,DonneeElementaire valeur)
{
    std::pair<std::map<DonneeElementaire,DonneeElementaire>::iterator,bool> ret;
    ret = m_map->insert( std::pair<DonneeElementaire,DonneeElementaire>(clef,valeur) );

    if (ret.second==false)
    {
    //std::cout << "element "<< valeur << "already existed"<<endl;
    //std::cout << " with a value of " << ret.first->second << '\n';
    }

return true;
}
