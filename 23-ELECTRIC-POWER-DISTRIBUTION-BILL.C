#include<stdio.h>
#include<conio.h>
void main(){
    char name[50];
    int units;
    float charge;
    clrscr();
    printf("Enter the customer name:");
    scanf("%s",&name);
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    if(units>=0 && units<=200){
	charge=units*0.50;
    }else if(units>=201 && units<=400){
	charge=100+(units-200)*0.65;
    }else if(units>=401 && units<=600){
	charge=230+(units-400)*0.80;
    }else{
	charge=390+(units-600)*1.00;
    }
    printf("\nBILL\n");
    printf("\n Customer name : %s",name);
    printf("\n Units consumed: %d ",units);
    printf("\n Charge to be paid :%f",charge);
    getch();
}