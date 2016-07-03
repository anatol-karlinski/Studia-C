#include <stdio.h>

void a()
{
  int a,b,c,d;
  a = b = c = d = 0;
  printf("%d, %d, %d, %d \n", a,b,c,d);
}

void b()
{
  int n = 5, i;
  int a[5]= {0};
  for (i=0; i<N; a[i++]=i)printf("%d", a[i]);
}

int main ()
{
  a();
  b();
  return 0;
}
