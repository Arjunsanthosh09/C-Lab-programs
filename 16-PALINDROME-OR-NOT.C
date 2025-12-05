#include<stdio.h>
#include<conio.h>
void main(){
	int rev=0,rem,n,temp;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		rem=temp%10;
		rev*=10+rem;
		temp=temp/10;
	}
	if(n==rev){
		printf("%d is a palindrome..",n);

	}else{
		printf("%d is not a palindrome",n);
	}
	getch();
}