#include <stdio.h>
#include <stdlib.h>

void printBinary(int num)
{
  int i=0, temp;
  for(i=7; i>=0; i--)
  {
    temp = num >> i;
    if( temp & 1 )
      printf("1");
    else
      printf("0");
  }
  printf("\n");
}

int main()
{
  FILE *fp;
  fp=fopen("dane.txt", "r");
  char c;
  do {
    c = fgetc(fp);
    printBinary((int)c);
  }while (c != EOF);
  return 0;
}
