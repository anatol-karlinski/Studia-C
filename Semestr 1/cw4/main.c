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

int comp(char tab1[11], char tab2[11], int len){
    int identyczne = 1;
    for(int i = 0; i<len;i++){
        if(tab1[i]-'0' != tab2[i]-'0')identyczne = 0;
    }
    return identyczne;
}

void zad3(){
    char tab[11]={'a','l','a',' ','m','a',' ','k','o','t','a'};
    char tab2[11]={'-','-','-',' ','-','-',' ','-','-','-','-'};
    char litera = 'x';
    int licznik = 0, i = 0;

    int len = sizeof(tab2)/sizeof(tab2[0]);

    while(!comp(tab, tab2, len)){
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

int ileSpacji(int n){
    int k = 0, temp = 0;

    do {
        k++;
        temp = k*(k+1)/2;
    }while(n >= k*(k+1)/2);

    if (n != k*(k+1)/2){
        return (k+1)/2;
    }else{
        return k/2;
    }
}

void zad4(int rowCount, int num, int max, int s){
    for(int j=0; j<s; j++)printf("   ");
    for(int i=0;i<rowCount;i++){
        if(num < max){
            printf("%3d   ", num);
            num++;
        }
    }

   printf("\n");

    if(num != max){
        rowCount++;
        s--;
        zad4(rowCount, num, max, s);
    }

}

int main( int argc, char *argv[] ){
    //zad1(*argv[1]-'0', *argv[2]-'0');
    //zad2(*argv[1]);
    //zad3();

    int n;
    scanf("%d", &n);
    zad4(1, 1, n+1, 3*ileSpacji(n));
    printf("\n");
    return 0;
}
