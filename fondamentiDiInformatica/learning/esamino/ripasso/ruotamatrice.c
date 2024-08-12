#include <stdio.h>

#define DIM 3

int main(int argc, char *argv[])
{
    int matrice[DIM][DIM], orario[DIM][DIM], antiorario[DIM][DIM];
    int i, j;

    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            scanf("%d", &matrice[i][j]);

    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            orario[i][j] = matrice[DIM - 1 - j][i];

    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            antiorario[i][j] = matrice[j][DIM - 1 - i];

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf("%d ", antiorario[i][j]);
        printf("\n");
    }

    return 0;
}