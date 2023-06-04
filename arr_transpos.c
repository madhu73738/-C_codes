// To take input of two different array and print the transpose.

#include <stdio.h>

int main() 
{
    int arr1[50][50], arr2[50][50], row, column;
    printf("Enter the no of rows of the first matrix : \n");
    scanf("%d", &row);
    printf("Enter the no of columns of the first matrix : \n");
    scanf("%d", &column);
    printf("Enter the elements of array 1 (%dx%d):\n", row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the no of rows of the second matrix : \n");
    scanf("%d", &row);
    printf("Enter the no of columns of the second matrix : \n");
    scanf("%d", &column);
    printf("Enter the elements of array 2 (%dx%d):\n", row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Transpose of array 1:\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of array 2:\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", arr2[j][i]);
        }
        printf("\n");
    }

    return  0;
}