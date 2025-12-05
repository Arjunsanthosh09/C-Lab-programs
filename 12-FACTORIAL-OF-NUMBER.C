#include<stdio.h>
#include<conio.h>
void main(){
	int fac=1,n,i;
	clrscr();
	printf("Enter the number for finding factorial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	       fac*=i;
	}
	printf("Factorial of %d is %d",n,fac);
	getch();
}