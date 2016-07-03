#include <stdio.h>
#include <math.h>

#define dol_x -0.9
#define gora_x 8
#define krok_x 0.1


// miejsce na wpisanie definicji funkcji
double funkcjaA(double x){
	return pow(x, 3)/27 - 2*pow(x, 2)/9 + x/3 + 2;
}

double funkcjaB(double x){
	return log(x+1);
}

int main () {
  double x;
  printf("\nTABLICOWANIE FUNKCJI:\n");
  printf("\n Argument |   Wartosc   ");
  printf("\n----------+-------------");
  for (x=dol_x; x<=gora_x; x=x+krok_x)
    printf("\n %8.4lf | %10.4lf ", x, funkcjaB(x));
  printf("\n\n");

  return 0;
}

