/*
	dieci valori interi, restituito il numero di coppie di numeri uguali presenti all'interno dell'array
*/

#include <stdio.h>
#define MAX 10

int calcolocoppie(int numero[], int len)
{
	int i, j, coppie;
	
	coppie = 0;
	
	for(i = 0; i < len - 1; i++)
		for(j = i + 1; j < len; j++)
			if(numero[i] == numero[j])
				coppie++;
	
	return coppie;
}

int main(int argc, char * argv[])
{
	int num[MAX], i, copp;
	
	for(i = 0; i < MAX; i++)
		scanf("%d", &num[i]);
	
	copp = calcolocoppie(num, MAX);
	
	printf("%d\n", copp);
	
	return 0;
}	

