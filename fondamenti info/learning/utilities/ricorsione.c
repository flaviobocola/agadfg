#include <stdio.h>

int fattoriale(int);

int main(int argc, char *argv[])
{
    int n, fat;

    printf("inserire il numero di cui si vuole calcolare il fattoriale\n");
    scanf("%d", &n);
    fat = fattoriale(n);
    printf("il fattoriale del numero inserito è: %d\n", fat);

    return 0;
}

int fattoriale(int numero)
{

    int risultato;

    if (numero == 0 || numero == 1)
        risultato = 1;
    else
        risultato = numero * fattoriale(numero - 1);

    return risultato;
}