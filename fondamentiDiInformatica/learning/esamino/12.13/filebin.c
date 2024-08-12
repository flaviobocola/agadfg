#include <stdio.h>

int main(int argc, char *argv[])
{
    char nomeuno, nomedue;
    FILE *primo, *secondo;
    int numero, i, n;

    nomeuno = argv[1];
    nomedue = argv[2];

    primo = fopen("nomeuno", "rb");
    if (primo)
        printf("file aperto con succeso \n");
    else
        printf("errore nell'apertura del file \n");

    secondo = fopen("nomedue", "wb");
    if (secondo)
        printf("file aperto con succeso \n");
    else
        printf("errore nell'apertura del file \n");

    fscanf(primo, "%d", numero);
    fprintf(secondo, "%d", numero);
    for (i = numero - 1; i > 0; i--)
    {
        fscanf(primo, "%d", numero);
        fprintf(secondo, "%d", numero);
    }

    fclose(primo);
    fclose(secondo);

    return 0;
}