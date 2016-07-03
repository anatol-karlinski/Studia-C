#include <stdio.h>
#include <stdlib.h>

wyswietlTab(int tab[], int rozmiar){
	int i;
	printf("[ ");
	for(i=0;i<rozmiar;i++){
	printf(" %d ", tab[i]);
	}
	printf(" ] \n");
}

wczytaj(int *x, int *adres){
	*adres = *x;
}

main(){
	int rozmiar;
	printf("Podaj rozmiar tablicy: ");
	scanf("%d", &rozmiar);
	int * tab;
	tab = malloc(rozmiar*sizeof(int));
	
	int i=0, n, *adres = &tab[0];
	for(i=0;i<rozmiar;i++)
	{
		scanf("%d", &n);
		*adres=n;
		adres++;
	}
	wyswietlTab(tab,rozmiar);
}
