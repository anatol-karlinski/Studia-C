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
 
double cumulative(int k, int n, double p)
{
	int i=0;
	double suma=0;
	int j=0;


	for(j=0;j<=k;j++)
		{
			suma = suma + newtReq(n,j)*pow(p,j)*pow((1-p), (n-j));
			printf("Suma dla i:%d, k:%d, p:%lf = %lf \n", i, j, p, suma);
	}
	return suma;
	
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
	
	//printf("%d", newt(5,2));
	printf("Prawdopodobieństwo %d sukcesow w %d probach wynosi %lf \n", k, n, cumulative(k,n,p)); 
		
}
