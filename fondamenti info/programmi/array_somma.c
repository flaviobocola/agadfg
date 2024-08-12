#include <stdio.h>
#define MAX 10

void nuovoarray(int numero[], int len)
{
	int i;
	
	for(i = 1; i < len; i++)
		numero[i] += numero[i - 1];
	
	for(i = 0; i < len; i++){
		printf("%d ", numero[i]);
	}
	printf("\n");
}

int main(int argc, char * argv[])
{
	int num[MAX], i, controllo, lunghezza;
	
	controllo = 1;
	
	for(i = 0; i < MAX && controllo; i++){
		scanf("%d", &num[i]);
		if(num[i] < 0)
			controllo = 0;
	}	
	
	lunghezza = i - 1;
	
	for(i = 0; i < lunghezza; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
	
	nuovoarray(num, lunghezza);

	return 0;
}
