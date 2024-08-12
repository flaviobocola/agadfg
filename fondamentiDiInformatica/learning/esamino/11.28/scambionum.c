#include <stdio.h>
#include <stdlib.h>

typedef struct lists
{
    int n;
    struct lists *next;
} listt;

listt *aggiunginumero(int);
void mostralista(listt *);
void svuotalista(listt *);

int main(int argc, char *argv[])
{
    listt *testa, *t2, *prossimo, *p2;
    int n;

    testa = NULL;
    t2 = NULL;
    prossimo = NULL;
    p2 = NULL;

    printf("inseririre i valori della lista (0 per fermarsi)\n");
    scanf("%d", &n);

    if (n != 0)
    {
        if (testa == NULL)
        {
            testa = aggiunginumero(n);
            prossimo = testa;
            scanf("%d", &n);
        }
        else
        {
            prossimo->next = aggiunginumero(n);
            prossimo = prossimo->next;
            scanf("%d", &n);
        }

        while (n != 0)
        {
            prossimo->next = aggiunginumero(n);
            prossimo = prossimo->next;
            scanf("%d", &n);
        }

        mostralista(testa);

        prossimo = testa;

        if (prossimo->next)
        {
            for (; prossimo->next && prossimo->next->next; prossimo = prossimo->next->next)
            {
                if (t2 == NULL)
                {
                    t2 = aggiunginumero(prossimo->next->n);
                    p2 = t2;
                    p2->next = aggiunginumero(prossimo->n);
                    p2 = p2->next;
                }
                else
                {
                    p2->next = aggiunginumero(prossimo->next->n);
                    p2 = p2->next;
                    p2->next = aggiunginumero(prossimo->n);
                    p2 = p2->next;
                }
            }
            if (prossimo->next)
            {
                if (t2 == NULL)
                {
                    t2 = aggiunginumero(prossimo->next->n);
                    p2 = t2;
                    p2->next = aggiunginumero(prossimo->n);
                    p2 = p2->next;
                }
                else
                {
                    p2->next = aggiunginumero(prossimo->next->n);
                    p2 = p2->next;
                    p2->next = aggiunginumero(prossimo->n);
                    p2 = p2->next;
                }
            }
            else if (prossimo->next == NULL)
                p2->next = aggiunginumero(prossimo->n);
        }
        else
        {
            t2 = aggiunginumero(prossimo->n);
        }

        mostralista(t2);

        if (testa)
            svuotalista(testa);
        if (t2)
            svuotalista(t2);
        prossimo = NULL;
        p2 = NULL;
        testa = NULL;
        t2 = NULL;
    }
    else
        printf("la lista non è stata creata\n");

    return 0;
}

listt *aggiunginumero(int num)
{
    listt *numero;

    numero = malloc(sizeof(listt));
    if (numero != NULL)
        printf("allocazione di memoria avvenuta con successo\n");
    numero->n = num;
    numero->next = NULL;

    return numero;
}

void mostralista(listt *testa)
{
    listt *t;

    t = testa;
    while (t->next)
    {
        printf("%d ", t->n);
        t = t->next;
    }
    printf("%d \n", t->n);
}

void svuotalista(listt *testa)
{
    listt *t;

    while (testa)
    {
        t = testa->next;
        free(testa);
        testa = t;
    }
}