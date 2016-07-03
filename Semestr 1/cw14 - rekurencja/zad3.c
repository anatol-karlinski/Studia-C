#include <stdio.h>

int  bit_liczby (int numer, int liczba)
{
	return 1 & (liczba >> numer);
}
main()
{
	double liczba;
	int i;
	printf("Podaj liczbe:");
	scanf("%lf", &liczba);
	
	for(i=0;i<32;i++)
	{
		printf("%d", bit_liczby(31-i, liczba));
		if ((i+1)%4 == 0) printf(" ");
	}
	printf("\n");
}


