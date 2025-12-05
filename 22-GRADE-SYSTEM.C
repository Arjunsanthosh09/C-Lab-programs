#include<stdio.h>
#include<conio.h>
void main(){
	char c[20];
	float obtmark,tomark,perc;
	clrscr();
	printf("Enter the student name:");
	gets(c);
	printf("Enter the obtained mark: ");
	scanf("%f",&obtmark);
	printf("Enter the total mark(mark in 100 for a subject): ");
	scanf("%f",&tomark);
	perc=(obtmark/tomark)*100;
	printf("\n\nMark deatils of the student is");
	puts(c);
	printf("\nObtained Mark : %f",obtmark);
	printf("\nTotal Mark : %f",tomark);
	printf("\nPercentage : %f",perc);

	if(perc>=90 && perc<=100){
		printf("\n Grade : A+");
	}else if(perc>=75 && perc<=89){
		printf("\n Grade : A");
	}else if(perc>=65 && perc<=74){
		printf("\n Grade : B+");
	}else if(perc>=55 && perc<=64){
		printf("\n Grade : B");
	}else if(perc>=45 && perc<=54){
		printf("\n Grade : C");
	}else if(perc>=35 && perc<=44){
		printf("\n Grade : D");
	}else{
		 printf("\n Grade : E");;
	}
	getch();
}
