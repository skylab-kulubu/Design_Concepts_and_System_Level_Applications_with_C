#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 15

void printArray(int, int*);
void swap(int*, int*);
void recursiveBubbleSort(int, int*);

int main() {
    int i;
    int arr[SIZE];
    srand(time(NULL));
    for (i = 0; i < 15; i++) {
        arr[i] = rand()%100;
    }
    printArray(SIZE, arr);
    printf("\n\n\nSorted Version\n\n\n");
    sleep(5);
    recursiveBubbleSort(SIZE, arr);
    printArray(SIZE, arr);
    return 0;
}

void printArray(int length, int* arr){
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void recursiveBubbleSort(int length, int* arr){
    if (length == 1) {
        return;
    }
    for (int i=0; i<length-1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    recursiveBubbleSort(length-1, arr);
}