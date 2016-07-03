#include <stdio.h>
#include <math.h>

void zad1(char height, char width){
while(height>0){
	for(int i=0; i<height-1; i++){
		printf(" ");
	}
	for(int i=0; i<width; i++){
		printf("*");
	}
printf("\n");
height--;
}

}
////////////////////////////////////////////////////////////
void zad2(char litera){
int licznik = 0, i = 0;
char tab[11]={'a','l','a',' ','m','a',' ','k','o','t','a'};

for(i = 0; i<sizeof(tab)/sizeof(char); i++){
   if(tab[i] == litera)licznik++; 
}

printf("Litera '%c' wystapila w tablicy %d razy \n", litera, licznik);

if (licznik != 0){
	printf("[");
	for(i = 0; i<sizeof(tab)/sizeof(char); i++){
			printf(" %c ", tab[i]);
	}
	printf("]\n");

}

}
////////////////////////////////////////////////////////////
bool comp(char tab1[], char tab2[]){
	bool identyczne = true;
	for(int i = 0; i<sizeof(tab1)/sizeof(char);i++){
		if(tab1[i]-'0' != tab2[i]-'0')identyczne = false;
	}
	return identyczne;
} 
void zad3(){
	char tab[11]={'a','l','a',' ','m','a',' ','k','o','t','a'};
	char tab2[11]={'-','-','-',' ','-','-',' ','-','-','-','-'};
	char litera = 'x';
	int licznik = 0, i = 0;
	
	while(!comp(tab, tab2)){
		printf("Zgadnij litere: ");
		scanf("%c", &litera);
		getchar();
		licznik = 0;
		
		for(i = 0; i<sizeof(tab)/sizeof(char); i++){
			if(tab[i] == litera){
				licznik++;
				tab2[i] = tab[i];
			}
		}
		
		if(licznik != 0){
			printf("Litera '%c' wystapila w tablicy %d razy \n", litera, licznik);
		}else{
			printf("Litera nie wystepuje \n");
		}
		
		for(i = 0; i<sizeof(tab2)/sizeof(char); i++){
			printf(" %c ", tab2[i]);
		}

		printf("\n");
	}
	printf("Koniec! \n");
}
////////////////////////////////////////////////////////////

void zad4(int rowCount, int num, int max){

	for(int i=0;i<rowCount;i++){
		if(num < max){
			for(int j=0; j<max/rowCount; j++)printf(" ");
			printf("%2d ", num);
			num++;
		}
	}

	printf("\n");

	if(num != max){
		rowCount++;
		zad4(rowCount, num, max);
	}

}
////////////////////////////////////////////////////////////
int main( int argc, char *argv[] ){
	//zad1(*argv[1]-'0', *argv[2]-'0');
	//zad2(*argv[1]);
	//zad3();
	//int a=1, b=12;
	zad4(1, 1, 21+1);
	printf("\n");
	return 0;
}
