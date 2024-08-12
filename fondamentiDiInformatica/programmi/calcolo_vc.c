#include <stdio.h>
#include <string.h>
#define MAX 500

void calcolovc(char frase[], int * nv, int * nc)
{
	int i, numv, numc;
	
	numv = 0;
	numc = 0;
	
	for(i = 0; frase[i] != '\0'; i++){
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
			numv++;
		else
			if(frase[i] != ' ')
				numc++;
	}
	
	*nv = numv;
	*nc = numc;
	
}

int main(int argc, char * argv[])
{
	int i, nv, nc;
	char fra[MAX + 1];
	
	gets(fra);
	
	calcolovc(fra, &nv, &nc);
	
	printf("%d %d\n", nv, nc);
	
	return 0;
}