
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int n,rem=0,num=0,arm=0,t,t1;
	clrscr();
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	t1=n;
	while(t!=0){
		t=t/10;
		num++;
	}
	while(t1!=0){
		rem=t1%10;
		arm=arm+(int)pow(rem,num);
		t1=t1/10;
	}
	if(n==arm){
		printf("\n%d is armstrong",arm);
	}
	else{
		printf("\nit is not armstrong.");
	}
	getch();
}