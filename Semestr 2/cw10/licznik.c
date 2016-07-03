#include <stdio.h>
#include "licznik.h"

int counter = 0;

void policz(int drukowac)
{
	if(drukowac == 0) counter++;
	else  printf("%d", counter);
}
