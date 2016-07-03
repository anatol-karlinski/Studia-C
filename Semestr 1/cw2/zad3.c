#include <stdio.h>
int main(){
float a, temp;
printf("Podaj liczbe: ");
scanf("%f", &a);
printf("\n Jej ostatnia cyfra to: %d", (int)a % 10);
printf("\n Liczba n bez ostatniej cyfry, to: %d \n", (int)(a/10));
 

return 0;
}
