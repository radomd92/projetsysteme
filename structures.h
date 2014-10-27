#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct DonneeElementaire
{
    char *donnee; int taille;

    void initialiser()
    {
        taille = 0;
        donnee = new char[1];
    }

    void initialiser(char *chaine)
    {
        taille = strlen(chaine);
        strncpy(donnee, chaine, taille);
    }

    char* operator = (const DonneeElementaire &de) // DonneeEleentaire a <-- DonneeElementaire de
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


#endif // STRUCTURES_H
