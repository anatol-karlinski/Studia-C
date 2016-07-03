#include <stdio.h>

main(){
	int tab1[4][4] = {{0,0,0,1},{0,0,0,2},{0,0,0,3},{1,2,3,4}};
	int tab2[4][4] = {{0,0,0,1},{0,0,0,2},{0,0,0,5},{1,2,3,5}};

	int i=0, flaga = 1;

	for(i=0;i<4;i++){
		if(tab1[i][3] != tab1[3][i])flaga=0;
	}

	if(flaga==1)printf("OK");
	else printf("ŹLE");
	printf("\n");

}
