#include <stdio.h>

int  bit_liczby (int numer, int liczba)
{
	return (liczba >> numer) & 1;
}
main()
{
	int numer, liczba;
	printf("Podaj liczbe:");
	scanf("%d", &liczba);
	printf("Podaj numer bitu:");
	scanf("%d", &numer);	
	
	printf("%d \n", bit_liczby(numer, liczba));

}

