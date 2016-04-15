#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int ret_val;
    ret_val = printf("%s\n", argv[1]);
    printf("Return Value : %d\n", ret_val); 
    return 0;
}


