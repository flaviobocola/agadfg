#include <stdio.h>

#define BASE 10

int main(int argc, char *argv[])
{

    int numero;
    char simbolo;
    int aiuto, cifre, potenza, i;

    cifre = 0;
    potenza = 1;

    scanf("%d %c", &numero, &simbolo);
    aiuto = numero;

    while (aiuto > 0)
    {
        aiuto /= BASE;
        potenza *= BASE;
    }

    potenza /= BASE;

    while (potenza)
    {
        aiuto = numero / potenza;
        numero = numero % potenza;

        for (i = 0; i < aiuto; i++)
        {
            printf("%c ", simbolo);
        }
        printf("\n");
        potenza /= BASE;
    }

    /* OCCHIO AL CONCETTO CHE C'È DIETRO*/

    return 0;
}