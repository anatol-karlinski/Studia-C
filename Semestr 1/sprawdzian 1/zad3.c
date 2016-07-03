#include<stdio.h>
#include<math.h>

int silnia (int n)
{
if (n == 0) return 1;
else return n*silnia(n-1);
}

void tylor (int n, int x)
{
	double wynik=0,i;
	for(i=0;i<n;i++)
	{
		wynik += pow((-1),i)*pow(x, (2*i))/silnia(2*i);
	}
	printf("%lf \n", wynik);

}


main(){
	tylor(3, 30);
}


