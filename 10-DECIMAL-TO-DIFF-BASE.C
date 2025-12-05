#include<stdio.h>
#include<conio.h>
long dectooctal(int);
void main(){
	int dec,choice;
	long octal;
	clrscr();
	printf("enter the decimal number :");
	scanf("%d",&dec);
	printf("Selct your conversion type:\n 1.decimal to octal\n 2.decimal to hexadecimal\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		octal=dectooctal(dec);
		printf("octal equivalent of %d is %ld.",dec,octal);
		break;

		case 2:
		printf("\n hexadecimal equivalent of %d is %X",dec,dec);
		break;

		default:
		printf("\n invalid choice....");
		break;

	}
	getch();
}
long dectooctal(int dec){
	int rem=0;
	long octalval=0;
	long octalnum=1;
	while(dec!=0){
		rem=dec%8;
		octalval=octalval+(octalnum*rem);
		octalnum=octalnum*10;
		dec=dec/8;

	}
	return octalval;

}