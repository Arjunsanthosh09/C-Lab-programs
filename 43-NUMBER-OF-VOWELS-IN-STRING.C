#include<stdio.h>
#include<conio.h>
void main(){
	char str[20],i,count=0;
	clrscr();
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
			count++;
		}
	}
	printf("Number of vowels in a string is %d",count);
	getch();
}