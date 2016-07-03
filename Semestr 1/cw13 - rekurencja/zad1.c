#include <stdio.h>
#include <math.h>

 
int newt(int n, int k) 
{
	int wynik=1, i;
	for(i = 1; i <= k; i++)wynik = wynik * ( n - i + 1 ) / i; 
	return wynik; 
}
 

main()
{
	
	printf("Dla n = 5 symbole Newtona to:");
	int i;
	for(i=0;i<5;i++)
	{
			printf(" %d ", newt(5, i));
	}
	printf("\n");
	
}
