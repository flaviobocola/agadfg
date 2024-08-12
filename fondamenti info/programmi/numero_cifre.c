#include <stdio.h>
#define BASE 10

int ncifre(int);

int main(int argc, char * argv[])
{
	int num, nc;
	
	scanf("%d", &num);
	nc = ncifre(num);
	
	printf("%d", nc);
	
	return 0;
}

int ncifre(int n)
{
	int cifre, numeri[], i, nuovo;
	
	cifre = 0;
	
	for(i = 0; i < BASE; i++)
		numeri[i] = 0;
	
	do{
		nuovo = n % BASE;
		numero[nuovo]++;
		if(numero[nuovo] == 2)
			cifre++;
		n = n / BASE;
	} while(n > 0)
	
	return cifre;
}