#include<stdio.h>
#include<conio.h>
void insertElement(int *,int *);
void delete(int *,int *);
void display(int *,int *);
void main(){
	int a[20],n,choice,i;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the elements into the array :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	do{
		printf("\n\n Select the operation you want to perform");
		printf("\n1.Insetion and element \n.2.Deletion \n3.Display \n4.Exist\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice){
			case 1:
			insertElement(a,&n);
			break;
			case 2:
			delete(a,&n);
			break;
			case 3:
			display(a,&n);
			break;
			case 4:
			printf("\n Program Existing....");
			break;
			default:
			printf("\n Invalid choice:");

		}


	}while(choice!=4);



	getch();
}
void insertElement(int *a,int *n){
	int pos,num,i;
	printf("\n Enter the position you want to insert :");
	scanf("%d",&pos);
	printf("\n Enter the element you want to insert :");
	scanf("%d",&num);
	for(i=*n;i>pos;i--){
		a[i]=a[i-1];

	}
	a[pos]=num;
	(*n)++;
	printf("\n\nInsertion operation successfull...");
}
void display(int *a,int *n){
	int i;
	printf("\n Elements in the array are\n:");
	for(i=0;i<*n;i++){
		printf("%d\t ",a[i]);
	}
}
void delete(int *a,int *n){
	int pos,i;
	printf("\n\nEnter the position you want to delete:");
	scanf("%d",&pos);
	for(i=pos;i<*n-1;i++){
		a[i]=a[i+1];

	}
	(*n)--;
	printf("Delete operations successfull....\n\n");
}
