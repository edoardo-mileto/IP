#include <stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
  int a,b;
  printf("inserisci i due numeri interi da invertire, separati da uno spazio\n");
  scanf("%d %d", &a, &b);
	printf("\na: %d\tb: %d\n", a, b);
	swap(&a,&b);
	printf("a: %d\tb: %d\n", a, b);
	return 0;
}
