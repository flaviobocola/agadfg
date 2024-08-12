#include <stdio.h>
#include <stdlib.h>

struct personas
{
    int anni;
    struct personas *next;
};

struct personas *creapersona(int);
void mostrapersona(struct personas *);
void mostralista(struct personas *);
void pulisci(struct personas *);

int main(int argc, char *argv[])
{
    struct personas *head, *aggiunto;
    int eta;
    head = NULL;
    aggiunto = NULL;

    scanf("%d", &eta);
    if (eta)
    {
        if (head == NULL)
        {
            head = creapersona(eta);
            if (head)
                aggiunto = head;
            printf("prima persona della lista creata correttamente\n");

            scanf("%d", &eta);
            if (eta)
            {
                aggiunto->next = creapersona(eta);
                printf("persona della lista creata correttamente\n");
            }
        }
        else
        {
            aggiunto = head;
            scanf("%d", &eta);
            if (eta)
            {
                aggiunto->next = creapersona(eta);
                printf("persona della lista creata correttamente\n");
            }
        }
    }
    if (eta)
    {
        scanf("%d", &eta);
        while (eta > 0)
        {
            if (aggiunto->next)
            {
                aggiunto = aggiunto->next;
                aggiunto->next = creapersona(eta);
                printf("persona della lista creata correttamente\n");
            }
            scanf("%d", &eta);
        }
    }
    printf("\n");
    mostralista(head);

    if (head->next)
        pulisci(head);

    head = NULL;
    aggiunto = NULL;

    return 0;
}

struct personas *creapersona(int anni)
{
    struct personas *individuo;
    individuo = NULL;

    individuo = malloc(sizeof(struct personas));
    if (individuo)
    {
        individuo->next = NULL;
        individuo->anni = anni;
    }
    else
    {
        printf("errore nell'allocazione della memoria\n");
    }

    return individuo;
}

void mostrapersona(struct personas *testa)
{
    printf("%d ", testa->anni);
}

void mostralista(struct personas *testa)
{
    struct personas *t;
    t = testa;
    if (t == NULL)
        printf("la lista è vuota\n");
    else
    {
        while (t != NULL)
        {
            mostrapersona(t);
            t = t->next;
        }
        printf("\n");
    }
}

void pulisci(struct personas *testa)
{
    struct personas *prossimo;
    while (testa)
    {
        prossimo = testa->next;
        free(testa);
        testa = prossimo;
    }
    if (testa == NULL)
        printf("pulizia della memoria completata correttamente \n");
}

/*
#include <stdio.h>
#include <stdlib.h>

struct personas
{
    int eta;
    struct personas *next;
};

struct personas *nuova(int anni)
{
    struct personas *nuovapersona;

    nuovapersona = NULL;
    nuovapersona = malloc(sizeof(struct personas));
    if (nuovapersona != NULL)
    {
        nuovapersona->next = NULL;
        nuovapersona->eta = anni;
    }
    else
        printf("problema nell'allocazione della memoria");

    return nuovapersona;
};

void appello(struct personas *persona)
{
    if (persona == NULL)
        printf("l'indirizzo è nullo\n");
    else
        printf("la tua persona ha %d anni e si trova in: %p, il prossimo in fila è: %px\n", persona->eta, persona, persona->next);
}

int main(int argc, char *argv[])
{
    struct personas *head, *aggiunto;

    head = NULL;
    aggiunto = NULL;

    if (head == NULL)
    {
        head = nuova(eta);
        if (head != NULL)
        {
            aggiunto = head;
        }
    }
    else
    {
        aggiunto->next = nuova(eta);
        if (aggiunto->next != NULL)
            aggiunto = aggiunto->next;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct personas // creo la mia struttura
{
    int eta;
};

struct personas *creapersona(int eta) // creo un puntatore alla struttura tramite una funzione che prenda come input il campo da assegnare ad ogni elemento della lista
{
    struct personas *nuovapersona; // crea l'indirizzo
    nuovapersona = NULL;           // lo setta a null

    nuovapersona = malloc(sizeof(struct personas)); // richiede la memoria che serve a seconda della quantità dei dati
    nuovapersona->eta = eta;                        // setta il paramentro con il dato desiderato

    return nuovapersona; // ritorna il puntatore aggiornato
}

void stampapersona(struct personas *persona, char *commento)
{
    if (persona == NULL) // controlla se il puntatore sta effettivamente puntando a qualcosa
        printf("%s è nulla\n", commento);
    else // in caso positivo ne stampa indirizzo e eta
        printf("%s: la sua età è: %d, il suo indirizzo: %p\n", commento, persona->eta, persona);
};

int main(int argc, char *argv[])
{
    struct personas *prima; // creo due indirizzi
    struct personas *seconda;

    prima = NULL; // li setto a null
    seconda = NULL;

    stampapersona(prima, "prima"); // stampo gli indirizzi
    stampapersona(seconda, "seconda");

    prima = creapersona(14); // associo gli indirizzi i valori
    seconda = creapersona(13);

    stampapersona(prima, "prima"); // stampo i valori desiderati
    stampapersona(seconda, "seconda");

    free(prima); // libero la memoria dagli indirizzi
    free(seconda);

    prima = NULL; // li ripunto a NULL
    seconda = NULL;

    return 0;
}


        PROVA

struct datas{
    int data;
}

struct datas *creapersona(int eta){
    struct datas *nuovapersona;

    nuovapersona = NULL;
    nuovapersona = malloc(sizeof(struct datas));

    nuovapersona->data = eta;

    return nuovapersona;
}

void mostrapersona(int individuo){
    if(individuo == NULL)
        printf("l'indirizzo è nullo");
    else
        printf("l'individuo ha %d anni e si trova in %p", individuo->data, individuo);
}

int main(int argc, char * argv[])
{
    struct datas *primapersona;
    primapersona = NULL;

    mostrapersona(primapersona);

    primapersona = creapersona(15);
    mostrapersona(primapersona);

    free(primapersona);
    primapersona = NULL;

    return 0;
}


*/
