#include <stdio.h>
#define MAX 5

void mediamobile(int[], int, int[]);

int main(int argc, char * argv[])
{
	int n[MAX], media[MAX], num, i;
	
	for(i = 0; i < MAX; i++)
		scanf("%d", &n[i]);
	
	scanf("%d", &num);
	
	mediamobile(n, num, media);
	printf("\n");
	
	for(i = 0; i < num; i++)
		printf("%d ", media[i]);
	
	return 0;
}

void mediamobile(int numeri[], int k, int medmob[])
{
	int i, j, somma;
	
	somma = 0;
	
	for(i = 0; i < k; i++){
		
		j = i;
		while(j >= 0){
			somma += numeri[j];
			j--;
		}
		
		printf("%d ", somma);
		
		medmob[i] = somma / (i + 1);
	}
}