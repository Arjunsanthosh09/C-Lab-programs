#include<stdio.h>
#include<conio.h>
void findLarge(int a[10],int n);
void main(){
	int a[20],n,i;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	findLarge(a,n);
	getch();
}
void findLarge(int a[20],int n){
	int i,large;
	large=a[0];
	for(i=0;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	printf("\nLargest number is %d ",large);

}