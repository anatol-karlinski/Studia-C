#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibon(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibon(n-1)+fibon(n-2);
}

double nierek(int n)
{
	double nawias1;
	double nawias2;
	double ulamek = (1/sqrt(5));
	nawias1 = ((1+sqrt(5))/2);
	nawias2 = ((1-sqrt(5))/2);
	double wynik = pow(nawias1, n)*ulamek - pow(nawias2, n)*ulamek;
	return wynik;
	
}

main()
{
	printf("Podaj n:");
	int a, i;
	scanf("%d", &a);
	for(i=1;i<=a;i++)printf(" %lf ", nierek(i));  //printf(" %d ", fibon(i));
	printf("\n");
}
