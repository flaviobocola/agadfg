#include <stdio.h>
#include <string.h>
#define MAX 1000
#define INIZIO 'a'
#define FINE 'z'
#define ALFA 26

int controllo(char[], int, int);

int main(int argc, char * argv[])
{
	char str[MAX + 1];
	int ris, punt;
	gets(str);
	
	punt = 0;
	ris = 0;
	
	controllo(str, ris, punt);
	
	if(ris == 26)
		printf("1");
	else
		printf("0");
	
	return 0;
}

int controllo(char frase[],int cont, int pos)
{	
	char contro[ALFA], car;
	int stop, j, k;
	

	if(pos < MAX && frase[pos] != '\0'){
		if(frase[pos] >= INIZIO && frase[pos] <= FINE){
			
			car = frase[pos];
		
			stop = 1;
			for(j = 0; j < ALFA && stop; j++){
				
				k = j;
				while(k > 0){
					if(car == contro[k])
						return controllo(frase, cont, pos);
					k--;
				}
			}
			
			contro[j] = car;
			cont++;
			pos++;
			return controllo(frase, cont, pos);
			
		}
	}
	
	return cont;
	
}
