#include <stdio.h>
int x;
#define CZYT(a, d) printf("Podaj wartosc "#a":"); scanf("%"#d"", &a);

int main()
{
  x=0;
  CZYT(x, d)
  printf("%d\n", x);
  return 0;
}
