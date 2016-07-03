#include <stdio.h>

void zad1(){
int k = 0, i = 0;
scanf("%d", &k);
printf("Oto %d kolejnych liczb parzystych:", k);
for (i=0;i<k;i++){
 printf(" %d ", 2*(i+1));
}

printf("\n");

}

void zad2(){

int k=0, n=0, i=0, temp=0;
printf("Podaj ilość liczb k:");
scanf("%d", &k);
printf("Podaj przez co mają być podzielne:");
scanf("%d", &n);
printf("Oto pierwszych %d liczb podzielnych przez %d: \n", k, n);

while (k > 0){
  if(i%n == 0 && i != 0){
    printf(" %d ",i); 
    k--;
  }
  i++;
}
printf("\n");
}

void zad3(){
int i,j;
for(i=1; i<10;i++){
 for(j=1; j<10;j++){
  printf("%3d", i*j);
 }
 printf("\n");
}
}

int mnozenie(int a, int b){
 b--;
 int temp = a;
 for (int i = 0; i<b; i++){
  a = a + temp;
 }
return a;
}

void zad32(){
int i,j;

for(int x=0; x<47; x++){
  printf("=");
}
printf("\n");

for(i=1; i<10;i++){
 if(i!=1){
  printf("||---+");

  printf("||---+");
  for(int x=0; x<7; x++){
      if (i!=2){
      printf("----");
      }else{
      printf("====");
      }
      printf("+");
  }
  if (i!=2){

  printf("----||");
}else{
  printf("====||");
}
  printf("\n");
 }

 for(j=1; j<10;j++){
  if(j==1)printf("||");
  if(j!=1)printf(" | ");
  printf("%2d", mnozenie(i,j));
  if(j==9)printf(" ||");

 }
 printf("\n");
}
for(int x=0; x<47; x++){
  printf("=");
}
printf("\n");
}

void zad4(){
int k=0, n=0, wynik=0, i=0;

printf("Podaj wykładnik k: ");
scanf("%d", &k);
printf("Podaj liczbę n: ");
scanf("%d", &n);
wynik = n;
for (i=0; i<k-1; i++){
 wynik = wynik*n;
}

printf("%d do potęgi %d wynosi %d \n", n, k, wynik);

}

int power(int n, int k){
int pow = n;
for (int i=0; i<k-1; i++){
 n = n*pow;
}
return n;
}

void zad5(){

int n=0, i=1, wynik=0;

printf("Podaj liczbe n: ");
scanf ("%d", &n);

while (n>0){
 wynik = wynik + power(i,i);
 i++;
 n--;
}

printf("%d \n", wynik);

}

int main(){
zad32();
}
