#include <stdio.h>
#include <stdlib.h>

/*
	creiamo una struttura node
	dobbiamo quindi definire i dati e il puntatore
*/

typedef struct node{
	int data;
	struct node * next;
} nodo;

int main(int argc, char * argv[])
{
	
	//	inizializziamo dei nodi
	
	struct nodo * testa;
	struct nodo * nodo1 = NULL;
	struct nodo * nodo2 = NULL;
	struct nodo * nodo3 = NULL;
	
	// allochiamo la memoria dinamica
	nodo1 = malloc(sizeof(struct node));
	nodo2 = malloc(sizeof(struct node));
	nodo3 = malloc(sizeof(struct node));
	
	// assegnamo i valori
	nodo1 ->data = 17;
	nodo2 ->data = 92;
	nodo3 ->data = 53;
	
	//colleghiamo i nodi tra di loro
	nodo1 ->next = nodo2;
	nodo2 ->next = nodo3;
	nodo3 ->next = NULL;
	
	//colleghiamo la testa
	testa = nodo1;
	
	
	
	return 0;
}