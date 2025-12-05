#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[20][50],temp[20],i,j,n;
	clrscr();
	clrscr();
	printf("Enter the number of string:");
	scanf("%d",&n);
	printf("Enter the strings :");
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("Sorted string is :\n");
	for(i=0;i<n;i++){
	     printf("%s\n",str[i]);
	}
	getch();
}