#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 15

void printArray(int, int *);
void swap(int *, int *);

int main()
{
    int i, j;
    int arr[SIZE];
    srand(time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    printArray(SIZE, arr);
    printf("\n\n\nSorted Version\n\n\n");
    sleep(5);

    for (i = 0; i < SIZE - 1; i++)
    { // Last i elements are already in place
        for (j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printArray(SIZE, arr);
    return 0;
}

void printArray(int length, int *arr)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}