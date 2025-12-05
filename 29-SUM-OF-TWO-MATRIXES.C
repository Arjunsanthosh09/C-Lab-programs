#include <stdio.h>
void readMatrix(int matrix[20][20], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[20][20], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
	for (j = 0; j < cols; j++) {
	    printf("%d\t", matrix[i][j]);
	}
	printf("\n");
    }
}

void addMatrix(int a[20][20], int b[20][20], int sum[20][20], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
	for (j = 0; j < cols; j++) {
	    sum[i][j] = a[i][j] + b[i][j];
	}
    }
}
void main() {
    int a[20][20], b[20][20], sum[20][20];
    int rows, cols;
    clrscr();
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of first matrix:\n");
    readMatrix(a, rows, cols);

    printf("\nEnter elements of second matrix:\n");
    readMatrix(b, rows, cols);

    addMatrix(a, b, sum, rows, cols);

    printf("\nSum of the two matrices:\n");
    displayMatrix(sum, rows, cols);

    getch();
}

