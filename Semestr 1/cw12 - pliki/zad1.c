#include <stdio.h>
#include <string.h>

main()
{
	FILE *fp;
	
	fp=fopen("dane.txt", "a");
	fprintf(fp,"Jan Kowalski 3000\nPiotr Petla 4500\n");
	fclose(fp);
	
	fp=fopen("dane.txt", "r");
	char c;
	while((c=fgetc(fp))!=EOF){
        printf("%c",c);
    }
    fclose(fp);

}
