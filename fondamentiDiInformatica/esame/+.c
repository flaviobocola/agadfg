#include <stdio.h>
#define NCOL 5
#define NRIG 5

int main(int argc, char * argv[])
{
	
	
	
	
	
	return 0;
}

void piccomassimo(int m[][NCOL], int r, int c, int *rp, int *cp)
{
	int i, j, stop;
	int imax, jmax;
	int rmax, cmax;
	
	rmax = r - 1;
	cmax = c - 1;
	
	for(i = 1; i < rmax && !stop; i++)
		for(j = 1; j < cmax && !stop; j++)
			if(e_esito(m, i, j)){
				imax = i;
				jmax = j;
				stop = 1;
			}
	
	if(stop){
		
		for(; i < rmax; i++)
			for(j = 1; j < cmax; j++)
				if(m[i][j] > m[imax][jmax])
					if(e_eisto(m, i, j)){
						imax = i;
						jmax = j;
					}	
	} else {
		imax = NOP;
		jmax = NOP;
	}
	
	*rp = imax;
	*cp = jmax;
	
}

/*
	ATTENZIONE: non serve passare il numero di colonne e righe, perché vanno controllati solo gli otto valori
	accanto
*/

int e_esito(int m[][NCOL], int imax, int jmax)
{
	int i, j;
	int stoppino;
	
	stoppino = 1;
	
	for(i = imax - 1; i <= imax && stoppino; i++)
		for(j = jmax - 1; j <= jmax && stoppino; j++)
			if(m[i][j] >= m[imax][jmax] && i != imax && j != jmax)
				stop = 0;
	
	
	return stoppino;
}






















/* 
	dobbiamo passare più informazioni e quindi dobbiamo usare l'indirizzo
	inoltre anche se è scritto il numero di colonne dell'array la consegna non dice nulla sul numero
	effettivo di colonne usate
*/

void piccomassimo(int m[][NCOL], int nr, int nc, int *rp, int *cp)
{
	int imax, jmax, picco;
	int i, j;
	int rmax, cmax;
	
	rmax = nr - 1;
	cmac = nc - 1;	
	picco = 0;
	
	/* controlliamo ora il primo picco */
	
	for(i = 1; i < rmax && !picco; i++)
		for(j = 1; j < cmax && !picco; j++)
			if(e_picco(m, i, j)){
				imax = i;
				jmax = j;
				picco = 1;
			}
			
	/* controlliamo gli altri picchi */
	if(picco){
		for(; i < rmax; i++)
			for(j = 1; j < cmax; j++)
				if(m[i][j] > m[imax][jmax])
					if(e_picco(m, i, j)){
						imax = i;
						jmax = j;
					}
	} else {
		jmax = NOP;
		jmax = NOP;
	}
	
/*
	in pratica si riprende dalla riga di partenza, sempre dalla colonna 1, e si controllano tutit i numeri tc
	il numero sia più grande del picco.
	se così avviene allora si controlla tramite la funzione se quello è un picco.
	in caso affermativo si sostituiscono le coordinate del picco con quelle del nuovo.
	
	nel caso in cui non si sia trovato un picco si pongo coordinate nulle
*/
	
	*rp = imax;
	*cp = jmax;
	
}



/*
	in pratica viene passata la posizione del numero che si vuole esaminare,
	si crea un ciclo for che controlli tutti i suoi numeri attorno, tranne il numero stesso.
	nel caso in cui il più grande fosse il numero analizzato il booleano torna falso (o vero a seconda della 	condizione iniziale) viene riportato il booleano, quindi vengono impostate le coordinate del numero analizzato 	come massime perché appartenenti ad un picco e si esce dal ciclo for con un valore di stop
*/

int e_picco(int m[][NCOL], int r, int c)
{
	int isp;
	int i, j;
	
	isp = 1;
	for(i = r - 1; i <= r + 1 && isp; i++)
		for(j = c - 1; j <= c + 1 && isp; j++)
			if(m[i][j] >=  m[r][c] && i != r && j != c)
				isp = 0;
	
	return isp;
}