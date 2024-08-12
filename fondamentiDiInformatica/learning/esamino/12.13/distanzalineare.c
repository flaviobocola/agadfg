/*
    ingresso:
        start: primo valore reale
        stop: ultimo valore reale
        numero: il numero di valori da distribuire nell'intervallo [start; stop] (intero);
        escludi stop: 1 se si vuole escludere il valore stop, ossia se i valori devono copreire l'intervallo [start, stop), 0 altrimenti
        valoricalcolati: array in cui salvare i dati calcolati

    calcola e trasmette al chiamante (array valoricalcolati) l0insieme di numeri uniformemente distribuiti nell'intervallo [start ; stop]
*/
#include <stdio.h>
#include <stdlib.h>

void distanzalineare(int, int, int, int, float[]);

int main(int argc, char *argv[])
{
    int start, stop, n, escludi, i;
    float *numeri;

    printf("inserisci il valore di start\n");
    scanf("%d", &start);

    printf("inserisci il valore di stop\n");
    scanf("%d", &stop);

    printf("inserisci il numero di numeri\n");
    scanf("%d", &n);

    printf("vuoi escludere lo stop? (1 = si, 0 = no)\n");
    scanf("%d", &escludi);

    numeri = malloc(n * sizeof(float));

    distanzalineare(start, stop, n, escludi, numeri);

    for (i = 0; i < n; i++)
        printf("%0.1f ", numeri[i]);

    free(numeri);

    return 0;
}

void distanzalineare(int inizio, int fine, int numero, int esci, float valori[])
{
    int i;

    valori[0] = inizio;
    if (!esci)
    {
        numero -= 1;
        valori[numero] = fine;
    }

    for (i = 1; i < numero; i++)
        scanf("%f", &valori[i]);
}