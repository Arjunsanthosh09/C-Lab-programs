#include<stdio.h>
#include<conio.h>
void main(){
	char str[20],len=0,i;
	clrscr();
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("length of the entered string is %d",len);
	getch();
}




