#include <stdio.h>
#include <math.h>
int main(){
 int liczba;
 printf("Podaj liczbe: \n");
 scanf("%d",&liczba);

 if (abs(liczba) <= 9) {
  printf("Liczba ma 1 cyfre");
 }else if (abs(liczba) <= 99){
  printf("Liczba ma 2 cyfry");
 }else if (abs(liczba) <= 999){
  printf("Liczba ma 3 cyfry");
 }else{
  printf("Liczba ma wiecej niz 3 cyfry");
 }
  printf("\n");

return 0;
}
