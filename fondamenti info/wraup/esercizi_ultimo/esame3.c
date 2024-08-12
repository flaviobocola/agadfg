void visualizzacoordinate(int[][DIMC], int dimc, int dimr);

void visualizzacoordinate(int matrice[][DIMC], int dimc, int dimr)
{

    int i, j, numero;
    int somma;
    int spazior, spazioc;
    int h, k;

    spazior = 1;
    spazioc = 1;

    somma = 0;

    for (i = 0; i < dimr; i++)
        for (j = 0; j < dimc; j++)
        {
            numero = matrice[i][j];

            for (h = i - 1; h <= i + 1; h++)
                for (k = j - 1; k <= j + 1; k++)
                {
                    if (h >= 0 && h < nr && k >= 0 && k < nc && h != i && k != j)
                        somma += matrice[h][k];
                }

            if (somma == numero)
            {
                printf("%d %d\n", i, j);
            }
        }
}