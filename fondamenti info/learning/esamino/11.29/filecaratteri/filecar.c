/*
    programma che chiede il nome di un file (max 40 car)
    conta e visualizza il numero di caratteri
    e il carattere con ASCII più grande
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 40

int main(int argc, char *argv[])
{
    FILE *file;
    char nome[DIM + 1], carattere, max;
    int n;

    max = 0;
    n = 0;

    gets(nome);
    file = fopen(nome, "r");

    while (fscanf(file, "%c", &carattere) != EOF)
    {
        if (carattere > max)
            max = carattere;

        if (carattere != ' ')
            n++;
    }

    printf("%d %c", n, max);

    fclose(file);

    return 0;
}