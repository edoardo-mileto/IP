#include <stdio.h>
#include <math.h>

float erone(float z, float soglia){

  //metto in x la stima corrente
	float x = z / 2.0f;
  float x_old, risultato;

  while (fabs(x - x_old) >= soglia) {
    x_old = x;
    x = 1.0f/2.0f * (x_old + z / x_old);

    printf("stima: %f\n", x);
  }
  return x;
}

int main() {
	float numero, soglia, radice;

  printf("inserisci il numero di cui vuoi trovare la radice: ");
  scanf("%f", &numero);

  printf("inserisci la soglia di approssimazione: ");
  scanf("%f", &soglia);

  radice = erone(numero, soglia);

  printf("La radice di %f è %f\n", numero, radice);

	return 0;
}
