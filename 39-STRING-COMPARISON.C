#include<stdio.h>
#include<conio.h>
void main(){
	char str[50],str2[50];
	int found=0,i=0;
	clrscr();
	printf("Enter the first string :");
	gets(str);
	printf("Enter the second string :");
	gets(str2);
	while(str[i]!='\0'||str2[i]!='\0'){
		if(str[i]!=str2[i]){
			found=1;
			break;
		}
		i++;
	}
	if(found==1){
		printf("Entered two strings are not equal..");
	}else{
		printf("Entered two strings are equal..");
	}
	getch();
}