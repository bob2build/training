#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char* argv[])
{
    int a = 1, b = 2;
    int *x = &a;
    int *y = &b;

    printf("Before swap(): a : %d b : %d\n", a, b);
    printf("Before swap(): x : %lu y : %lu\n", x, y);
    swap(x, y);
    printf("After swap(): %d %d\n", a, b);
    printf("After swap(): x : %lu y : %lu\n", x, y);
    return 0;
}

