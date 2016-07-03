#include <stdio.h>
#include <math.h>

int tab[100][100] = {0};

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
	int i=0, j=0;
	
		int n, k;
	
	printf("Podaj n:");
	scanf("%d", &n);
	printf("Podaj k:");
	scanf("%d", &k);
	
	
	
	for(i=0;i<n;i++){tab[i][0]=1;tab[i][i]=1;};
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j>0)tab[i][j] = tab[i-1][j-1] + tab[i-1][j];
		}
	}
	


	printf("Wynik: %d \n", tab[k-1][n-1]);
	
	for(j=0;j<n+1;j++)
	{
		for(i=0;i<k+1;i++)printf("%7d", tab[i][j]);
		printf("\n");
	}

}
