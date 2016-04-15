#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main(int argc, char* argv[])
{
    //char str1[] = "test";
    char str2[] = {'t', 'e', 's' ,'t'};
    
    //printf("Str 1 : %s\n", str1);
    printf("Str 2 : %s\n", str2);
    printf("%u\n", sizeof(str2));
    return 0;
}

