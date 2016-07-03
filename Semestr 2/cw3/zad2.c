#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
  //Short
  short s = 200;
  s *= s;
  printf("Short:\n 200 * 200 = %d\n", s);

  //Int
  int i = 50000;
  i *= i;
  printf("Int:\n 50000 * 50000 = %d\n", i);

  //Long
  long l = 10000000000;
  l *= l;
  printf("Long:\n 10000000000 * 10000000000 = %lu\n", l);

  //Float
  long l = 10000000000;
  l *= l;
  printf("Long:\n 10000000000 * 10000000000 = %lu\n", l);

  //Double
  printf("Double:\n %2.23lf + 0.000000000000000000000001 = %2.24lf\n", FLT_EPSILON, (FLT_EPSILON+0.000000000000000000000001));
  return 0;
}
