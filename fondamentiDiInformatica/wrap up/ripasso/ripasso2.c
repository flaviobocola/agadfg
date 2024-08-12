#include <stdio.h>

#define LUNGHEZZA 10
#define K 5

int main(int argc, char *argv[])
{
    int i, j;
    int valori[LUNGHEZZA];
    int somma, sommamax;

    for (i = 0; i < LUNGHEZZA; i++)
    {
        scanf("%d", &valori[i]);
    }

    somma = 0;
    sommamax = 0;

    for (j = 0; j < LUNGHEZZA - K + 1; j++)
    {
        for (i = j; i < K + j; i++)
        {
            somma += valori[i];
        }

        if (somma >= sommamax)
        {
            sommamax = somma;
        }

        somma = 0;
    }

    printf("%d", sommamax);

    return 0;
}