#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Please enter the number 1: ");
    scanf("%d", &num1);
    printf("Please enter the number 2: ");
    scanf("%d", &num2);

    int result = sum(num1, num2);
    printf("Result: %d\n", result);

    printf("Result2: %d\n", sum(num1, num2));

    return 0;
}