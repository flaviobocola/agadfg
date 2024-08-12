/*
    programma che acquisisce 50 date di nascita, un'altra data di riferimento e il programma calcola e visualizza il numero di persone che festeggiano il compleanno
    lo stesso giorno e il numero di persone nate lo stesso giorno
*/

#include <stdio.h>
#define NPERS 5

typedef struct datas{
    int giorno, mese, anno;
} datat;

int main(int argc, char * argv[])
{
    int i, pcompl, pgiorn;
    datat persona[NPERS], data;

    pcompl = 0;
    pgiorn = 0;

    for(i = 0; i < NPERS; i++)
        scanf("%d%d%d\n", &persona[i].giorno, &persona[i].mese, &persona[i].anno);

    scanf("%d%d%d", &data.giorno, &data.mese, &data.anno);

    for(i = 0; i < NPERS; i++)
        if(persona[i].giorno == data.giorno && persona[i].mese == data.mese){
            pcompl++;
            if(persona[i].anno == data.anno)
                pgiorn++;
        }

    printf("%d persone fanno il compleanno nella data immessa e %d sono invece nate quel giorno", pcompl, pgiorn);

    return 0;
}