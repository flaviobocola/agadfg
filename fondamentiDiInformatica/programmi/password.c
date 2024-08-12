/* 
	almeno una cifra, almeno un carattere che non sia una cifra, almeno 8 caratteri, non due caratteri ug.
*/

#include <stdio.h>
#include <string.h>
#define MAX 500
#define MIN 8
#define INIZIO 'a'
#define FINE 'b'
#define NINIZIO '0'
#define NFINE '9'
void controllopas(char password[], int * esi)
{
	int i, es, contc, contn;
	
	es = 1;
	contc = 1;
	contn = 1;
	
	for(i = 0; password[i] != '\0' && es; i++){
		if(password[i] >= INIZIO && password[i] <= FINE)
			contn = 0;
		if(password[i] >= NINIZIO && password[i] <= NFINE)
			contc = 0;
		if(password[i] == password[i + 1])
			es = 0;
		
	}
	if(contc || contn || i < MIN)
		es = 0;
	
	*esi = es;
}

int main(int argc, char * argv[])
{
	char pas[MAX + 1];
	int esito;
	
	gets(pas);
	
	controllopas(pas, &esito);
	
	printf("%d", esito);
	
	return 0;
}