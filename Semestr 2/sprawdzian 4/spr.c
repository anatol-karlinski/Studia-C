#include <stdio.h>
#include <string.h>
   
#define PROG(typZmiennej, formatZmiennej) \
for(int i=2; i<ile; i=i+2){ \
typZmiennej odpowiedz, zmienna1, zmienna2; \
sscanf(arg[i], "%"#formatZmiennej, &zmienna1); \
sscanf(arg[i+1], "%"#formatZmiennej, &zmienna2); \
odpowiedz = (zmienna1 + zmienna2);\
printf("%"#formatZmiennej, odpowiedz); printf(" ");} \

int main(int ile, char* arg[]) {
  if (ile < 2) {
    printf("\n POPRAWNE WYWOLANIE:");
    printf("\n   program  typ  ciag_danych\n\n");
  }  else
  if (ile%2 == 1) {
    printf("\n POPRAWNE WYWOLANIE:");
    printf("\n   ciag danych musi miec parzysta dlugosc\n\n");
  }
  else
    if (strcmp(arg[1], "int") == 0)  PROG(int, i)
    else
      if (strcmp(arg[1], "double") == 0)  PROG(double, lf)
      else  printf("\n ZNANE TYPY: int, double\n\n");

  return 0;
}
  
