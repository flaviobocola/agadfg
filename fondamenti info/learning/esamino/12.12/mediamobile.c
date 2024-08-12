/*
    ingresso:
        un array di x valori interi
        un valore intero n
        array di valori che costituiscono la media mobile di x di finestra n
*/

#include <stdio.h>
#include <stdlib.h>

void mediamobile(int, int, int[], float[]);

int main(int argc, char *argv[])
{
    int dimensione, finestra, i;
    int *valori;
    float *media;

    printf("inserire il numero di valori da immettere nell'array\n");
    scanf("%d", &dimensione);

    valori = malloc(dimensione * sizeof(int));
    media = malloc(dimensione * sizeof(float));

    printf("inserire i valori dell'array\n");
    for (i = 0; i < dimensione; i++)
        scanf("%d", &valori[i]);

    printf("inserire la grandezza della finestra\n");
    scanf("%d", &finestra);

    mediamobile(dimensione, finestra, valori, media);
    for (i = 0; i < dimensione; i++)
        printf("%0.1f ", media[i]);

    free(valori);
    free(media);

    return 0;
}

void mediamobile(int dim, int window, int val[], float avg[])
{
    int i, j;
    float sum;

    sum = 0;

    for (i = 0; i < window - 1; i++)
    {
        for (j = i; j >= 0; j--)
        {
            sum += val[j];
        }
        avg[i] = (float)(sum / (i + 1));
    }

    for (; i < dim; i++)
    {
        sum = 0;
        for (j = 0; j < window - 1; j++)
            sum += val[i - j];
        avg[i] = (sum / window);
    }
}