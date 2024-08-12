#include <stdio.h>
#define NR 3
#define NC 4
int main(int argc, char*argv)
{
	int mat[NR][NC], i, j, pointer;
	
	for(i = 0; i < NR; i++)
		for(j = 0; j < NC; j++)
			scanf("%d", &mat[i][j]);
	
	return 0;
}