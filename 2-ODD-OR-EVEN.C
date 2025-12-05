#include<stdio.h>
#include<conio.h>
void main(){
	  int n;
	  clrscr();
	  printf("Enter the number :");
	  scanf("%d",&n);
	  if(n%2==0){
		printf("%d is an even number.");
	  }else{
		printf("%d is an odd number.");
	  }
	  getch();
}