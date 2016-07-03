#include <stdio.h>
#include <math.h>

double liczPromien(double kont, double bok)
{
	return bok/sin(kont*M_PI/180)/2;
}

main()
{	
	double bok, kont;
	printf("Podaj bok: ");
	scanf("%lf", &bok);
	printf("Podaj kont: ");
	scanf("%lf", &kont);
	printf("Wynik: %lf \n", liczPromien(kont, bok));
	
}
