#include <stdio.h>
#include <string.h>

#define LOWI 'a'
#define LOWE 'z'
#define HIGHI 'A'
#define HIGHE 'Z'

int main(int argc, char *argv[])
{
    char frase[100 + 1], nuova[100 + 1];
    int stop, i;

    stop = 1;

    gets(frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (stop && frase[i] != ' ' && frase[i] >= LOWI && frase[i] <= LOWE)
        {
            nuova[i] = frase[i] + HIGHI - LOWI;
            stop = 0;
        }
        else if (stop && frase[i] != ' ' && frase[i] >= HIGHI && frase[i] <= HIGHE)
        {
            nuova[i] = frase[i];
            stop = 0;
        }
        else if (stop == 0 && frase[i] >= HIGHI && frase[i] <= HIGHE)
        {
            nuova[i] = frase[i] - HIGHI + LOWI;
        }
        else if (frase[i] == ' ')
        {
            nuova[i] = frase[i];
            stop = 1;
        }
        else
        {
            nuova[i] = frase[i];
        }
    }

    for (i = 0; nuova[i] != '\0'; i++)
        printf("%c", nuova[i]);

    return 0;
}