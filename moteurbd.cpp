#include "moteurbd.h"

MoteurBD::MoteurBD()
{
    m_map = new map<DonneeElementaire, DonneeElementaire>();
    m_compteur = 0;
    srand(time(NULL));
}

MoteurBD::~MoteurBD()
{
    delete m_map;
}


bool operator < (const DonneeElementaire &b, const DonneeElementaire &c)
{
    if (b.taille < c.taille) // taille(a) < taille(b)
        return true;
    else if (b.taille == c.taille) // taille(a) = taille(b)
    {
        if (strncmp(b.donnee, c.donnee, c.taille)<0) // a < b
            return true;
        else
            return false;
    }
    else
        return false;
}
