#include <stdio.h>

int main(){
int a, temp;

printf("Podaj liczbe: ");
scanf("%d", &a);
printf("Cyfry w systemie 8-kowym liczby %d wypisane od końca to: \n", a);
while (a>0){
 temp = a % 8;
 a = a/8;
 printf(" %d ", temp);
}
printf("\n");

return 0;
}
