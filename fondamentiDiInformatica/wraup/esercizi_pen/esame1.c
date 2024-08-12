#include <stdio.h>

#define NUMERI 20

int main(int argc, char *argv[])
{
    int i;
    int valori[NUMERI];
    int len, maxlen, indice, maxindice;

    for (i = 0; i < NUMERI; i++)
        scanf("%d", &valori[i]);

    len = 1;
    maxlen = 1;

    for (i = 0; i < NUMERI; i++)
    {
        if (i < NUMERI - 1 && valori[i] < valori[i + 1])
        {
            if (len == 1)
            {
                indice = i;
            }
            len++;
        }
        else
        {
            if (len >= maxlen)
            {
                maxlen = len;
                maxindice = indice;
            }
            len = 1;
        }
    }
    if (maxlen == 1)
        maxindice = i;

    printf("%d %d", maxlen, maxindice);

    return 0;
}