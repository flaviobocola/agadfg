/*
    tre interi, giorno, mese ed anno di una data.
    calcolare il numero del giorno dell'anno.
*/
#include <stdio.h>

typedef struct data_s
{
    int giorno, mese, anno;
} data_t;

int bisestile(int);

int main(int argc, char *argv[])
{
    data_t data;
    int distanza, esito;

    scanf("%d %d %d", &data.giorno, &data.mese, &data.anno);

    distanza = data.giorno;
    data.mese--;

    while (data.mese)
    {
        switch (data.mese)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            distanza += 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            distanza += 30;
            break;

        default:
            esito = bisestile(data.anno);
            if (!esito)
                distanza += 29;
            else
                distanza += 28;
            break;
        }

        data.mese--;
    }

    printf("%d", distanza);

    return 0;
}

int bisestile(int anno)
{
    int esito;
    esito = 1;

    if (anno % 4 == 0)
        esito = 0;
    else if (anno % 100 == 0 && anno % 400 == 0)
        esito = 0;

    return esito;
}