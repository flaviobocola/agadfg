/*
    un sottoprogramma che riceve in ingresso una lista di interi e la modifica sostituendo a ciascuna coppia di elementi consecutivi la loro somma.
*/

#include <stdio.h>

typedef struct lists
{
    int numero;
    struct lists *next;
} listt;

listt *duenumeriinuno(listt *inizio)
{
    listt *head = NULL;
    listt *primalista;

    for (primalista = inizio; primalista && primalista->next; primalista->next->next)
        append(head, primalista->numero + primalista->next->numero);

    if (primalista)
        append(head, primalista->numero);

    emptylist(inizio);

    return head;
}

/*
typedef struct ilist_s
{
    int info;
    struct ilist_s *next;
} ilist_t;

ilist_t *dueinuno(ilist_t *h)
{
    ilist_t *head = NULL;
    ilist_t *ptr;

    for (ptr = h; ptr && ptr->next; ptr = ptr->next->next)
        head = append(head, ptr->info + ptr->next->info);
    if (ptr)
        head = append(head, ptr->info);
    emptylist(h);

    return head;
}
*/