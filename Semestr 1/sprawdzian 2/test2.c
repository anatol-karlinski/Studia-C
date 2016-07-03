// GRUPA B - zad 2
#include <stdio.h>

int main(){
	
	int n, x = 1;
	int ileDzielnikow = 0;
	scanf("%d", &n);
	
	while(x<n){
		if(n % x == 0 && x % 2 == 0)ileDzielnikow++;
		x++;
	}
	
	printf("Liczba %d ma %d dzielniki parzyste, wieksze od 1.\n", n, ileDzielnikow);
	
	
	
return 1;	
}
