#include <stdio.h>
#include <string.h>

struct osoba 
{
	char imie[30];
	char nazwisko[40];
	int wiek;
}


main()
{
	struct osoba os1;
	struct osoba os2;
	strcpy(os1.imie, "Ewa");
	strcpy(os2.imie, "Adam");
	strcpy(os1.nazwisko, "Rajska");
	strcpy(os2.nazwisko, "Rajski");
	os1.wiek = 20;
	os2.wiek = 22;	
	
	printf("%s %s - %d, %s %s - %d \n", os1.imie, os1.nazwisko, os1.wiek, os2.imie, os2.nazwisko, os2.wiek);
}
