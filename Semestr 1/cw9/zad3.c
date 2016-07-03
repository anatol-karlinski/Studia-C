#include <stdio.h>
#include <math.h>


int fibon(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibon(n-1)+fibon(n-2);
}


main()
{
	printf("Podaj n:");
	int a, i;
	scanf("%d", &a);
	for(i=1;i<=a;i++)printf(" %d ", fibon(i));
	printf("\n");
}
