#include <stdio.h>
#define NCOL 3
#define NRIG 3

int main(int argc, char *argv[])
{
    int matrice[NRIG][NCOL], ruotaor[NRIG][NCOL], ruotaan[NRIG][NCOL];
    int i, j;

    for (i = 0; i < NRIG; i++)
        for (j = 0; j < NCOL; j++)
            scanf("%d", &matrice[i][j]);

    for (i = 0; i < NRIG; i++)
        for (j = 0; j < NCOL; j++)
            ruotaor[i][j] = matrice[NRIG - 1 - j][i];

    for (i = 0; i < NRIG; i++)
        for (j = 0; j < NCOL; j++)
            ruotaan[i][j] = matrice[j][NCOL - 1 - i];

    for (i = 0; i < NRIG; i++)
    {
        for (j = 0; j < NCOL; j++)
            printf("%d", matrice[i][j]);
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < NRIG; i++)
    {
        for (j = 0; j < NCOL; j++)
            printf("%d", ruotaor[i][j]);
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < NRIG; i++)
    {
        for (j = 0; j < NCOL; j++)
            printf("%d", ruotaan[i][j]);
        printf("\n");
    }

    return 0;
}