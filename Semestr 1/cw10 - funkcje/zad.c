#include <stdio.h>

char progowa(int a, int b){
	if(a*b>100)return 'a';
	else if(a*b==100)return 'c';
	else return 'b';
}

int ilePierwiastkow(double a, double b, double c){
	double delta = (b*b) - (4*a*c);
	printf("%lf \n", delta);
	if(delta>0)return 2;
	else if(delta==0)return 1;
	else return 0;
}

void sort(int *tab, int rozmiar){
     int pom, j, i;
     for(i=1; i<rozmiar; i++)
     {
		pom = tab[i];
		j = i-1;
		while(j>=0 && tab[j]>pom){
			tab[j+1] = tab[j];
			j--;
		}
		tab[j+1] = pom;
     }
}

void zad1(){
	printf("Podaj 2 liczby:");
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%c \n", progowa(a,b));
	
}

void zad2(){
	printf("Podaj współczynniki  a b i c w tej kolejności:");
	double a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	printf("Pierwiastków równania %d x*x + %d x + %d jest %d \n", (int)a,(int)b,(int)c,ilePierwiastkow(a,b,c));

}

void zad3(){
	int tab[10] = {5,3,2,5,7,8,9,6,4,2};
	sort(tab, 10);
	int i=0;
	for(i=0;i<10;i++){
		printf("%d",tab[i]);
	}
	printf("\n");
}

main(){
	
	zad3();
	
}


