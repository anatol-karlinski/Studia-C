#include <stdio.h>
int silnia (int n)
{
	if(n==0)return 0;
	else return n+silnia(n-1);
}
main()
{
	printf("Podaj n:");
	int a;
	scanf("%d", &a);
	int wynik = silnia(a);
	printf("%d \n", wynik);
	
}
