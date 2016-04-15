#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int ret_val;
    int a, b, c;

    ret_val = scanf("%d/%d/%d", &a, &b, &c);
    printf("Return Value : %d\n", ret_val);
    return 0;
}

