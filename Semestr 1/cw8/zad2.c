#include <stdio.h>

zmienna(int*x,int*y)
{
	int temp1, temp2;
	temp1 = *x;
	temp2 = *y;
	*x = temp2;
	*y = temp1;
}

main(){
	int x,y;
	printf("Podaj x: ");
	scanf("%d",&x);
	printf("Podaj y: ");
	scanf("%d",&y);
	zmienna(&x,&y);
	printf("%d, %d \n",x,y);
}
