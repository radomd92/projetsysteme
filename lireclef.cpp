#include "moteurbd.h"

double DonneeElementaire::operator [](double indexDecimal)
{
int index = static_cast<int>(indexDecimal);
double coef = indexDecimal-index;
double ajustement=(tab[index+1]-tab[index]) * coef;
return tab[index]+ajustement;
}

DonneeElementaire MoteurBD::lireclef(DonneeElementaire clef)
{
    /* Lecture la "clef". Renvoie la ligne de donnée correspondante à la valeur de la donnée élémentaire. */

}
