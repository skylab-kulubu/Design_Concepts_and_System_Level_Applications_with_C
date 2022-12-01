#include <stdio.h>

int main()
{
    int x;
    x = 56;

    int *x_ptr = &x;

    printf("%d, %p, %p, %d, %p", x, &x, x_ptr, *x_ptr, &x_ptr);

    return 0;
}