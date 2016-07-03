#include <stdio.h>

void test1()
{
  char tab[5] = {'a', 'b', 'c', 'd', 'e'};
  int i=0;
  tab[i++] = 50; // i = 0
  tab[++i] = 51; // i = 3
  for(i=0;i<5;i++)printf("%c", tab[i]);
  printf("\n");
}

void test2()
{
  int y,x,z;
  x=5;
  y = (x += 2); // x = 7, y =7
  z = (x %= 3) + (x %= 4); // x = 1, x = 1, z = 2
  printf("x = %d, y = %d, z = %d ", x, y, z);
  printf("\n");
}

int main ()
{
  test1();
  test2();

  return 0;
}
