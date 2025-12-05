#include<stdio.h>
#include<conio.h>
void main(){
	char str[20],str2[20],i,len,j=0;
	clrscr();
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		str2[j]=str[i];
		j++;
	}
	str2[j+2]='\0';
	printf("copied string is %s",str2);
	getch();

}