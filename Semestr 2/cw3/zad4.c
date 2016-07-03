#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
  float x = 1.0;
  while (1.0+x > 1.0) x = x/2.0;
  printf("Float: %10.53f \n", x);

  double y = 1.0;
  while (1.0+y > 1.0) y = y/2.0;
  printf("Double: %10.53lf \n", y);

  long double z = 1.0;
  while (1.0+z > 1.0) z = z/2.0;
  printf("Long Double: %10.64Lf \n", z);

  return 0;
}
