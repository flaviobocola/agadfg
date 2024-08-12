/*
    programma che mostri un menu, permetta con 1 di allocare memoria per un array, con 2 di popolarlo, con 3 di mostrarne a schermo il contenuto e con 0 di chiudersi
*/

#include <stdio.h>
#include <stdlib.h>

void mostramenu();
void daimemoria(int *);
void popola(int *, int);
void mostra(int *, int);

int main(int argc, char *argv[])
{
    int opzione, numero;
    int *array;

    numero = 0;

    mostramenu();

    scanf("%d", &opzione);
    while (opzione != 0)
    {
        while (opzione < 0 || opzione > 3)
        {
            printf("inserire un valore valido \n");
            scanf("%d", &opzione);
        }

        switch (opzione)
        {
        case 1:
            daimemoria(&numero);
            array = malloc(numero * sizeof(int));
            break;
        case 2:
            popola(array, numero);
            break;
        case 3:
            mostra(array, numero);
            break;
        default:
            break;
        }

        mostramenu();

        scanf("%d", &opzione);
    };

    if (numero)
        free(array);
    printf("sei uscito dal programma\n");

    return 0;
}

void mostramenu()
{
    printf("---------------------- \n");
    printf("1 - alloca la memoria \n");
    printf("2 - popola l'array \n");
    printf("3 - mostra il contenuto \n");
    printf("0 - esci dal programma \n");
    printf("--------------------- \n");
}

void daimemoria(int *numeri)
{
    int len;

    printf("inserire la grandezza desiderata per l'array \n");
    scanf("%d", &len);
    *numeri = len;

    if (numeri != NULL)
        printf("la memoria è stata allocata correttamente\n");
    else
        printf("errore nell'allocazione di memoria\n");
}

void popola(int *spazio, int grandezza)
{
    int i;

    if (grandezza)
    {
        printf("inserire i valori da memorizzare (HINT: il numero massimo di valori inseribili è: %d \n", grandezza);

        for (i = 0; i < grandezza; i++)
            scanf("%d", &spazio[i]);
    }
    else
        printf("ATTENZIONE, bisogna prima definire la grandezza dell'array\n");
}

void mostra(int *spazio, int grandezza)
{
    int i;

    if (grandezza && spazio[0])
    {
        printf("i valori memorizzati sono: ");
        for (i = 0; i < grandezza; i++)
            printf("%d ", spazio[i]);
        printf("\n");
    }
    else
        printf("ATTENZIONE, bisogna prima definire la grandezza dell'array, popolarlo e solo dopo visualizzarne il contenuto\n");
}