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
	struct osoba tab[5] = {0};
	
	int i = 0, wiek = 0;
	char imie[30], nazwisko[40];
	
	while (i<5 && wiek >=0)
	{
		struct osoba os;
		printf("Imię osoby nr %d: ", i+1);
		scanf("%s", imie);
		printf("Nawisko osoby nr %d: ", i+1);
		scanf("%s", nazwisko);
		printf("Wiek osoby nr %d: ", i+1);
		scanf("%d", &wiek);
		os.wiek = wiek;
		strcpy(os.imie, imie);
		strcpy(os.nazwisko, nazwisko);		
		tab[i] = os;
		printf("\n");
		i++;
	}
	printf("\n LISTA OSOB \n");
	for(i=i-1;i>=0;i--)printf("%s %s - %d\n", tab[i].imie, tab[i].nazwisko, tab[i].wiek);
}
