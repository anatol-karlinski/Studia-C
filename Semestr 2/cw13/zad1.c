#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NEWLINE printf("\n");
void main()
{
	int n,k,i,j;
	printf("Podaj n:");
	scanf("%i", &n);
	printf("Podaj k:");
	scanf("%i", &k);	
	int a[n*k], b[n*k];
	for(i=0;i<n*k;i++)a[i] = rand() % 10;
	
	NEWLINE
	printf("Tablica o wymiarach %i x %i\n", k, n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++) printf("%i ", a[j + i*k]);
		NEWLINE
	}
	NEWLINE
	printf("Tablica o wymiarach %i x %i po transpozycji \n", k, n);
	for(i=0;i<k;i++)
		for(j=0;j<n;j++) b[i*n + j] = a[j*k+i];
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++) printf("%i ", b[j + i*k]);
		NEWLINE
	}
	NEWLINE
}
