#include <stdio.h>
#include <math.h>
int  bit_liczby (int numer, int liczba)
{
	return 1 & (liczba >> numer);
}

int bity_na_liczbe (int tab[])
{
	int i, wynik;
	for(i=0;i<32;i++)
	{
		wynik = wynik * 2 + tab[i];
	}
	return wynik;
}

main()
{
	double liczba;
	int i, tab[32];
	printf("Podaj liczbe:");
	scanf("%lf", &liczba);
	
	for(i=0;i<32;i++)
	{
		tab[i] = bit_liczby(31-i, liczba);
		//printf("%d", bit_liczby(31-i, liczba));
		//if ((i+1)%4 == 0) printf(" ");
	}
	printf("\n %d \n", bity_na_liczbe(tab));

	printf("\n");
}


