#include<stdio.h>
#include<conio.h>
void main(){
	int a[20],i,target,low,mid,high,n,found=0,index;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements into the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched:");
	scanf("%d",&target);
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==target){
			found=1;
			index=mid;
			break;
		}else if(a[mid]<target){
			low=mid+1;
		}else if(a[mid]>target){
			high=mid-1;
		}
	}
	if(found==1){
		printf("Element found at position %d",mid+1);
	}
	else{
		printf("Element not found...");
	}
	getch();
}