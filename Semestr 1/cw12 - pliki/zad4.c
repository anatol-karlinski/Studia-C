#include <stdio.h>
#include <string.h>

main()
{ 
	FILE *fp;
	fp=fopen("nowe-dane.txt", "w+");
	char nazwisko[100], tab[100], last, c;
	printf("Podaj nazwisko:");
	scanf("%s", nazwisko);
	int i=0;
	do {
		c = fscanf(fp,"%s",&last);
		tab[i] = last;
		i++;
	}while (c != EOF);
	
}
