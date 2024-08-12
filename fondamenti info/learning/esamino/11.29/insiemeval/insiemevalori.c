#include <stdio.h>
#include <stdlib.h>

typedef struct lists
{
    int numero;
    struct lists *next;
} listt;

listt *aggiunginumero(int);
void popolafile(listt *);
int controlloprimo(int);
void puliscilista(listt *);

int main(int argc, char *argv[])
{
    listt *head, *prossimo;
    int n;

    head = NULL;
    prossimo = NULL;

    scanf("%d", &n);
    if (n >= 1)
    {
        if (head == NULL)
        {
            head = aggiunginumero(n);
            if (head)
            {
                prossimo = head;
                printf("lista creata con successo\n");
            }

            scanf("%d", &n);
            if (head && n >= 1)
            {
                prossimo->next = aggiunginumero(n);
                printf("secondo numero nella lista aggiunto correttamente\n");
                scanf("%d", &n);
            }
        }
        else
        {
            prossimo = head;
            prossimo->next = aggiunginumero(n);
            printf("numero aggiunto correttamente alla lista");
            scanf("%d", &n);
        }

        while (n >= 1)
        {
            if (prossimo->next)
            {
                prossimo = prossimo->next;
                prossimo->next = aggiunginumero(n);
            }
            scanf("%d", &n);
        }
    }

    popolafile(head);
    puliscilista(head);
    prossimo = NULL;

    return 0;
}

listt *aggiunginumero(int num)
{
    listt *indirizzo = NULL;

    indirizzo = malloc(sizeof(listt));
    indirizzo->numero = num;
    indirizzo->next = NULL;

    return indirizzo;
}

void popolafile(listt *testa)
{
    FILE *nome;
    listt *t;
    int n, esito;

    esito = 0;
    t = testa;

    nome = fopen("primi", "w");
    if (nome)
        printf("file aperto con successo");

    while (t->next)
    {
        n = t->numero;
        esito = controlloprimo(n);
        if (esito)
            fprintf(nome, "%d%s", n, " ");
        t = t->next;
    }

    n = t->numero;
    esito = controlloprimo(n);
    if (esito)
        fprintf(nome, "%d%s", n, " ");

    fclose(nome);
    if (!nome)
        printf("file chiuso con successo\n");
}

int controlloprimo(int numero)
{
    int esito, i;

    esito = 1;

    if (numero == 1 || numero == 2)
        esito = 1;
    else if (numero % 2 == 0)
        esito = 0;
    else
    {
        for (i = 3; i < numero / 2 && esito; i += 2)
            if (numero % i == 0)
                esito = 0;
    }

    return esito;
}

void puliscilista(listt *testa)
{
    listt *t;

    while (testa)
    {
        t = testa->next;
        free(testa);
        testa = t;
    }
}