#include <stdio.h>
int main(){
int a, power, suma, temp;
printf("Podaj ile będzie cyfr w systemie 8-kowym: ");
scanf("%d", &a);
printf("Podaj te cyfry: \n");
suma = 0;

for (int i = 0; i<a; i++){
  scanf("%d", &temp);
  suma = suma*8;
  suma = suma + temp;
}

printf("%d \n", suma);

return 0;
}
