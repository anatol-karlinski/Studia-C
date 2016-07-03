#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
  //sizeof
  printf("Ilosc bajtow przeznaczonych na zmienna:\n");
  printf("Short: %lu\n", sizeof(short));
  printf("Int: %lu\n", sizeof(int));
  printf("Long: %lu\n", sizeof(long));
  printf("Long long: %lu\n", sizeof(long long));
  printf("Float: %lu\n", sizeof(float));
  printf("Double: %lu\n", sizeof(double));
  printf("Long double: %lu\n\n", sizeof(long double));
  // min/max
  printf("Maksymalna i minimalna wartosc typow zmiennych:\n");
  printf("Short:\n max - %12.9d\n min - %12.9d \n", SHRT_MAX, SHRT_MIN);
  printf("Int:\n max - %12.9d\n min - %12.9d \n", INT_MAX, INT_MIN);
  printf("Long:\n max - %12.9lu\n min - %12.9lu \n", LONG_MAX, LONG_MIN);
  printf("Long long:\n max - %12.9lli\n min - %12.9lli \n", LLONG_MAX, LLONG_MIN);
  printf("Float:\n max - %12.9e\n min - %12.9e \n", FLT_MAX, FLT_MIN);
  printf("Double:\n max - %12.9le\n min - %12.9le \n", DBL_MAX, DBL_MIN);
  printf("Long double:\n max - %Le\n min - %12.9Le \n\n", LDBL_MAX, LDBL_MIN);
  //seed
  printf("Ziarna typow zmiennych:\n");
  printf("Float: %2.22lf\n", FLT_EPSILON);
  printf("Double: %2.52lf\n", DBL_EPSILON);
  printf("Long double: %2.63Lf\n\n", LDBL_EPSILON);
    // precyzja
  printf("Precyzja typow zmiennych:\n");
  printf("Float: %i\n", FLT_DIG);
  printf("Double: %i\n", DBL_DIG);
  printf("Long double: %i\n", LDBL_DIG);


  return 0;
}
