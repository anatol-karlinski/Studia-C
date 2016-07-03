#include <stdio.h>
#include <stdlib.h>

void converToBinary(int num, char *tab)
{
  int i=0, temp, tempTab[8];
  for(i=7; i>=0; i--)
  {
    temp = num >> i;
    if( temp & 1 )
      tempTab[i] = 1;
    else
      tempTab[i] = 0;
  }
  for(i=0; i<8; i++)tab[i] = tempTab[i];
}

int main()
{
  FILE *fp;
  fp=fopen("dane.txt", "r");
  char tab[8];
  char c;
  do {
    c = fgetc(fp);
    converToBinary((int)c, tab);
  }while (c != EOF);
  return 0;
}
