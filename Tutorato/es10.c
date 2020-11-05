#include <stdio.h>
#include <stdlib.h>

/* ricerca di un elemento in un array di interi*/

/* funzione iterativa */
int search(int* a, int len, int v){
	int i;
	for (i = 0; i < len; ++i)
		if (a[i] == v)
			return i;
	return -1;
}

/* funzione ricorsiva */
int rsearch1(int* a, int len, int v, int pos){
	if (len == 0) return -1;
	if (a[0] == v) return pos;
	return rsearch1(a + 1, len - 1, v, pos + 1);
}

int rsearch2(int* a, int len, int v){
	if (len == 0) return -1;
	if (a[-len] == v) return len +1;
	return rsearch2(a, len - 1, v);
}

int rsearch3(int* a, int* pa, int len, int v){
	if (len == 0) return -1;
	if (pa[0] == v) return pa - a;
	return rsearch3(a, pa + 1, len -1, v);
}

int rsearch__(int* a, int len, int v, int pos){
	if (len == 0) return -1;
	if (a[0] == v) return pos;
	return rsearch__(a + 1, len - 1, v, pos + 1);
}

/* questa funzione consente all'utilizzatore di non dover aggiungere il parametro 0 */
int rsearch(int* a, int len, int v){
  return rsearch__(a, len, v, 0);
}

int main(){
	int a[5] = {12, 26, 125, 14, 85};
  /* la funzione ideale ha come parametri solo le 3 informazioni essenziali dall'utente */
	printf("iterativo: index = %d\n", search(a, 5, 14));
	printf("ricorsivo1: index = %d\n", rsearch1(a, 5, 14, 0));
	printf("ricorsivo2: index = %d\n", rsearch2(a + 5, 5, 14));
	printf("ricorsivo3: index = %d\n", rsearch3(a, a, 5, 14));
  printf("ricorsivo: index = %d\n", rsearch(a, 5, 14));
	return 0;
}
