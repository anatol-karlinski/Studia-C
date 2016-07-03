#include <stdio.h>
#define ROZMIAR1 2
#define ROZMIAR2 2

void zad1()
{
int n, i, j, tab[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
for(i=0;i<4;i++)
{
	printf("wiersz%d: ", i);
	for(j=0;j<4;j++)
	{
		printf("%d ", tab[i][j]);
	}
	printf("\n");
}
for(i=0;i<4;i++)
{
	printf("kolumna%d: ", i);
	for(j=0;j<4;j++)
	{
		printf("%d ", tab[j][i]);
	}
	printf("\n");
}
}

void zad2()
{
	int tab[3][3] = {{1,2,3},{2,3,1},{3,1,2}};
	int check[3] = {0};
	int flaga = 1, sumaR = 0, sumaC = 0,  i, j;
	
	
	for(i=0;i<3;i++)
	{
		check[0]=0;check[1]=0;check[2]=0;
		for(j=0;j<3;j++)
		{
			switch(tab[i][j])
			{
			case 1:
				check[0] += 1;
				break;
			case 2:
				check[1] += 1;
				break;
			case 3:
				check[2] += 1;
				break;
			default:
				break;
			}
		}
			if(check[0]!=1||check[1]!=1||check[2]!=1) flaga=0;
	}
	
	for(i=0;i<3;i++)
	{
		check[0]=0;check[1]=0;check[2]=0;
		for(j=0;j<3;j++)
		{
			switch(tab[j][i])
			{
			case 1:
				check[0] += 1;
				break;
			case 2:
				check[1] += 1;
				break;
			case 3:
				check[2] += 1;
				break;
			default:
				break;
			}
			
			printf("%d ", tab[j][i]);
		}
			if(check[0]!=1||check[1]!=1||check[2]!=1) flaga=0;
			printf("\n");
	}
	
	if(flaga==1)printf("Macierz ma permutacje elemmentów 1 2 3 w każdym wierszu i kolumnie.");
	else printf("Źle. Macierz nie w każdym wierszu i kolumnie ma permutacje elementów 1 2 3. \n");
	
}

zad3a()
{
	int wymiar1,wymiar2, i, j ,k;
	printf("Podaj wymiary: ");
	scanf("%d%d",&wymiar1,&wymiar2);
	int tab1[wymiar1][wymiar2], tab2[wymiar2][wymiar1], wynik[wymiar2][wymiar2];

	
	for(i=0;i<wymiar2;i++){
		for(j=0;j<wymiar2;j++){
			wynik[i][j] = 0;
		}
	}
	
	for(i=0;i<wymiar2;i++){
		for(j=0;j<wymiar1;j++){
			tab1[i][j] = 0;
			tab2[j][i] = 0;
		}
	}
	
	printf("Podaj zawartość tab1: ");

	for(i=0;i<wymiar1;i++){
		for(j=0;j<wymiar2;j++){
			scanf("%d", &tab1[i][j]);
		}
	}
	
	printf("Podaj zawartość tab2: ");

	for(i=0;i<wymiar1;i++){
		for(j=0;j<wymiar2;j++){
			scanf("%d", &tab2[j][i]);
		}
	}

	
	for(i=0;i<wymiar2;i++){
		for(j=0;j<wymiar2;j++){
			for(k=0;k<wymiar1;k++){
				wynik[i][j] += (tab1[i][k] * tab2[k][j]);
			}		
		}
	}
	
	printf("Tab1: \n");

	for(i=0;i<wymiar1;i++){
		for(j=0;j<wymiar2;j++){
			printf("%d ", tab1[i][j]);
		}
	printf("\n");
	}
	
	printf("Tab2: \n");

	for(i=0;i<wymiar1;i++){
		for(j=0;j<wymiar2;j++){
			printf("%d ", tab2[j][i]);
		}
	printf("\n");
	}
	
	printf("Wynik: \n");

	for(i=0;i<wymiar1;i++){
		for(j=0;j<wymiar1;j++){
			printf("%d ", wynik[i][j]);
		}
	printf("\n");
	}
	


}


void main()
{
	zad3a();
}
