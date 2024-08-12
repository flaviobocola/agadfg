#include <stdio.h>

#define DIM 10

void nuovo(int[], int[], int);

int main(int argc, char *argv[])
{
    int primo[DIM], secondo[DIM], temp[DIM];
    int i, j, uguali, stop, esito;

    uguali = 1;

    printf("inserisci i valori del primo array\n");
    for (i = 0; i < DIM; i++)
        scanf("%d", &primo[i]);

    printf("inserisci i valori del secondo array\n");
    for (i = 0; i < DIM; i++)
        scanf("%d", &secondo[i]);

    i = 0;
    while (primo[i] != secondo[j])
        j++;

    for (i = 0; i < DIM; i++)
        if (secondo[j] == secondo[i] && i != j)
            uguali++;

    nuovo(secondo, temp, j);

    while (uguali && stop != 2)
    {
        stop = 1;

        for (i = 0; i < DIM && stop == 1; i++)
            if (primo[i] != secondo[i])
            {
                stop = 0;
            }
        if (stop == 0 && uguali > 1)
            for (i = 1; secondo[i] != secondo[0]; i++)
                nuovo(secondo, temp, i);
        if (stop == 1)
        {
            esito = j;
            stop = 2;
        }
        uguali--;
    }

    if (stop == 0)
        esito = -1;

    printf("%d ", esito);

    return 0;
}

void nuovo(int secondo[], int temporaneo[], int p)
{
    int i, j;

    i = 0;
    for (; p < DIM; p++)
    {
        temporaneo[i] = secondo[p];
        i++;
    }
    for (j = 0; j < p; j++)
    {
        temporaneo[i] = secondo[j];
        i++;
    }

    for (i = 0; i < DIM; i++)
        secondo[i] = temporaneo[i];
}