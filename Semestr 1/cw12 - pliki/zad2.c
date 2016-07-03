#include <stdio.h>
#include <string.h>

main()
{
	char tab[100] = {0};
	char first[100], last[100], salary[100];
	char c, c2, c3;
	int i, min;
	printf("Podaj minimalną kwotę:");
	scanf("%d", &min);
	
	FILE *fp, *fp2;
	fp2=fopen("wysokie-zarobki.txt", "w");
	fp=fopen("dane.txt", "r+");
	do {
		c = fscanf(fp,"%s",first);
		c2 = fscanf(fp,"%s",last);
		c3 = fscanf(fp,"%s",salary);
		if(atoi(salary) >= min)
		{
			fprintf(fp2, "%s - %s %s\n",salary, first, last);
		} 
		
	}while (c != EOF && c2 != EOF && c3 != EOF);
	fclose(fp2);
    fclose(fp);
}
