#include<stdio.h>

int funk(int x)
{
	switch (x)
	{	
	case 1:
		return 2;
	break;
	case 2:
		return 3;
	break;
	case 3:
		return 4;
	break;
	default:
		return 7*(funk(x-1))+3*(funk(x-2))-5*(funk(x-3));
    break;
	}  
}

main(){
	printf("Test: %d \n", funk(5));
}
