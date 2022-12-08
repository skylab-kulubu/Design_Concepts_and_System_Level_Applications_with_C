#include "swap.h"
#include <stdio.h>

//Çalıştırmak için
// make && ./main

int main()
{
    int num1 = 9;
    int num2 = 6;

    printf("num1: %d num2: %d\n", num1, num2);

    swap_tmp(&num1, &num2);
    printf("Tmp swap:\n");
    printf("num1: %d num2: %d\n", num1, num2);

    swap_xor(&num1, &num2);
    printf("XOR Swap\n");
    printf("num1: %d num2: %d\n", num1, num2);

    return 0;
}