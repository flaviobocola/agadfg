#include <stdio.h>
#include <string.h>

#define LEN 100

void menu();
void opzione(int, int *, int *, FILE *, char[]);
void aprifile(FILE *, char[]);
void creafile(FILE *);
void gestiscifile(FILE *);
void chiudifile(FILE *);

int main(int argc, char *argv[])
{
    int scelta, stop, controllo;
    FILE *fp;
    char nomefile[LEN + 1];

    stop = 1;
    controllo = 0;

    while (stop)
    {
        menu();
        scanf("%d", &scelta);
        opzione(scelta, &stop, &controllo, fp, nomefile);
    }

    return 0;
}

void menu()
{
    printf("---------------------------------------------\n");
    printf(" 1 - inserire il nome del file da aprire\n");
    printf(" 2 - inserire il nome del file da gestire\n");
    printf(" 3 - inserire il nome del file da creare\n");
    printf(" 4 - inserire il nome del file da chiudere\n");
    printf(" 0 - uscire dal programma\n");
    printf("---------------------------------------------\n");
}

void opzione(int opzione, int *stop, int *controllo, FILE *fp, char nomefile[])
{
    int alt;
    switch (opzione)
    {
    case 1:
        aprifile(fp, nomefile);
        alt = 1;
        *controllo = alt;
        break;
    case 2:
        if (controllo)
        {
            printf("ATTENZIONE, UN FILE È GIÀ APERTO, CHIUDERLO PRIMA DI PROCEDERE \n");
            break;
        }
        gestiscifile(fp);
        break;
    case 3:
        if (controllo)
        {
            printf("ATTENZIONE, UN FILE È GIÀ APERTO, CHIUDERLO PRIMA DI PROCEDERE \n");
            break;
        }
        creafile(fp);
        break;
    case 4:
        if (controllo)
        {
            chiudifile(fp);
            alt = 0;
            *controllo = alt;
            if (*controllo == 0)
                printf("FILE CHIUSO CON SUCCESSO \n");

            break;
        }
        printf("ATTENZIONE, NESSUN FILE APERTO \n");
        break;
    default:
        if (opzione < 0 || opzione > 4)
        {
            printf("INSERIRE UN'OPZIONE VALIDA \n");
            break;
        }
        if (*controllo)
        {
            printf("ATTENZIONE, UN FILE È GIÀ APERTO, CHIUDERLO PRIMA DI PROCEDERE \n");
            break;
        }
        alt = 0;
        *stop = alt;
        break;
    }
}

void aprifile(FILE *fp, char nomefile[])
{
    printf("inserire il nome del file da aprire \n");
    gets(frase);

    fp = fopen(nomefile, "r+");
    if (fp)
        printf("file aperto correttamente \n");
    else
        printf("errore nell'apertura del file \n");
    printf("\n");
}
void creafile(FILE *fp) {}
void gestiscifile(FILE *fp) {}
void chiudifile(FILE *fp) {}