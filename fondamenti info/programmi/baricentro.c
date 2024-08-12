#include <stdio.h>
#define MAX 10

int baricentro(int v[], int dim);
	
int main(int argc, char * argv [])
{
	int vet[MAX], dimen, bari;
	
	scanf("%d", &dimen);
	for(i = 0; i < dimen; i++)
		scanf("%d", &vet[i]);
	
	bari = baricentro(vet[], dimen)
	
	return 0;
}

int baricentro(int v[], int dim)
{
	int sx, dx, i, j, bars;
	
	i = 0;
	sx = v[i];
	dx = 0;
	bar = 0;
	
	for(j = i + 1; k < dim && !bar; j++){
		dx += v[k];
		
		if(dx == sx)
			bar = i;
	}
	
	i++ 
		
	while(!bar && i < dim){
		sx += v[i];
		dx -= v[i];
		if(sx == dx)
			bar = i;
		i++;
	}
	
	return bar;
}