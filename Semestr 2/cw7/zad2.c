#include <stdio.h>
#include <string.h>

#define MAX_DL_IM 99
#define MAX_DL_NA 99
#define DUZO 99

typedef  struct
{
  char imie[MAX_DL_IM];
  char nazwisko[MAX_DL_NA];
  char pensja;
}  osoba;

osoba tabl[DUZO];

int czytanie(char plik[])
{
  FILE *fp;
  fp=fopen(plik, "r");

  int ile=0;
  int ch=0;

  while(!feof(fp))
  {
    ch = fgetc(fp);
    if(ch == '\n') ile++;
  }
  fclose(fp);
  //printf("%i, %s\n", ile, plik);
  return ile;
}

void zapisywanie(char plik[], int ile)
{
  FILE *fp;
  fp=fopen(plik, "r");
  int i=0;

	for(i=0; i<ile; i++)
  {
      fscanf(fp,"%s",tabl[i].imie);
      fscanf(fp,"%s",tabl[i].nazwisko);
      fscanf(fp,"%s",tabl[i].pensja);
	}

  fclose(fp);
}

int main( int argc, char *argv[] )
{
  int ile = czytanie(argv[1]);
  zapisywanie(argv[1], ile);
}
