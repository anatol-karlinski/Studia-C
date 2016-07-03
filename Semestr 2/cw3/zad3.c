#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
  printf("\nFloat do Int - (int)FLT_MAX: %d \n", (int)FLT_MAX);
  printf("Int do Float - (float)USHRT_MAX: %f \n\n", (float)USHRT_MAX);

  printf("Double do Short - (short)DBL_MAX: %u \n", (short)DBL_MAX);
  printf("Short do Double - (double)SCHAR_MAX: %lf \n\n", (double)SCHAR_MAX);

  printf("Long Double do Long - (long)LDBL_MAX: %lu \n", (long)LDBL_MAX);
  printf("Long do Long Double - (long double)LONG_MAX: %Lf \n\n", (long double)LONG_MAX);
  return 0;
}
