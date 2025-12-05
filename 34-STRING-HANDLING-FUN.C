#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
    char str1[20], str2[20], str3[40];
    int len;

    clrscr();

    printf("\nStrlen function...\n");
    printf("Enter the string : ");
    gets(str1);
    len = strlen(str1);
    printf("Length of %s is %d", str1, len);

    printf("\n\nStrcpy function..\n");
    printf("Enter the source string : ");
    gets(str1);
    strcpy(str2, str1);
    printf("Copied string is %s", str2);

    printf("\n\nstrcat function..\n\n");
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);

    strcpy(str3, str1);
    strcat(str3, str2);      

    printf("Concatenated string is : %s", str3);

    printf("\n\nstrcmp function...\n\n");
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal..");
    else
        printf("Both strings are not equal..");

    printf("\n\nstrrev function..\n\n");
    printf("Enter the string : ");
    gets(str1);

    strrev(str1); 
    printf("Reverse of the string is %s", str1);

    getch();
}
