#include <stdio.h>
#include <string.h>

main()
{ 
	FILE *fp;
	fp=fopen("nowe-dane.txt", "r");
	char imie[100], nazwisko[100], tab[100], first[100], last[100], salary[100], c, c2, c3;
	int cash, i=0, flaga = 0, index;
	printf("Podaj imie:");
	scanf("%s", imie);
	printf("Podaj nazwisko:");
	scanf("%s", nazwisko);
	printf("Podaj $$$:");
	scanf("%i", &cash);

	do {
		c = fscanf(fp,"%s",first);
		c2 = fscanf(fp,"%s",last);
		c3 = fscanf(fp,"%s",salary);
		printf("%s - %s %s\n",salary, first, last);	
		if (strcmp(nazwisko,last)==0 ) flaga=1;
		else if(strcmp(nazwisko,last)<0) index=i;	
		i++;	
	}while (c != EOF);
	
	printf("%i, %i\n", i, index);
	index = i - index;
	fclose(fp);
	fp=fopen("nowe-dane.txt", "r");
	rewind(fp);
	if(flaga == 0)
	{
		do {
			c = fscanf(fp,"%s",first);
			c2 = fscanf(fp,"%s",last);
			c3 = fscanf(fp,"%s",salary);
			//printf("%s - %s %s\n",salary, first, last);	
			if(i==index) printf("%i - %s %s\n",cash, nazwisko, imie);
			i--;	
		}while (c != EOF && c2 != EOF && c3 != EOF);
		
	}else{
		printf("Takie nazwisko już istnieje!\n");
	}
	
}
