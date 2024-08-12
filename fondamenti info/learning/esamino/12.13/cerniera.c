#include <stdio.h>
#include <string.h>

#define DIM 100

int controllacerniera(char[], char[], int *);
int nuovastringa(char[], char[], char[], int);

int main(int argc, char *argv[])
{
    char prima[DIM + 1], seconda[DIM + 1], nuova[DIM + 1];
    int i, j, cont, k, lunghezza, dimensione, stop;

    cont = 1;

    gets(prima);
    gets(seconda);

    stop = controllacerniera(prima, seconda, &cont);
    if (stop == 0)
    {
        dimensione = nuovastringa(prima, seconda, nuova, cont);

        for (i = 0; i < dimensione; i++)
        {
            printf("%c", nuova[i]);
        }
    }
    else
        printf("cerniera non presente");

    return 0;
}

int controllacerniera(char prima[], char seconda[], int *cont)
{

    int esito, j, i, n;

    esito = 0;

    i = 0;
    j = strlen(seconda) - 1;
    n = *cont;

    while (prima[i] != seconda[j] && j > 0)
    {
        j--;
        n++;
    }

    for (i = 0; i < n && esito == 0; i++)
    {
        if (prima[i] != seconda[j])
            esito = -1;
        j++;
    }

    *cont = n;

    return esito;
}

int nuovastringa(char prima[], char seconda[], char nuova[], int cont)
{
    int i, dim, j, lunghezza;
    i = cont;

    dim = 0;

    lunghezza = strlen(seconda);

    for (j = 0; j < DIM && prima[i] != '\0'; j++)
    {
        nuova[j] = prima[i];
        i++;
        dim++;
    }

    lunghezza -= cont;
    i = 0;

    do
    {
        nuova[j] = seconda[i];
        j++;
        i++;
        dim++;
    } while (i < lunghezza);

    return dim;
}