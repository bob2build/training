#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char* argv[])
{
    // Simple program to implement basic calculator functions
    int arg1, arg2, result;
    if( argc == 1)
    {
        printf("Usage %s function arguments...\n", argv[0]);
        exit(0);
    } 

    // Convert the arguments from string to integers
    switch(argc)
    {
    case 4:
        arg1 = atoi(argv[2]);
        arg2 = atoi(argv[3]);
        break;
    case 3:
    case 2:
    default:
        fprintf(stderr, "Insufficient Arguments provided\n");
        exit(1);
    }

    if( strcmp("add", argv[1]) == 0)
    {
        result = arg1 + arg2;
    } 
    else if( strcmp("sub", argv[1]) == 0)
    {
        result = arg1 - arg2;
    }
    else if( strcmp("mul", argv[1]) == 0)
    {
        result = arg1 * arg2;
    }
    else if( strcmp("div", argv[1]) == 0)
    {
        result = arg1 / arg2;
    }
    else
    {
        fprintf(stderr, "Command %s not found\n", argv[1]);
        exit(1);
    }
    printf("%d\n", result);
    return 0;
}

