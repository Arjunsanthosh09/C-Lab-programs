#include<stdio.h>
#include<conio.h>
#include<string.h>
struct personaldata{
	char name[20];
	char address[30];
	char phone[10];
};
struct personaldata pd[20];
void Getdetails(int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n\nEnter the deatils of the %d person.",i+1);
		printf("\n\nEnter Name :");
		scanf("%s",&pd[i].name);
		printf("Enter Address :");
		scanf("%s",&pd[i].address);
		printf("Enter the phone number :");
		scanf("%s",&pd[i].phone);
	}
}
void searchperson(int n){
	int found=0,i;
	char search[20];

	printf("\n\nEnter the name you want to search:");
	scanf("%s",&search);

	for(i=0;i<n;i++){
		if(strcmp(pd[i].name,search)==0){
		    found=1;
		    printf("\n\nDetails of the person\n");
		    printf("\nPerson Name : %s ",pd[i].name);
		    printf("\nPerson Address : %s",pd[i].address);
		    printf("\nPerson Phone number :%s",pd[i].phone);
		    break;
		}
	}
	if(!found){
		printf("Person details not found .....");
	}
}
void main(){
	int n;
	clrscr();
	printf("Enter the number of deatils you want to insert:");
	scanf("%d",&n);
	Getdetails(n);
	searchperson(n);
	getch();
}