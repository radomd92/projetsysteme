#include "moteurbd.h"
#include <string.h>

char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstvwxyz0123456789";
int taille = strlen(charset);

DonneeElementaire MoteurBD::genererClef(int n)
{
    DonneeElementaire clefGeneree;
    int i;

    clefGeneree.taille = n;
    clefGeneree.donnee = new char[n];
    assert (clefGeneree.donnee != NULL);

    for (i = 0; i < n; i++)
    {
        clefGeneree.donnee[i] = charset[rand() % taille];
    }
    clefGeneree.donnee[i - 1] = '\0';

    return clefGeneree;
}

DonneeElementaire MoteurBD::genererClef()
{
    return genererClef(16);
}
