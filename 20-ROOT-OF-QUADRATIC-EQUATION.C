#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float a, b, c, root1, root2, real, img, disc;
    clrscr();
    printf("Enter the coefficients (a b c): ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\nRoots are real and different:\n");
        printf("Root1 = %f\nRoot2 = %f", root1, root2);
    }
    else if (disc == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\nRoots are real and equal:\n");
        printf("Root1 = %f\nRoot2 = %f", root1, root2);
    }
    else {
        real = -b / (2 * a);
        img = sqrt(-disc) / (2 * a);
        printf("\nRoots are complex:\n");
        printf("Root1 = %f + %fi\nRoot2 = %f - %fi", real, img, real, img);
    }
    getch();
}
