#include<stdio.h>
#include<conio.h>
void transpose(int a[20][20],int row,int col){
	int t[20][20],i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			t[j][i]=a[i][j];
		}
	}
	printf("Transpose of the matrix is :\n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
void main(){
	int a[20][20],row,col,i,j;
	clrscr();
	printf("Enter the size of the row and column:");
	scanf("%d %d",&row,&col);
	printf("Enter the elements into the matrix:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		    scanf("%d",&a[i][j]);
		}
	}
	transpose(a,row,col);
	getch();
}