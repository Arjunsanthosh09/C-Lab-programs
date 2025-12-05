#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char ch;
	int open=0,close=0;
	clrscr();
	fp=fopen("bracket.txt","r");
	if(fp==NULL){
		printf("Error opening the file...");
	}

	while((ch=fgetc(fp))!=EOF){
		if(ch=='{'){
			open++;
		}else if(ch=='}'){
			close++;
		}
	}
	if(open!=close){
		printf("brackets are missing in the file..");
	}
	else{
		printf("Brackets are correclty opened & closed...");
		printf("\nopening bracket number :%d",open);
		printf("\nclosing bracker number :%d",close);
	}
	getch();
}