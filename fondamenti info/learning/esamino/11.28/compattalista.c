#include <stdio.h>
#include <stdlib.h>

typedef struct lists
{
    int numero;
    struct lists *next;
} listt;

listt *aggiunginumero(int);
void mostralista(listt *);
void svuotalista(listt *);

int main(int argc, char *argv[])
{
    listt *head, *prossimo, *aiuto, *posizione, *hcom, *pcom;
    int n;
    int *container;

    head = NULL;
    prossimo = NULL;
    aiuto = NULL;
    posizione = NULL;
    hcom = NULL;
    pcom = NULL;

    scanf("%d", &n);
    if (n > 0)
    {
        if (head == NULL)
        {
            head = aggiunginumero(n);
            prossimo = head;
            scanf("%d", &n);
        }
        else
        {
            prossimo->next = aggiunginumero(n);
            prossimo = prossimo->next;
            scanf("%d", &n);
        }
        while (n > 0)
        {
            prossimo->next = aggiunginumero(n);
            prossimo = prossimo->next;
            scanf("%d", &n);
        }

        printf("lista creata con successo\n");

        if (head->next)
        {
            for (aiuto = head; aiuto->next; aiuto = aiuto->next)
            {
                posizione = aiuto;
                n = aiuto->numero;
                printf("controlllo %d \n", n);

                prossimo = posizione->next;
                while (prossimo->next)
                {
                    if (n == prossimo->numero)
                    {
                        posizione->next = prossimo->next;
                        free(prossimo);
                        prossimo->next = NULL;
                        prossimo = posizione->next;
                    }
                    else
                    {
                        posizione = prossimo;
                        prossimo = prossimo->next;
                    }
                }

                if (hcom == NULL)
                {
                    hcom = aggiunginumero(n);
                    pcom = hcom;
                }
                else
                {
                    pcom->next = aggiunginumero(n);
                    pcom = pcom->next;
                }
            }

            mostralista(hcom);

            if (hcom)
                svuotalista(hcom);
            if (pcom)
                pcom = NULL;
            if (aiuto)
                aiuto = NULL;
            if (posizione)
                posizione = NULL;
            if (prossimo)
                prossimo = NULL;
        }

        svuotalista(head);
        prossimo = NULL;
    }
    else
        printf("la lista non è stata creata\n");

    return 0;
}

listt *aggiunginumero(int num)
{
    listt *elemento;

    elemento = malloc(sizeof(listt));
    elemento->numero = num;
    elemento->next = NULL;

    return elemento;
}

void mostralista(listt *partenza)
{
    listt *t;

    t = partenza;
    while (t->next)
    {
        printf("%d ", t->numero);
        t = t->next;
    }
    printf("%d", t->numero);
}

void svuotalista(listt *testa)
{
    listt *t;

    while (testa)
    {
        t = testa;
        testa = NULL;
        testa = t->next;
    }
}
