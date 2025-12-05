//arithemetic operation using c
#include<stdio.h>
#include<conio.h>
void main(){
	int choice,n1,n2,val;
	clrscr();
	printf("enter two number: ");
	scanf("%d,%d",&n1,&n2);
	printf("\n Choice are: \n 1. addtion \n 2.substraction \n3.multiplication \n 4. Division \n 5.Reminder\n\n");
	printf("\n Enter your choice :");
	scanf("%d",&choice);
	switch(choice){
			case 1 :
			val=n1+n2;
			printf("\n sum of %d and %d is : %d",n1,n2,val);
			break;

			case 2:
				val=n1-n2;
				printf("\n substraction of %d and %d is : %d",n1,n2,val);
				break;

			case 3:
				val=n1*n2;
				printf("\n Multiplication of %d and %d is : %d",n1,n2,val);
				break;

			case 4:
				val=n1/n2;
				printf("\n Division of %d and %d is : %d",n1,n2,val);
				break;

			case 5:
				val=n1%n2;
				printf("\n Reminder of %d and %d is : %d",n1,n2,val);
				break;

			default:
				printf("Enter a valid choice ");

	}
	getch();
}