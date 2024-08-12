/*
    programma che chiede 10 numeri interi e dice 1 se non ci sono duplicati, 0 se ci sono
*/

#include <stdio.h>
#define N 10

int main(int argc, char * argv[])
{
    int numeri[N], i, j, esito;
    esito = 1;

    for(i = 0; i < N && esito; i++){
        scanf("%d", &numeri[i]);
        for(j = i - 1; j >= 0 && esito; j--)
            if(numeri[i] == numeri[j])
                esito = 0;
    }
    
    printf("%d", esito);

    return 0;
}