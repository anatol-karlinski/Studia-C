// GRUPA B - zad 3
#include <stdio.h>
 
int main(){
	
	int h, a, b, i;
	scanf("%d", &h);
	a=0;
	b=1;
	
	for(i=0; i<h-1; i++){
		b = b+2;
	}
	
	
	while(h>0){
		for (i=0; i<a; i++){
			printf(" ");
		}
		for(i=0; i<b; i++){
			printf("*");
		}
	printf("\n");
	a++;
	h--;
	b = b-2;
	}
	
	
	return 1;
}
