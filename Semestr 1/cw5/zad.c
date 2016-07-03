#include <stdio.h>

void zad1(){
	int i;
	double a[10] = {0,1,2,3,4,5,6,7,8,9};
	double b[10] = {9,8,7,6,5,4,3,2,1,0};
	double wynik = 0;

	for (i=0; i<10; i++){
			wynik = wynik + a[i]*b[i];
	}

	printf("Wynik: %lf \n", wynik);
		
}

void zad2(){
	char word[90] = {0};
	int i=0;
	char x;

	while(scanf("%c", &word[i]) && word[i] != '\n'){
		i++;
	}

	printf("Słowo brzmi: ");
	while(i>=0){
		printf("%c", word[i]);
		i--;
	}
	
	printf("\n");
}

void zad3()
{
	char word[90] = {0};
	int i=0;
	int palindrom = 1;
	int j=0;

	while(scanf("%c", &word[i]) && word[i] != '\n'){
		i++;
	}	
	i--;
	while(i>=0){
		if(word[i] != word[j])palindrom = 0;
		j++;
		i--;
	}
	
	if(palindrom == 1){
		printf("Jest palindromem \n");
	}else{
		printf("Nie jest palindriomem \n");
	}
	
}



int main(){
zad3();

return 1;
}
