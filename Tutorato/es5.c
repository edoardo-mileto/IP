#include <stdio.h>
#include <math.h>

double pit(double catmag, double catmin){
  return sqrt(catmin*catmin + catmag*catmag);
}

int main(){
  double catmin, catmag;

  printf("inserire cateto maggiore: ");
  scanf("%lf", &catmag);


  printf("inserire cateto minore: ");
  scanf("%lf", &catmin);

  printf("Ipotenusa = %lf\n", pit(catmin,catmag));

  return 0;
}
