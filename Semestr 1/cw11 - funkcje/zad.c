#include <stdio.h>
double fun(double x)
{
return x*x;
}

double fun2(double x, double k)
{
double wynik=x,i;
for(i=0;i<k;i++)wynik = fun(wynik);
return wynik;
}

main(){
double x, k;
printf("Podaj liczę złożeń: ");
scanf("%lf", &k);
printf("Podaj liczbę x: ");
scanf("%lf", &x);
printf("Wynik: %lf \n", fun2(x, k));
}
