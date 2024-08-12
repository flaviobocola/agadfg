#include <stdio.h>
#define GRANDEZZA 2

typedef struct datas{
	int giorno, mese, anno;
} data_t;

int differenzadata(int, int, int, int, int, int);

int main(int argc, char * argv[])
{
	data_t data[GRANDEZZA];
	int i, giornidif;
	
	for(i = 0; i < GRANDEZZA; i++)
		scanf("%d %d %d", &data[i].giorno, &data[i].mese, &data[i].anno);	
		
	giornidif = differenzadata(data[0].giorno, data[0].mese, data[0].anno, data[1].giorno, data[1].mese, 				data[1].anno);
	
	printf("%d", giornidif);
	
	return 0;
}

int differenzadata(int pgiorno, int pmese, int panno, int sgiorno, int smese, int sanno)
{
	int differenza, danni, dmesi, dgiorni, i, scambio;
	
	danni = 0;
	dmesi = 0;
	dgiorni = 0;
	
	/* se gli anni sono uguali, se i mesi sono uguali, se i giorni sono uguali */
	
	if(panno == sanno){
		if(pmese == smese){
			dgiorni = sgiorno - pgiorno;
			if(dgiorni < 0)
				dgiorni = -dgiorni;
		}
		else{
			
			if(pmese == 1 || pmese == 3 || pmese == 5 || pmese == 7 || pmese == 8 || pmese == 10 || pmese 			   == 12)
				dgiorni += 31 - pgiorno;
			else if(pmese == 2)
				dgiorni += 28 - pgiorno;
			else
				dgiorni *= 30 - pgiorno;
			
			if(dmese == 1 || dmese == 3 || dmese == 5 || dmese == 7 || dmese == 8 || dmese == 10 || dmese 			   == 12)
				dgiorni += 31 - dgiorno;
			else if(pmese == 2)
				dgiorni += 28 - dgiorno;
			else
				dgiorni *= 30 - dsgiorno;
			
			if(pmese > smese){
				pmese = scambio;
				pmese = smese;
				smese = scambio;
			}
			for(i = smese + 1; i < pmese; i++)
				if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
					dgiorni += 31;
				else if(i == 2)
					dgiorni += 28;
				else
					dgiorni += 30;
			}
	}
	
	return  differenza;
}