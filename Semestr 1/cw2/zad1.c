#include <stdio.h>
int main(){
 float a,b,c,delta;
 printf("Podaj 3 liczby"); 
 scanf("%f%f%f",&a,&b,&c);
 delta=b*b-4*a*c;
 if(delta>0){
  printf("Pierwiastki istnieja\n"); 
 }else{
  printf("Nie ma pierwiastkow\n");
 }
 return 0;
}
