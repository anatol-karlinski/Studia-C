// GRUPA B - zad 1
#include <stdio.h>
int main(){
	int temp, i;
	int tab[3] = {0,0,0};
	
	for(i=0; i<=100; i++){
		temp = i;
		
		while(temp>0){
			printf(" %d ", temp%7);
			temp = temp/7;
		}

		printf("\n");
	
	}
	
	return 1;
}
