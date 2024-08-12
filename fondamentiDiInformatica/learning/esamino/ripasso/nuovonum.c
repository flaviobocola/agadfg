#include <stdio.h>

#define POTENZA 10

int main(int argc, char *argv[])
{
    int a, b, n, pot, temp;

    pot = 1;
    n = 0;

    printf("inserire il primo numero\n");
    scanf("%d", &a);

    printf("inserire il secondo numero\n");
    scanf("%d", &b);

    for (; a && b; a /= 10)
    {
        temp = a % 10 + (b % 10 * 10);

        n += temp * pot;
        pot = pot * POTENZA * POTENZA;
        b /= 10;
    }
    if (a)
    {
        n += a * pot;
    }
    else if (b)
    {
        n += b * pot;
    }

    printf("%d\n", n);

    return 0;
}