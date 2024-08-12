#include <stdio.h>
#include <string.h>

#define LUNG 50
#define INIZIO 'a'
#define FINE 'b'

int lunghezzas(char[], int*, int*);

int main(int argc, char * argv[])
{
    char fra[LUNG + 1];
    int n, vocali, consonanti;

    gets(fra);
    n = lunghezzas(fra, &vocali, &consonanti);
    printf("il numero delle vocali è: %d, mentre quello delle consonanti: %d \n", vocali, consonanti);
    printf("%d", n);

    return 0;

}

int lunghezzas(char frase[], int *nvocali, int *nconsonanti){

    int numero, tot, nvoc, ncon;

    tot = 0;
    nvoc = 0;
    ncon = 0;

    for(numero = 0; numero < LUNG && frase[numero] != '\0'; numero++){
        if(frase[numero] == ' ')
            tot++;
        if(frase[numero] >= INIZIO && frase[numero <= FINE]){
            if(frase[numero] == 'a' || frase[numero] == 'e' || frase[numero] == 'i' || frase[numero] == 'o' || frase[numero] == 'u')
                nvoc++;
            else ncon++;
        }
    }

    *nvocali = nvoc;
    *nconsonanti = ncon;
    numero -= tot;

    return numero;
}

