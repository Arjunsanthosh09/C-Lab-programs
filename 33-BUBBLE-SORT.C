#include<stdio.h>
#include<conio.h>
void display(int a[20],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
}
void main(){
	int a[20],n,i,j,temp;
	clrscr();
	printf("Ente the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements into the array :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nArray before sorting..\n");
	display(a,n);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n\nArray after sortingg..\n");
	display(a,n);
	getch();


}