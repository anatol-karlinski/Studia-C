#include <stdio.h>

main(){
	char tab[9] = {'q','w','e','r','a','s','t','f','g'};
	int index = 10, i = 0;
	
	for (i=0;i<9;i++)if(tab[i]=='t')index = i;
	
	if(index==10)printf("Brak litery 't'");
	else printf("Ostatnie miejsce wystapienia litery t to: %d", index);
	printf("\n");
}
