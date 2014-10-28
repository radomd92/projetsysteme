#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct DonneeElementaire
{
    char *donnee; int taille;

    char* operator = (DonneeElementaire &de) // DonneeEleentaire a <-- DonneeElementaire de
    {
        donnee = new char[de.taille];
        taille = de.taille;
        strncpy(donnee, de.donnee, taille);
        return donnee;
    }

    char* operator = (char *d) // affectation d'une valeur d'une chaine d à DonneeElementaire.
    {
        taille = strlen(d);
        donnee = new char[taille];
        strncpy(donnee, d, taille);
        return donnee;
    }

    bool operator == (DonneeElementaire &de) // DonneeElementaire a = DonneeElementaire de
    {
        if (de.taille != taille)
            return false;
        else
        {
            if (strncmp(de.donnee, donnee, taille) != 0) return false;
            else return true;
        }
    }

} DonneeElementaire;

typedef struct LigneDonnee
{
    DonneeElementaire clef, valeur;
} LigneDonnee;


bool operator < (const DonneeElementaire &a, const DonneeElementaire &b)
{
    if (a.taille < b.taille) // taille(a) < taille(b)
        return true;
    else if (a.taille == b.taille) // taille(a) = taille(b)
    {
        if (strncmp(a.donnee, b.donnee, b.taille)<0) // a < b
            return true;
        else
            return false;
    }
    else
        return false;
}

#endif // STRUCTURES_H
