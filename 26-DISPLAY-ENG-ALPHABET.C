#include<stdio.h>
#include<conio.h>
void main(){
	char c;
	clrscr();
	printf("Alphabets from A to Z is:\n");
	for(c='A';c<='Z';c++){
		printf("%c \t",c);
	}
	getch();
}