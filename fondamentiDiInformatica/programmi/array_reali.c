#include <stdio.h>
#define MAX 10

void acquisiscivalore(int len)
{
	int n, num[len], i, j;
	
	i = 0;
	
	do{
		scanf("%d", &n);
		if(i < MAX && n != 0){
			num[i] = n;
			i++;
		}
	} while(n != 0);
	
	for(j = 0; j < i; j++)
		printf("%d\n", num[j]);
			
}

int main(int argc, char * argv[])
{
	acquisiscivalore(MAX);
	
	return 0;
}

/* CONTROLLALO */