#include<stdio.h>
#include<conio.h>
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
void main(){
	int n;
	clrscr();
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
	getch();
}