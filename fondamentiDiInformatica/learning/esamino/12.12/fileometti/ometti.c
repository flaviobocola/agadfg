/*
    ometti riceve in ingresso:
        il nome di un file ASCII, sorgente src
        il nome di un file destinazione sdt
        un nvocabolo voc (stringa di al più 30 caratteri)

    il sottoprogramma crea il file destinazione ricopiando il contenuto del file sorgente
    tranne il vocabolo voc.
    il file sorgente contiene esclusivamente vocaboli separati da uno spazio

    il sottoprogramma restituisce al chiamante il numero di volte che ha trovato e omesso
    di copiare il vocabolo voc.
    nel caso si abbiano problemi nell'accesso ai file si visualizzi il messaggio "ERRORE"
    e si restituisca -1


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30

int ometti(char[], char[], char[]);

int main(int argc, char *argv[])
{
    int result;
    char file_1[DIM + 1], file_2[DIM + 1], parola[DIM + 1];

    printf("inserire il nome del file da aprire\n");
    gets(file_1);

    printf("inserire il nome del file da creare\n");
    gets(file_2);

    printf("inserire la parola da omettere\n");
    gets(parola);

    result = ometti(file_1, file_2, parola);
    printf("%d\n", result);

    return 0;
}

int ometti(char primo[], char secondo[], char omissione[])
{
    int esito, i;
    FILE *uno, *due;
    char parola[DIM];

    esito = 0;
    uno = fopen(primo, "r");
    due = fopen(secondo, "w");

    if (!uno || !due)
    {
        printf("ERRORE\n");
        esito = -1;
    }
    else
    {
        while (fscanf(uno, "%s", parola) != EOF)
        {
            for (i = 0; i < strlen(parola); i++)
                if (parola[i] < 'a')
                    parola[i] += 32;
            if (strcmp(parola, omissione))
                fprintf(due, "%s%s", parola, " ");
            else
                esito++;
        }
    }

    fclose(uno);
    fclose(due);

    return esito;
}