// To check a given matrix is identity matrix or not.

#include <stdio.h>
#define N 3

int main() 
{
int matrix[N][N];
int i, j;
printf("Enter the elements of the matrix (%dx%d):\n", N, N);
for (i = 0; i < N; i++) 
{
    for (j = 0; j < N; j++) 
    {
        scanf("%d", &matrix[i][j]);
    }
}
int is_identity = 1;
for (i = 0; i < N; i++) 
{
    for (j = 0; j < N; j++) 
    {
        if (i == j) 
        {
            if (matrix[i][j] != 1) 
            {
                is_identity = 0;
                break;
            }
        } 
        else 
        {
            if (matrix[i][j] != 0) 
            {
                is_identity = 0;
                break;
            }
        }
    }
    if (is_identity == 0) 
    {
        break;
    }
}
    if (is_identity) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }
return 0;
}