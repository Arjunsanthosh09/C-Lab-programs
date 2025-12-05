#include<stdio.h>
#include<conio.h>
void swapbyvalue(int n1,int n2){
	int swap;
	printf("Call by value :\n");
	swap=n1;
	n1=n2;
	n2=swap;
	printf("Value after swap is :\n n1=%d\nn2=%d",n1,n2);

}
void swapbyrefer(int *n1,int *n2){
	int swap;
	printf("\n\nCall by reference..\n");
	swap=*n1;
	*n1=*n2;
	*n2=swap;
	printf("Value after swap is :\n n1=%d\n n2=%d",*n1,*n2);

}
void main(){
	int n1,n2;
	int *b1,*b2;
	clrscr();
	printf("Enter the two numbers :");
	scanf("%d %d",&n1,&n2);
	b1=&n1;
	b2=&n2;
	swapbyvalue(n1,n2);
	swapbyrefer(b1,b2);
	getch();
}