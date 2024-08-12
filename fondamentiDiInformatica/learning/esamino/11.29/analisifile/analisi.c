#include <stdio.h>
#include <string.h>

#define DIM 40

int main(int argc, char *argv[])
{
    char nome[DIM + 1];
    FILE *file;
    int numero, somma;
    int max, min, nvalp, nvaln, nvalv, med, i;

    max = 0;
    min = 0;
    nvalp = 0;
    nvaln = 0;
    nvalv = 0;
    somma = 0;
    i = 0;

    printf("inserire il nome del file da analizzare\n");
    gets(nome);

    file = fopen(nome, "r");

    fscanf(file, "%d", &numero);

    if (numero == NULL)
    {
        printf("il file è vuoto\n");
    }
    else
    {
        do
        {
            if (numero == 0)
            {
                nvalv++;
                i++;
            }
            else
            {
                somma += numero;
                i++;
                if (numero > max)
                    max = numero;
                if (numero < min)
                    min = numero;
                if (numero > 0)
                    nvalp++;
                else
                    nvaln++;
            }

            fscanf(file, "%d", &numero);
        } while (!feof(file));
        med = somma / i;
        printf("il numero di valori del file è: %d, di cui %d sono positivi, %d negativi e %d nulli\n", i, nvalp, nvaln, nvalv);
        printf("il massimo è: %d \nil minimo: %d\n la media: %d", max, min, med);
    }

    fclose(file);

    return 0;
}