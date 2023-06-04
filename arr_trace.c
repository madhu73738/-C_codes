// To find trace of a matrix.

#include <stdio.h>
#define N 3
int main() 
{
    int matrix[N][N];
    int i, j;
    int trace = 0;
    printf("Enter the elements of the matrix (%dx%d):\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        trace += matrix[i][i];
    }
    printf("The trace of the matrix is %d.\n", trace);
    return  0;
}