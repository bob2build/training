#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        printf("The first Argument is %s\n", argv[1]);   
    } else {
        printf("The name of this executable is %s\n", argv[0]);
    }
    return 0;
}

