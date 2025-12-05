#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main(){
	int r;
	float area,perimeter;
	clrscr();
	printf("Enter the radius of the circle:");
	scanf("%d",&r);
	area=pi*r*r;
	perimeter=2*pi*r;
	printf("Area of the circle is %f",area);
	printf("\nPerimeter of the circle is %f",perimeter);
	getch();
}