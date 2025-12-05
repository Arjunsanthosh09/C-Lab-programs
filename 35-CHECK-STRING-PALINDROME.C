#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[20],rev[20],i,len,j=0;
	clrscr();
	printf("Enter the string:");
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--){
		rev[j]=str[i];
		j++;
	}
	rev[j+1]='\0';
	if(strcmp(str,rev)){
		printf("\n\nThe entered string is palindrome...");
	}else{
		printf("The entered string is not palindrome");
	}
	getch();

}