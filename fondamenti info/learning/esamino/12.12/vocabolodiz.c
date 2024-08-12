#include <stdlib.h>

#define INIZIO 'a'
#define FINE 'b'
#define DIM 35

void vocaboli(FILE *dizionario)
{
    char vocali['a', 'e', 'i', 'o', 'u'], temp;
    char parola[DIM + 1];
    int i, j, stop;

    stop = 1;

    while (fgets(parola, DIM, dizionario))
    {
        temp = "a";
        for (i = 0; i < strlen(parola); i++)
        {
            for (j = 0; j < 5 && stop; j++)
                if (parola[i] == vocali[j])
                {
                    if (temp <= parola[i])
                        temp = parola[i];
                    else
                        stop = 0;
                }
            stop = 1;
        }
        printf("%s", parola);
    }
}
