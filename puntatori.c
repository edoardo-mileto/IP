/*
	l'operatore *, se usato su un puntatore, restituisce il valore contenuto all'indirizzo del puntatore
	l'operatore &, usato su una variabile, restituisce l'indirizzo di memoria della variabile

	int * -> indica che non si tratta di int ma di int pointer
	*x -> se la variabile x è un int pointer, *x restituisce il valore contenuto all'indirizzo salvato in x.
	&x -> se la variabile x è un int, &x restituisce l'jndirizzo di valore dove è salvato il contenuto di x
*/
#include <stdio.h>

void inc(int* x){
	*x = *x + 1;
}


int main() {
	int pippo = 82; /*dichiarazione di un int*/

	int *p_x; /*dichiarazione di un puntatore*/
	int mem;
	p_x = &pippo;

	/*stampo la variabile*/
	printf("pippo: %d\n", pippo);

	/*
	   stampo l'indirizzo di memoria dove è salvata la variabile pippo.
	   L'indirizzo di memoria è un numero. %d per esprimerlo come decimale,
	   %x per esprimerlo come esadecimale
	 */
	printf("locazione di memoria di pippo in decimale:\t %d\n", &pippo);
	printf("locazione di memoria di pippo in hex:\t\t %x\n", &pippo);
	printf("variabile puntatore verso pippo: \t\t %p\n", (void*) p_x);

	/* utilizzo l'operatore di dereferenziazione * per accedere al contenuto presente all'indirizzo salvato */
	printf("valore contenuto all'indirizzo di memoria \t %d\n", *p_x);

	/* uso la variabile puntatore per modificare il contenuto della memoria */
	*p_x = 125;
	/* l'int pippo è diventato 125 */
	printf("%d\n", pippo);
	inc(&pippo);
	printf("%d\n", pippo);

	return 0;
}
