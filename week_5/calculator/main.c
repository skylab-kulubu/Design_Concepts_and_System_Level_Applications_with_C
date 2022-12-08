#include "include/calculator.h"

// Çalıştırmak için
// gcc main.c src/calculator.c -o main && ./main

int main()
{

    float sayi1 = 5, sayi2 = 10;
    char islem = '+';

    float sonuc = calculator(sayi1, islem, sayi2);

    printf("Sonuc: %f", sonuc);
    // sayı1 işlem sayı2 = sonuc
    // result calculator(param1, islem, param2);

    return 0;
}