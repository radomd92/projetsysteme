#include <moteurbd.h>

bool MoteurBD::modifierDonneee(DonneeElementaire clef,DonneeElementaire valeur)
       {
            bool modif=false;
            DonneeElementaire tmp;
            map<DonneeElementaire,DonneeElementaire>:: iterator i;


            for(i = m_map->begin();i != m_map->end(); i++)
            {
                tmp=i->first; // accede à la clé
                if(memcmp(tmp.donnee,clef.donnee,tmp.taille)==0)
                {
                    i->second=valeur;
                    modif =true;
                }
            }
        return modif;
       }
