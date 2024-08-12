#include <stdio.h>

#define DIM 4

void spostaarray(int[], int, int);

int main(int argc, char *argv[])
{
    int valori[DIM], codice[DIM], somma;
    int i;

    printf("inserire i valori di valori\n");
    for (i = 0; i < DIM; i++)
    {
        scanf("%d", &valori[i]);
    }

    printf("inserire i valori di codice\n");
    for (i = 0; i < DIM; i++)
    {
        scanf("%d", &codice[i]);
    }

    // questo vale soltanto se codice[i] > 0;
    somma = valori[0];
    for (i = 0; i < DIM; i++)
    {
        spostaarray(valori, codice[i], DIM);
        somma += valori[0];
    }

    printf("%d", somma);

    return 0;
}

void spostaarray(int valori[], int indice, int dimensione)
{
    int i, j;
    int tem[dimensione];

    j = 0;
    if (indice > 0)
    {
        if (indice > dimensione)
            indice -= dimensione;
        for (i = indice; i < dimensione; i++)
        {
            tem[j] = valori[i];
            j++;
        }
        for (i = 0; i < indice; i++)
        {
            tem[j] = valori[i];
            j++;
        }
    }
    else if (indice < 0)
    {
        if (indice < (dimensione * -1))
            indice += dimensione;

        for (i = (dimensione - indice); i < dimensione; i++)
        {
            tem[j] = valori[i];
            j++;
        }
        for (i = 0; i < (dimensione - indice); i++)
        {
            tem[j] = valori[i];
            j++;
        }
    }

    printf("\n");
}