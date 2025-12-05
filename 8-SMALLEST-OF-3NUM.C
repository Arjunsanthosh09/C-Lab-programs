#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3;
	clrscr();
	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1<n2 && n1<n3){
		printf("%d is smallest.",n1);
	}else{
		if(n2<n3 && n2<n1){
			printf("%d is smallest",n2);
		}else{
			printf("%d is smallest",n3);
		}
	}
	getch();
}