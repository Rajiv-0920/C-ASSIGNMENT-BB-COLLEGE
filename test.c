#include <stdio.h>

int main()
{
    int mat1[100][100];
    int mat2[100][100];
    int sum[100][100];
    int row = 3, col = 3, i, j;

    printf("\nEnter the value of First matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter the value of Second matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nSum Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}