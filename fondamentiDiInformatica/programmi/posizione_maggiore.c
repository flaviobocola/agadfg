#include <stdio.h>
#define MAX 50

void controllocifre(int[], int, int[]);

int main(int argc, char * argv[])
{
	int num[MAX], i, j, valore, posg[MAX];
	
	i = 0;
	scanf("%d", &valore);
	while(valore > 0){
		num[i] = valore;
		i++;
		scanf("%d", &valore);
	}
	
	controllocifre(num, i, posg);
	
	for(j = 0; j < i; j++)
		printf("%d", posg[j]);
	printf("\n");
	
	return 0;
}

void controllocifre(int n[], int validi, int pos[])
{
	int i, j, cont;
	
	for(i = 0; i < validi; i++){
		cont = 0;
		for(j = 0; j < validi; j++)
			if(n[i] > n[j])
				cont++;
		pos[i] = cont;
	}
	
}