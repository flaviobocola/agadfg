#include <stdio.h>

#define BASE 10

int main(int argc, char *argv[])
{

    long x, y, nuovo;
    long contatore;

    contatore = 1;
    nuovo = 0;

    scanf("%ld%ld", &x, &y);

    while (x && y)
    {
        nuovo = nuovo + ((x % BASE) * contatore);
        contatore = contatore * BASE;
        nuovo = nuovo + ((y % BASE) * contatore);
        contatore *= BASE;

        x = x / BASE;
        y = y / BASE;
    }

    printf("%ld\n", nuovo);

    if (x)
    {
        nuovo = nuovo + (x * contatore);
    }
    else if (y)
    {
        nuovo = nuovo + (y * contatore);
    }

    printf("%ld", nuovo);

    return 0;
}