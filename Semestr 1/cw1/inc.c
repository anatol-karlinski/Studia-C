 #include <stdio.h>
 void main() 
 {
 float x; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/
  x = 6.5;   /*przypisanie, inaczej nadanie wartosci 6 zmiennej x */
  printf("poczatkowa wartosc x: %f\n",x);
   x = x + 1;  /* zwiekszenie, inaczej inkrementacja (o 1) zmiennej x */
  printf("po inkrementacji o 1: %f\n",x);
  x = 2*x; /*mnozenie przez 2 */
  printf("po pomnożeniu przez 2: %f\n",x);
  x = x/3;
  printf("po podzieleniu przez 3: %f\n\n\n",x);

 float y; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/
  y = 6.5;   /*przypisanie, inaczej nadanie wartosci 6 zmiennej x */
  printf("poczatkowa wartosc y: %f\n",y);
   y = y - 2;  /* zwiekszenie, inaczej inkrementacja (o 1) zmiennej x */
  printf("po -2: %f\n",y);
  y = y/3; /*mnozenie przez 2 */
  printf("po /3: %f\n",y);
  y++;
  printf("po ++: %f\n",y);
  y = y*2;
  printf("po *2: %f\n",y);
}
