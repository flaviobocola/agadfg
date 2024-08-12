/*
    programma che data una stringa di dimensione massima di 50 caratteri la comprima, dimensione massima carattere compresso: 9;
    si voglia avere tutte e due le stringhe e si assuma che siano composte solo da lettere minuscole dell'alfabeto inglese
*/

#include <stdio.h>
#include <string.h>
#define MAX 20
#define COMP 9
#define INIZIO 'a'
#define FINE 'z'

int main(int argc, char *argv[])
{
    char frase[MAX + 1], compressa[MAX];
    int i, j, n, stop;

    gets(frase);

    i = 0;
    n = 0;
    stop = 1;

    for (i = 0; frase[i] != '\0'; i++)
    {
        while (frase[i] == frase[i + 1])
        {
            i++;
        }

        for (j = 0; compressa[j] != '\0' && stop; j++)
        {
            if (frase[i] == compressa[j])
                stop = 0;
        }

        if (stop)
        {
            compressa[n] = frase[i];
            n++;
        }

        stop = 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("%c ", compressa[i]);
    }
}

/*
#include <stdio.h>
#include <string.h>
#define MAX 20
#define INIZIO 'a'
#define FINE 'z'

int main(int argc, char * argv[])
{
    char frase[MAX + 1], compressa[MAX + 1];
    int i, j, n, cont;

    n = 1;
    j = 0;
    cont = 0;
    gets(frase);

    for(i = 0; i < MAX - 1 && frase[i] != '\0'; i++){
        while(frase[i] == frase[i + 1]){
            n++;
            i++;
        }

        compressa[j] = frase[i];
        j++;
        cont++;
        if(n != 0){
            if(n > 9){
                compressa[j] = 9;
                j++;
                compressa[j] = frase[i];
                j++;
                compressa[j] = n + '0';
                cont += 3;
            } else{
            compressa[j] = n + '0';
            j++;
            cont++;
            }
            n = 1;

        }
    }

    printf("\n");
    for(i = 0; i < cont && compressa[i] != '\0'; i++)
        printf("%c", compressa[i]);

    return 0;
}
*/