/*
    ricevute in ingresso due liste ne restituisce una nuova creata altrnando gli elementi delle due liste e mettendo in coda quelli della lista più lunga
*/

#include <stdio.h>

typedef struct lists
{
    int numero;
    struct lists *next;
} listt;

listt *nuovalista(listt *prima, listt *seconda)
{
    listt *head = NULL;
    listt *prima, *seconda;

    primalista = prima;
    secondalista = seconda;

    for (primalista = prima &&secondalista = seconda; primalista && secondalista; primalista->next && secondalista->next)
    {
        append(head, primalista->numero);
        append(head, secondalista->numero);
    }

    for (primalista; primalista; primalista->next)
        append(head, primalista->numero);
    for (secondalista; secondalista; secondalista->next)
        append(head, primalista->numero;
}
