#include<stdio.h>
#include<conio.h>
void main(int arg,char *arga[]){
	FILE *fp1,*fp2;
	char ch;
	clrscr();

	if(arg!=3){
		printf("arguments not given properly.");
		printf("\n GIve like : copyfile <sourcefile.txt> destfile.txt");
		getch();
		return;
	}
	fp1=fopen(arga[1],"r");
	if(fp1==NULL){
		printf("\n Error opening the source file..");
		getch();
		return;
	}
	fp2=fopen(arga[2],"w");
	if(fp2==NULL){
		printf("\n Error opening the destination file..");
		getch();
		return;
	}

	while((ch=fgetc(fp1))!=EOF){
		fputc(ch,fp2);
	}
	printf("\n\nfile copied successfully...");
	fclose(fp1);
	fclose(fp2);
	getch();

}