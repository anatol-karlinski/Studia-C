#include<stdio.h>
#include<math.h>

#define PI 3.14159265

double deltoid (double a, double b, double alpha)
{
	return a*b*sin(alpha*PI/180);
}

main(){
	double a,b,alpha;
	printf("Podaj a:");
	scanf("%lf", &a);
	printf("Podaj b:");
	scanf("%lf", &b);
	printf("Podaj alpha:");
	scanf("%lf", &alpha);	
	printf("Wynik: %lf \n", deltoid(a,b,alpha));
}

