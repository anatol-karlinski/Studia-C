#include <stdio.h>

main()
{
	int tab[100] = {0};
	printf("int: %d \n", (int)sizeof(int));
	printf("double: %d \n", (int)sizeof(double));
	printf("char: %d \n", (int)sizeof(char));
	printf("tab[100]: %d \n", (int)sizeof(tab));

}
