#include<stdio.h>
#include<conio.h>
void main(){
	char str[30],str2[30],i=0,len=0,j=0;
	clrscr();
	printf("Enter the first string:");
	scanf("%s",str);
	printf("Enter the second string:");
	scanf("%s",str2);
	while(str[i]!='\0'){
	    len++;
		i++;
	}
	while(str2[j]!='\0'){
		str[len]=str2[j];
		j++;
		len++;
	}
	str[len]='\0';
	printf("\n\nConcatenated String is :%s",str);
	getch();

}