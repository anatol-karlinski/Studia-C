#include "operacje.h"
#include <stdio.h>
#include <string.h>
#define ROZMIAR_SLOW 100

typedef struct
{
	char slowo_pol[MAX_DL_SLOWA];
	char slowo_ang[MAX_DL_SLOWA]; 
}para;

para slow[ROZMIAR_SLOW];

void  inicjuj_slownik(void)
{
	int i;
	for(i=0; i<ROZMIAR_SLOW;i++)
	{
		strcpy(slow[i].slowo_ang, "");
		strcpy(slow[i].slowo_pol, "");
	}
}

Logiczne  dodaj(char a[MAX_DL_SLOWA], char p[MAX_DL_SLOWA])
{
	// Wyznacz miejsce na nowe slowo
	int i=0;
	while(strcmp(slow[i].slowo_ang, "") != 0 && i!= ROZMIAR_SLOW - 1)i++;
	// Dodaj slowo albo umrzyj
	if(i == ROZMIAR_SLOW - 1) return FALSZ;
	else
	{
		strcpy(slow[i].slowo_ang, a);
		strcpy(slow[i].slowo_pol, p);
		return PRAWDA;
	}
}

void  usun(char a[MAX_DL_SLOWA])
{
	int i=0;
	while(strcmp(slow[i].slowo_ang, a) != 0 && i!= ROZMIAR_SLOW - 1)i++;
	if(i != ROZMIAR_SLOW - 1)
	{
		strcpy(slow[i].slowo_ang, "");
		strcpy(slow[i].slowo_pol, "");
	}
}

void  ang_pol(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA])
{
	int i;
	while(strcmp(slow[i].slowo_ang, zrodlo) != 0 && i!= ROZMIAR_SLOW - 1)i++;
	if(i == MAX_DL_SLOWA - 1) strcpy(cel, "");
	else strcpy(cel, slow[i].slowo_pol);
}

void  pol_ang(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA])
{
	int i;
	while(strcmp(slow[i].slowo_pol, zrodlo) != 0 && i!= ROZMIAR_SLOW - 1)i++;
	if(i == MAX_DL_SLOWA - 1) strcpy(cel, "");
	else strcpy(cel, slow[i].slowo_ang);
}
