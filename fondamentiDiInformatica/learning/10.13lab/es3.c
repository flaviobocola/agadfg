/*
    programma che acquisisce il prezzo di massimo 5 prodotti che termina quando l'utente inserisce un valore negativo. Si prende quindi la quantità di denaro disponibile
    si calcola il numero massimo di prodotti acquistabili.
*/

#include <stdio.h>
#define N 5

int main(int argc, char * argv[])
{
    int prezzi[N], saldo, i, j, num, stop;

    stop = 1;


    for(i = 0; i < N && stop; i++){
        scanf("%d", &prezzi[i]);
        if(prezzi[i] < 0)
            stop = 0;
    }

    scanf("%d", &saldo);
    
    for(i = 0; i < N - 1; i++)
        for(j = 1 + i; j < N; j++)
            if(prezzi[i] > prezzi[j]){
                num = prezzi[i];
                prezzi[i] = prezzi[j];
                prezzi[j] = num;
            }
        
    stop = 1;
    num = 0;

    for(i = 0; i < N && stop; i++){
        saldo -= prezzi[i];
        if(saldo >= 0){
            num++;
            if(saldo == 0)
                stop = 0;
        }
        else
            stop = 0;
    }

    printf("%d", num);

    return 0;
}