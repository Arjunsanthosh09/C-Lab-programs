#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,temp;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("\nNumber before swap : \nn1=%d \nn2=%d",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nNumbers after swap:\nn1=%d\nn2=%d",n1,n2);
	getch();
}