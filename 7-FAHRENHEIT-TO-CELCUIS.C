#include<stdio.h>
#include<conio.h>
void main(){
	float f,cel;
	clrscr();
	printf("enter the fahrenheit:");
	scanf("%f",&f);
	cel=(f-32)*(5.0/9.0);
	printf("%f fahrenheit converted to celsius is %f c",f,cel);
	getch();
}