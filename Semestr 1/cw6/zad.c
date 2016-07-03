#include <stdio.h>
#define SIZE 31

void dump(int tab[], int size){
printf("\n");
int i=0;
for (i=0;i<size;i++)printf("%d",tab[i]);
printf("\n");
}

void przesun(int tab[], int ile, int dlogosc){
	int i,j,temp;
	dlogosc--;
	for(i=0; i<ile;i++){
		for(j=0;j<dlogosc;j++){
			tab[dlogosc-j]=tab[dlogosc-1-j];
		}
	}
	for(i=0; i<ile;i++)tab[i]=0;
}

int max(int a, int b){
	if(a>b)return a;
	else return b;
}

int min(int a, int b){
	if(a<b)return a;
	else return b;
}
	
void main(){

int tab1[SIZE] = {0}, tab2[SIZE] = {0}, wynik[SIZE]={0}, cyfra, i = 0, j = 0, temp = 0, ileDodawania, a, b, liczba;

printf("Podaj 1'szą liczbę \n");

while( (scanf("%1d", &cyfra)) == 1 ){
	tab1[i] = cyfra;
	i++;
}

getchar();
printf("Podaj 2'gą liczbę \n");

while((scanf("%1d", &cyfra)) == 1 ){
	tab2[j] = cyfra;
	j++;
}

getchar();

printf("Liczba wynosi: ");
/*
dump(tab1,SIZE);
dump(tab2,SIZE);
*/
if(i>j)przesun(tab2, i-j, SIZE);
else przesun(tab1, j-i, SIZE);
/*
dump(tab1,SIZE);
dump(tab2,SIZE);
	*/
ileDodawania = max(i,j);

for(i=0; i<ileDodawania; i++){
	a = tab1[ileDodawania-i-1];
	b = tab2[ileDodawania-i-1];
	liczba = (a+b+temp)%10;
	temp = (a+b+temp)/10;
	wynik[ileDodawania-i-1] = liczba;
}

przesun(wynik, 1, SIZE);

if(temp!=0) wynik[ileDodawania-i] = temp;

for(i=0; i<ileDodawania+1; i++)printf("%d", wynik[i]);

printf("\n");

}

