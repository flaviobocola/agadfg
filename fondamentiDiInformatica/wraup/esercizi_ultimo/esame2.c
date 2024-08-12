/* sottoprogramma che riceve un array di interi, un intero positivo k e qualsiasi altro parametro ritenuto necessario.  CALCOLA E RESTITUISCE IL MASSIMO DELLA SOMMA DI K ELEMENTI CONTIGUI DELL'ARRAY*/

#include <stdio.h>

#define DIMENSIONE 5
#define K 5

int sommak(int[], int, int);

int main(int argc, char *argv[])
{
    int numeri[DIMENSIONE];
    int sommamassima;
    int i;

    for (i = 0; i < DIMENSIONE; i++)
        scanf("%d", &numeri[i]);

    sommamassima = sommak(numeri, DIMENSIONE, K);

    printf("%d", sommamassima);

    return 0;
}

int sommak(int valori[], int dimensione, int k)
{
    int i, j, numeroiterazioni;
    int somma, sommamax;

    somma = 0;
    sommamax = 0;

    if (dimensione <= k)
    {
        for (i = 0; i < dimensione; i++)
            sommamax += valori[i];
    }
    else
    {
        numeroiterazioni = dimensione - k + 1;

        for (j = 0; j < numeroiterazioni; j++)
        {
            for (i = 0 + j; i < k + j; i++)
                somma += valori[i];

            if (somma > sommamax)
                sommamax = somma;

            somma = 0;
        }
    }

    /* SE IO HO UN RANGE E UN NUMERO DI VALORI CON CUI LAVORO. SE AUMENTO UNO DEVO AUMENTARE ANCHE L'ALTRO */
    /* SVUOTA QUELLE VARIABILI */

    return sommamax;
}