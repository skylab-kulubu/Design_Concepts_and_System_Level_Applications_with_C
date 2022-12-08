#include "../include/calculator.h"

float calculator(float param1, char islem, float param2)
{
    switch (islem)
    {
    case '+':
        return param1 + param2;

    case '-':
        return param1 - param2;

    case '/':
        return param1 / param2;

    case '*':
        return param1 * param2;

    default:
        printf("Input's are problematic.\n");
        return 0;
    }
}