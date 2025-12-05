#include<stdio.h>
#include<conio.h>
void main(){
	int a[20],n,i,target,found=0,index;
	clrscr();
	printf("Enter the size of the array :");
	scanf("%d",&n);
	printf("Enter the elements into the array :");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&target);

	for(i=0;i<n;i++){
		if(a[i]==target){
			found=1;
			index=i;
		}
	}
	if(found==1){
		printf("Element found at postion %d",index+1);
	}else{
		printf("Element not found...");
	}
	getch();
}