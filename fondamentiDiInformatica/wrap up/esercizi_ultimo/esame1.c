/* sottoprogramma che ricevuta in ingresso una stringa ne restituisce una nuova. TUTTI I VOCABILI INIZIANO CON LA LETTERE MAIUSCOLA, e sono seguite da lettere minuscole*/

#include <stdio.h>
#include <string.h>

#define INIZIO 'a'
#define FINE 'z'
#define SOPRAI 'A'
#define FINEI 'Z'
#define DIMENSIONE 50

void nuovastringa(char stringa[], int dimensione, char modificata[]);

int main(int argc, char *argv[])
{
    char fraseini[DIMENSIONE + 1];
    char fraseupp[DIMENSIONE + 1];
    int dim, i;

    gets(fraseini);
    nuovastringa(fraseini, strlen(fraseini), fraseupp);

    for (i = 0; i < strlen(fraseini); i++)
    {
        printf("%c", fraseupp[i]);
    }

    return 0;
}

void nuovastringa(char inizio[], int dimensione, char modificata[])
{
    int i;
    int segnalatore;

    segnalatore = 1;

    for (i = 0; i < dimensione; i++)
    {

        if (inizio[i] >= SOPRAI && inizio[i] <= FINEI && !segnalatore)
        {
            modificata[i] = inizio[i] - (SOPRAI - INIZIO);
        }

        else if (inizio[i] >= INIZIO && inizio[i] <= FINE && segnalatore)
        {
            modificata[i] = inizio[i] + (SOPRAI - INIZIO);
            segnalatore = 0;
        }

        else if (inizio[i] == ' ')
        {
            modificata[i] = inizio[i];
            segnalatore = 1;
        }

        else
        {
            modificata[i] = inizio[i];
        }
    }

    /* SE PRENDO IN INGRESSO UNA STRINGA NON POSSO DARE ALLA NUOVA TUTTA LA MEMORIA DISPONIBILE. QUINDI USO UN PUNTATORE E FACCIO LA MALLOC SOLO SULLA LUNGHEZZA DELLA STRINGA ACQUSITA */
    /* se ho un puntatore e devo scorrerlo: *ts -> *(ts + i)*/
}