#include <stdio.h>

void swap(int *a, int *b)
{
    printf("a: %p b: %p, &a: %d &b: %d\n", a, b, *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("a: %p b: %p, &a: %d &b: %d\n\n", a, b, *a, *b);
}

int main()
{
    int a = 5;
    int b = 9;
    printf("a: %d b: %d, &a: %p &b: %p\n\n", a, b, &a, &b);
    swap(&a, &b);
    printf("a: %d b: %d, &a: %p &b: %p\n", a, b, &a, &b);
}