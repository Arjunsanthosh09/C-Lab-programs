#include<stdio.h>
#include<conio.h>
void main(){
	int n,num,rem,occ=0,temp;
	clrscr();
	printf("enter the number:");
	scanf("%d",&n);
	printf("\nEnter the number to check the occurance:");
	scanf("%d",&num);
	temp=n;
	while(temp!=0){
		rem=temp%10;
		if(rem==num){
			occ++;
		}
		temp=temp/10;
	}
	printf("number of occurance of %d in the number %d is %d",num,n,occ);
	getch();
}