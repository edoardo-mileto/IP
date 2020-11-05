#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if (n < 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int fibi(int n){
	int* a = (int*) malloc(sizeof(int) * (n + 1));
	int i, r;
	a[0] = 1;
	a[1] = 1;
	for (i = 2; i <= n; ++i)
		a[i] = a[i - 1] + a[i -2];
	r = a[n];
	free(a);
	return r;
}

int fibi_fast(int n){
	int a[3];
	int i;
	a[0] = 1;
	a[1] = 1;
	for (i = 2; i <= n; ++i)
		a[i % 3] = a[(i - 1) % 3] + a[(i -2) % 3];
	return a[n % 3];
}

int fibi_superfast(int n){
  int i, a0, a1, a2;
  a0 = a1 = a2 = 1;
  for (i = 2; i <= n; ++i){
    a2 = a1 + a0;
    a0 = a1;
    a1 = a2;
  }
  return a2;
}

int main(){
	int i;
	for (i = 0; i < 20; ++i)
		printf("fib(%d) = %d\tfib iterativo(%d) = %d\t fibi_fast(%d) = %d\t fibi_superfast(%d) = %d\n", i, fib(i), i, fibi(i), i, fibi_fast(i), i, fibi_superfast(i));
	return 0;
}
