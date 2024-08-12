#include <stdio.h>
#define MAX 35
#define OK "trovato"
#define KO "non trovato"

int posizione(char s[], char car)
{
	int i, pos;
	
	pos = -1;
	
	for(i = 0; i < MAX && i != '\0' && pos == -1; i++)
		if(s[i] == car)
			pos = i;
	
	return pos;
}

int main(int argc, char * argv[])
{
	char voc[MAX + 1], sel;
	int ris;
	
	scanf("%s %c", voc, &sel);
	
	ris = posizione(voc, sel);
	
	if(ris == -1)
		printf("%s\n", KO);
	else
		printf("%s\n", OK);
	
	return 0;
}