#include<stdio.h>
#include<conio.h>
void simpleinterest(float,float,float);
void main(){
	float p,t,r;
	clrscr();
	printf("enter the principal amount:");
	scanf("%f",&p);
	printf("enter the rate of intereset :");
	scanf("%f",&r);
	printf("enter the time (in years):");
	scanf("%f",&t);
	simpleinterest(p,r,t);
	getch();

}
void simpleinterest(float p,float r, float t){
	float siin;
	siin=(p*r*t)/100;
	printf("\nsimple interest =%f",siin);

}