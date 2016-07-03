#include<stdio.h>

void fn(int *n,int *k,int *q,int *r)
{
    *q = ((*n)/(*k));
    *r = ((*n)%(*k));
}

int main()
{
  int n,k,q,r;
  printf("n: ");
  scanf("%i", &n);
  printf("k: ");
  scanf("%i", &k);
  fn(&n,&k,&q,&r);
  printf ("q: %i, r: %i\n", q, r);
  return 0;
}
