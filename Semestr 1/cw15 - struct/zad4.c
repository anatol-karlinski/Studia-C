#include <stdio.h>
#include <string.h>


#define MAX_DL_IM 11
#define MAX_DL_NA 17
#define DUZO 99

typedef  struct
{
  char imie[MAX_DL_IM];
  char nazwisko[MAX_DL_NA];
  int pensja;
}  osoba;

  osoba tabl[DUZO];


main( int argc, const char* argv[] )
{

	FILE *fp = fp=fopen("dane.txt", "r");
	char oneword[100], c;
	int flaga=1, i=0;
	struct osoba tab[5] = {0};
	struct osoba os = {0};
	do{
		switch(flaga)
		{
		  case 1:
			tab[i] = os;
			c = fscanf(fp,"%s",oneword);
			strcpy(tab[i].imie, oneword);
			flaga++;
		  break;

		  case 2:
			c = fscanf(fp,"%s",oneword);
			strcpy(tab[i].nazwisko, oneword);
			flaga++;
		  break;

		  case 3:
			c = fscanf(fp,"%s",oneword);
			strcpy(tab[i].wiek, oneword);
			flaga = 1;
			i++;
		  break;
		}
	} while (c != EOF);

	int x,y;
	for(x=0; x<5; x++)
	{
		for(y=0; y<5-1; y++)
		{
			if(strcmp(tab[y].nazwisko, tab[y+1].nazwisko) > 0)
			{
				struct osoba temp = tab[y+1];
				tab[y+1] = tab[y];
				tab[y] = temp;
			}
		}
	}




	FILE *fp2;
	fp2=fopen("sort_dane.txt", "w");
	for(i=0;i<5;i++)fprintf(fp2, "%s %s - %s\n", tab[i].imie, tab[i].nazwisko, tab[i].wiek);

}
