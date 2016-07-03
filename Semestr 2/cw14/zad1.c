#include <stdio.h>
#include <string.h>
#define SIZE 100


void arabDoRzym(int arab)
{
char rzym[SIZE][SIZE];
int cykl=0, i=0;
for(i=0;i<SIZE;i++)strcpy(rzym[i], "");
while (arab>0)
{
	if(cykl==0) // jednosci
	{
		switch (arab%10)
		{
			case 0:
				strcpy(rzym[0], "");
				break;
			case 1:
				strcpy(rzym[0], "I");
				break;
			case 2:
				strcpy(rzym[0], "II");
				break;
			case 3:
				strcpy(rzym[0], "III");
				break;
			case 4:
				strcpy(rzym[0], "IV");
				break;
			case 5:
				strcpy(rzym[0], "V");
				break;
			case 6:
				strcpy(rzym[0], "VI");
				break;	
			case 7:
				strcpy(rzym[0], "VII");
				break;	
			case 8:
				strcpy(rzym[0], "VIII");
				break;		
			case 9:
				strcpy(rzym[0], "IX");
				break;		
		}
	}
	else if(cykl==1) // dziesiatki
	{
		switch (arab%10)
		{
			case 0:
				strcpy(rzym[1], "");
				break;
			case 1:
				strcpy(rzym[1], "X");
				break;
			case 2:
				strcpy(rzym[1], "XX");
				break;
			case 3:
				strcpy(rzym[1], "XXX");
				break;
			case 4:
				strcpy(rzym[1], "XL");
				break;
			case 5:
				strcpy(rzym[1], "L");
				break;
			case 6:
				strcpy(rzym[1], "LX");
				break;	
			case 7:
				strcpy(rzym[1], "LXX");
				break;	
			case 8:
				strcpy(rzym[1], "LXXX");
				break;		
			case 9:
				strcpy(rzym[1], "XC");
				break;		
		}	
	}
	else if(cykl==2) // setki
	{
		switch (arab%10)
		{
			case 0:
				strcpy(rzym[2], "");
				break;
			case 1:
				strcpy(rzym[2], "C");
				break;
			case 2:
				strcpy(rzym[2], "CC");
				break;
			case 3:
				strcpy(rzym[2], "CCC");
				break;
			case 4:
				strcpy(rzym[2], "CD");
				break;
			case 5:
				strcpy(rzym[2], "D");
				break;
			case 6:
				strcpy(rzym[2], "DC");
				break;	
			case 7:
				strcpy(rzym[2], "DCC");
				break;	
			case 8:
				strcpy(rzym[2], "DCCC");
				break;		
			case 9:
				strcpy(rzym[2], "CM");
				break;		
		}		
	}
	else if(cykl==3) // tysiace
	{
		
		for(i=0;i<arab%10;i++) strcpy(rzym[3+i], "M");
	}
	arab /= 10;
	cykl++;
}
	int j;
	for(j=SIZE-1;j>=0;j--) printf("%s", rzym[j]);
}

void rzymDoArab(char rzym[])
{
	int arab=0;
	int cykl=0;
	char* temp;

    for (temp=&rzym[0];*temp != '\0'; temp++)
    {
		if(*temp == 'I')
		{
			if(*temp+1 != '\0')
			{
				if(*temp+1 == 'I')
				{
					int jedynke = 1;
					char* temp2;
					for (temp2=temp;*temp2 != 'I' || *temp2 != '\0'; temp2++)
				}
			}
			else arab+=1;
		}
		
        //printf("%c\n", *temp);
    }
	
	
}

int main()
{
	/*
	int arab;
	printf("Podaj arabską: ");
	scanf("%d", &arab);
	arabDoRzym(arab);
	printf("\n");
	*/
	
	char rzym[SIZE];
	printf("Podaj rzymska: ");
	scanf("%s", rzym);
	rzymDoArab(rzym);
	
	return 0;
}
