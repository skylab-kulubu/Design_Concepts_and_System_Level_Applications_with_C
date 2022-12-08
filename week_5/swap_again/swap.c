void swap_tmp(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}

void swap_xor(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

    return;
}