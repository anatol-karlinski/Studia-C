#include <stdio.h>

main(){
	double tab1[10] = {1,2,3,4,5,6,7,8,9,10};
	double tab2[10] = {10,9,8,7,6,5,4,3,2,1};
	int i;
	printf("[ ");
	for(i=0;i<10;i++){
		printf(" %lf ", tab1[i]/tab2[9-i]);
	}
	printf(" ] \n");
}
