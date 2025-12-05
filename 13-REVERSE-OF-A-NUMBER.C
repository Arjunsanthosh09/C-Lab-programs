#include<stdio.h>
#include<conio.h>
void main(){
	int n,rev=0,rem;
	clrscr();
	printf("enter the number :");
	scanf("%d",&n);
	while(n!=0){
	  rem=n%10;
	  rev=rev*10+rem;
	  n=n/10;
	}
	printf("reverse of the number is %d",rev);
	getch();

}