#include<stdio.h>
#include<conio.h>
void main(){
	int n,abs;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	abs=(n<0) ? -n :n;
	printf("absolute value is :%d",abs);
	getch();
}