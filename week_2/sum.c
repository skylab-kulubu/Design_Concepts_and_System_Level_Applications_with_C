#include <stdio.h>

void topla(float, float);

int main()
{
    float num1, num2;

    printf("num1: ");
    scanf("%f", &num1);

    printf("num2: ");
    scanf("%f", &num2);

    topla(num1, num2);

    return 0;
}

void topla(float a, float b)
{
    printf("%f\n", a + b);
    return;
}