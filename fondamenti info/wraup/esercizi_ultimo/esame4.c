/* sottoprogramma che riceve due liste di interi l1 ed l2 e un intero k positivo o nullo */

/*

analizzo la lista:

    se la lista1 o la lista2 sono vuote -> 0

    for(n = l2->num; l2; l2 = l2->next){
        stop = 1;
        for(m = l1->num; l1 && stop; l1 = l1->next){
            if(n = m){
                stop = 0;
            }
            else if(n != m){
                if(puntatore = 0)
                    salva1 = l1;
                puntatore++;
            }
            if(puntatore > k){
                ferma = 0;
            }
        }
        l1 = l1-next;
        if(ferma = 0){
            l2 = t2;
            l1 = t1;
            puntatore = 0;
        }
    }

    if(stop = 0){
        printf("esito positivo")
    }
    else{
        printf("esito negativo")
    }

    puntatore = 0;
    while(l1 && l2 && puntatore < k){
        if(l2 -> n == l1 -> n){
            l2 = l2->next;
        }
        else if(l2 != t2){
            puntatore++;
        }
        l1 = l1->next;
    }
    if(l2){
        printf("esito negativo")
    }

    sostanzialmente:
        - scorro la prima lista
        - se i valori delle due liste sono uguali allora scorro anche la seconda
        - se i valori delle due lista e ho già fatto un passaggio dalla prima alla seconda allora aumento il puntatore
        - se il puntatore è maggiore di k allora l'esito è negativo

    NON SERVE SALVARE IL VALORE IN DUE VARIABILI, TI BASTA CONFRONTARE QUEL PARAMETRO DELLA LISTA
*/