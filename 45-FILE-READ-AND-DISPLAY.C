#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("qs.txt","r");
	if(fp==NULL){
		printf("Error opening the file...");
	}
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	fclose(fp);
	getch();

}