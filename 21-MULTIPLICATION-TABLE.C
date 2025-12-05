#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,mult;
	clrscr();
	printf("enter the number (for mutiplication table):");
	scanf("%d",&n);
	printf("Multiplication table of %d is :\n",n);
	for(i=1;i<=10;i++){
		mult=i*n;
		printf("%d * %d =%d \n",i,n,mult);
	}
	getch();
}