
#include<stdio.h>
#include<conio.h>
void main(){
	float m1,m2,m3,m4,m5;
	char name[20];
	float total,avg;
	clrscr();
	printf("enter your name:");
	gets(name);
	printf("Enter the mark of 5 subjects:");
	scanf("%f,%f,%f,%f,%f",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	avg=total/5;
	printf("\n\nmark deatils of student ");
	puts(name);
	printf("mark 1:%f \n mark 2:%f \n mark 3:%f \n mark 4:%f \n mark 5:%f\n",m1,m2,m3,m4,m5);
	printf("Total mark : %f",total);
	printf("\nAvergae mark :%f",avg);
	getch();
}