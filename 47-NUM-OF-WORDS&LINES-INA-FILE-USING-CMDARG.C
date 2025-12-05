#include<stdio.h>
#include<conio.h>
void main(int arg,char *arga[]){
	int words=0,line=0,inword=0;
	char ch;
	FILE *fp;
	clrscr();
	if(arg!=2){
		printf("Arguments missing..");
		getch();
		return;
	}
	fp=fopen(arga[1],"r");
	if(fp==NULL){
		printf("Error opening the file...");
		getch();
		return;
	}
	while((ch=fgetc(fp))!=EOF){
		if(ch=='\n'){
			line++;
		}
		if(ch=='\t'||ch==' '||ch=='\n'){
			inword=0;
		}else if(inword==0){
			inword=1;
			words++;
		}
	}
	fclose(fp);
	printf("\nTotal words: %d",words);
	printf("\nTotal lines: %d",line);
	getch();

}