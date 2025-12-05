#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0,sqsum=0,i=1;
	clrscr();
	printf("enter the limit:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		sqsum=sqsum+(i*i);
		i++;
	}
	printf("sum of first %d numbers is %d",n,sum);
	printf("\nSum of the square of the first %d natural number is %d",n,sqsum);
	getch();
}