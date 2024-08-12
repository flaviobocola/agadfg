/*
    programma che acquisito un numero >= 0 calcoli e visualizzi il fattoriale
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int fat, n;

    scanf("%d", &n);

    fat = 1;
    if (n != 0)
    {
        for (; n > 1; n--)
            fat *= n;
    }

    printf("%d", fat);

    return 0;
}

/*
int main(int argc, char * argv[])
{
    int i, num, fac;

    do{
        scanf("%d", &num);
    } while(num < 0);

    fac = 1;

    if(num != 0)
        for(i = num; i > 1; i--)
            fac *= i;

    printf("%d", fac);

    return 0;
}
*/