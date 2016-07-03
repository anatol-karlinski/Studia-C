#include <stdio.h>
#include <math.h>

int newt(int n, int k) 
{
	int wynik=1, i;
	for(i = 1; i <= k; i++)wynik = wynik * ( n - i + 1 ) / i; 
	return wynik; 
}

int newtReq(int n, int k)
{
	if(n>k)
	if(k==0 || n==k)return 1;
	else return newtReq(n-1,k)+newtReq(n-1,k-1);
}

main()
{
	int n, k;
	double p;
	
	printf("Podaj n:");
	scanf("%d", &n);
	printf("Podaj k:");
	scanf("%d", &k);
	printf("Podaj p:");
	scanf("%lf", &p);
	
	printf("Prawdopodobieństwo %d sukcesow w %d probach wynosi %lf \n", k, n, newt(n,k)*pow(p,k)*pow((1-p), (n-k))); 
		
}
