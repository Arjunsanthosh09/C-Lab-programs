#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	FILE *fp;
	int lowercase=0,uppercase=0,special=0,digits=0;
	clrscr();
	fp=fopen("a.txt","r");
	if(fp==NULL){
		printf("Error opening the file..");
	}
	while((ch=fgetc(fp))!=EOF){
		if(ch>='a'&&ch<='z'){
			lowercase++;
		}else if(ch>='A' && ch<='Z'){
			uppercase++;
		}else if(ch>=0 && ch<=9){
			digits++;
		}else{
			special++;
		}
	}
	printf("\nLowercase characters : %d",lowercase);
	printf("\nUppercase characters : %d",uppercase);
	printf("\nNumber of digits: %d",digits);
	printf("\nSpecial Characters : %d",special);
	getch();

}