/*
    funzione = termine che in alcuni linguaggi denota soltanto alcuni sottoprogrammi.
    servono per creare una parte di testo da richiamare più volte quando se ne ha bisogno.
*/

#include <stdio.h>

int lafigadituamadrepuzza(int);

int main(int argc, char*argv[])
{
    int n, nuovo;

    scanf("%d", &n);
    nuovo = lafigadituamadrepuzza(n);
    printf("%d", nuovo);

    return 0;
}

int lafigadituamadrepuzza(int numero){

    numero = 5;

    return numero;
}