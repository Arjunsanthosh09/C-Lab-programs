#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,start,end,flag;
	clrscr();
	printf("enter the starting range:");
	scanf("%d",&start);
	printf("Enter the ending range:");
	scanf("%d",&end);
	printf("Prime number starting from %d to %d is :",start,end);
	printf("\n");
	for(i=start;i<=end;i++){
		if(i<2){
			continue;
		}
		flag=0;

		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ,\t",i);
	}       }

	getch();
}