#include<stdio.h>
#include<conio.h>
void main(){
	int a[20][20],b[20][20],c[20][20],i,j,k,r1,r2,c1,c2;
	clrscr();
	printf("Enter the number of rows and column of first matrix:");
	scanf("%d %d",&r1,c1);
	printf("Enter the number of rows and column of second matrix:");
	scanf("%d %d",&r1,&c2);
	printf("Enter the elements into the first matrix:");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements into the second matrix:");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}

	if(c1!=r2){
		printf("\n Matrix multiplication cannot perform\n");
	}else{
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				*(*(c+1)+j)=0;
				for(k=0;k<c1;k++){
					*(*(c+i)+j)+=(*(*(a+i)+j))*(*(*(b+i)+j));
				}
			}
		}
		printf("\nMatrix after multiplication \n\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d \t",*(*(c+i)+j));
			}
			printf("\n");
		}
	}
	getch();
}
