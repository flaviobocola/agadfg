/*
    una lettera costituisce un pangramma se almeno una lettera di un alfabeto compare almeno una volta
    1 se una stringa è un pangramma
    0 se non lo è
*/

#include <stdio.h>
#include <string.h>

#define PINIZIO 'a'
#define PFINE 'z'
#define MINIZIO 'A'
#define MFINE 'Z'
#define DIM 10000

int pangramma(char[]);

int main(int argc, char *argv[])
{
    int esito;
    char frase[DIM + 1];

    gets(frase);
    esito = pangramma(frase);

    printf("%d\n", esito);

    return 0;
}

int pangramma(char frase[])
{
    char controllo[26];
    int i, j, k, stop, esito, ferma, dim;

    dim = strlen(frase);
    stop = 1;
    esito = 0;
    ferma = 1;
    j = 0;

    if (dim >= 26)
    {
        if (frase[0] != ' ')
        {

            controllo[j] = frase[0];
            j++;
        }
        for (i = 1; i < dim && ferma; i++)
        {
            if (frase[i] != ' ')
            {

                controllo[j] = frase[i];
                j++;
                for (k = j - 1; k >= 0 && stop; k--)
                    if (controllo[k] == controllo[j])
                    {
                        j--;
                        stop = 0;
                    }
                stop = 1;
            }
            if (j == 26)
                ferma = 0;
        }
        if (j >= 26)
            esito = 1;
    }

    return esito;
}