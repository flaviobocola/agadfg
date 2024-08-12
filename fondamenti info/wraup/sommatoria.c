/*

DA RIVEDERE:

    - liste ed esercizi abbinati

    - atoi() (PER TRASFORMARE UNA STRINGA IN UN INTERO)

    - errori di distrazione: chiusura file, controllo liste

    - esercizi con binari

    - fgets e fscanf


    lista: manca lo svuotare la lista

        typedef struct lists{
            int numero;
            strct lists *next;
        } listt

        listt *head, *prossimo;

        *head = NULL;
        *prossimo = NULL;

        if(head = NULL){
            head = malloc(sizeof(listt));
            head->numero = n;
            head->next = NULL;
        }

    atoi:

        intero in stringa

    parametri da riga di comando:

        int main(int argc, char * argv[]) OCCHIO CHE LA PRIMA POSIZIONE È IL NOME DEL FILE

    passaggio per indirizzo:

        chiamolafunzione(&variabile);
        funzionechiamata(int *variabilericevuta);


    per una lista:

    creo un typedef:

        typedef struct list lists{

            int n;
            struct list *next; !!! il puntatore punta il tipo del dato. TYPEDEF DEFINISCE UN DATO DI TIPO STRUCT LIST
        } listt

    per creare una lista

        nel main:

            listt *testa, *body;

            *testa = NULL;
            *body = NULL;

        una vola fatto ciò posso popolarla:

            if(testa == NULL){
                popolalista(testa);
            }

        dove popolalista deve:

            - allocare memoria
            - inserire la variabile
            - puntare al next

        dunque una classica funzione per popolare una lista sarà:

            testa = malloc(sizeof(nomelista));
            lista->n = x;
            lista->next = NULL;

        QUANDO FACCIO UNA FUNZIONE CHE POPOLA UNA LISTA:

            - questa non ritorna nulla MA per correttezza logica, poiché va a modificare un puntatore il tipo della funzione sarà un puntatore:

                listt * popolalista(int numero);


    quando devo passare dei valori ad un sottoprogramma lo posso fare in due modi:

        - passando il valore stesso, in questo caso non viene condiviso l'indirizzo di memoria in cui viene allocato il valore, dunque non è possibile registrarlo senza
          una return

        - passando l'indirizzo, attraverso una scrittura del tipo:

        chiamolafunzione(&passolindirizzo)       lafunzionechiamata(int *indirizzochiamato)

        IMPORTANTE nel caso in vui un valore venga passato per indirizzo: METTERE SEMPRE L'ASTERISCO


    l'atoi viene usata per trasformare un valore in una stringa.
    serve perché se da riga di comando io ottengo un numero, questo viene salvato con il suo valore binario e quindi per trattarlo come, appunto, un numero, devo prima
    convertirlo


    per quanto riguarda invece i parametri passati attraverso riga di comando, nella scrittura:

    int main(int argc, char * argv[]):

        - argc sta a significare il numero di stringhe passate e argv è invece l'array in cui queste vengono memorizzate.

    ATTENZIONE in questo caso il primo valore dell'array è il nome del file. Dunque se io devo analizzare altri dati ottenuti dall'utente dovrà partire a cercarli
    dalla posizione dell'array: [1]

    OCCHIO ALLE CASISTICHE BASE
*/
