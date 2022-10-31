#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE_A 6
#define COMMON_SIZE 5
#define SIZE_B 4

void printMatrix(int **, int, int);

int main()
{
    int **mat1;
    int **mat2;
    int **result;
    int i, j, k;

    mat1 = (int **)malloc(SIZE_A * sizeof(int *));
    for (int i = 0; i < SIZE_A; i++)
    {
        mat1[i] = (int *)malloc(COMMON_SIZE * sizeof(int));
    }

    mat2 = (int **)malloc(COMMON_SIZE * sizeof(int *));
    for (int i = 0; i < COMMON_SIZE; i++)
    {
        mat2[i] = (int *)malloc(SIZE_B * sizeof(int));
    }

    result = (int **)malloc(SIZE_A * sizeof(int *));
    for (int i = 0; i < SIZE_A; i++)
    {
        result[i] = (int *)malloc(SIZE_B * sizeof(int));
    }

    srand(time(NULL));

    for (i = 0; i < SIZE_A; i++)
    {
        for (j = 0; j < COMMON_SIZE; j++)
        {
            mat1[i][j] = rand() % 100;
        }
    }
    for (i = 0; i < COMMON_SIZE; i++)
    {
        for (j = 0; j < SIZE_B; j++)
        {
            mat2[i][j] = rand() % 100;
        }
    }

    printf("Matrix 1:\n");
    printMatrix(mat1, SIZE_A, COMMON_SIZE);
    printf("\n\n");

    printf("Matrix 2:\n");
    printMatrix(mat2, COMMON_SIZE, SIZE_B);
    printf("\n\n");

    for (int i = 0; i < SIZE_A; i++)
    {
        for (int j = 0; j < SIZE_B; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < COMMON_SIZE; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    printMatrix(result, SIZE_A, SIZE_B);

    return 0;
}

void printMatrix(int **mat, int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
