#include <stdio.h>
#include <string.h>
#define BUFFER 100

wyswietlTab(char tab[], int rozmiar){
	int i;
	printf("[ ");
	for(i=0;i<rozmiar;i++){
	printf("%c", tab[i]);
	}
	printf(" ] \n");
}

wyswietlTabOdwrotnie(char tab[], int rozmiar){
	int i;
	printf("[ ");
	for(i=0;i<rozmiar;i++){
	printf("%c", tab[rozmiar-i-1]);
	}
	printf(" ] \n");
}

wczytaj(int *x, int *adres){
	*adres = *x;
}

main(){
	char tab[BUFFER]={0};
	int i=0;
	char *adres = &tab[0];
	scanf("%s", tab);
	wyswietlTabOdwrotnie(tab,BUFFER);
}
