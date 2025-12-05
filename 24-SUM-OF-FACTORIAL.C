#include<stdio.h>
#include<conio.h>
int factorial(int);
void main(){
	int n,i,sum=0;
	clrscr();
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("sum of the factorial is :");
	for(i=1;i<=n;i++){
		sum+=factorial(i);
	}
	printf("Sum of the factorial is %d",sum);
	getch();
}
int factorial(int a){
	int fact=1,i;
	for(i=1;i<=a;i++){
		fact*=i;
	}
	return fact;
}