/*
    array A di n elementi
    k >= 1

    A[i] è un k-min se è strettamente minore dei k valori precedenti e successivi dell'array.
    Condizione necessaria ma non sufficiente N >= 2 * k + 1.

    Scrivere una funzione k-min che ricevuto in ingresso arreay e k restituisca il più piccolo indice tale che A[i] sia un k-min oppure -1 se non esiste alcun k-min

    es A=[0,1,0,0,-1,1,13,2] e k = 2.
*/

int kminimo(int valori[], int dimensione, int k)
{
    int esito, i, j;

    esito = -1;
    for (i = k + 1; i < dimensione - k; i++)
    {
        for (j = i - k; j < i + k)
    }

    return esito;
}
