#include <stdio.h>
#define PETLA(komenda1,war,komenda2) \
{ komenda1; while(war){komenda2; komenda1;}; }

int main()
{
  int a=0, b=0, i=0;
  PETLA(a++ ,  i<5 ,  b++; i++);
  printf("a: %d, b: %d, i: %i\n", a, b, i);
  return 0;
}
