#include <stdio.h>
int main (){

printf("Podaj liczbe: \n");
float a, srednia, suma;
suma = 0;
scanf("%f", &a);

for (int i=0; i<a+1; i++){
suma = suma + i;
}

printf("%f! = %f\n", a, suma);
printf("Srednia = %f\n", suma/a); 

return 0;
}
