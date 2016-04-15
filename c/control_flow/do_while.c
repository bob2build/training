#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n;
    do
    {
        printf("Enter a value between 1 to 5...\n");
        scanf("%d", &n);
    } while(n > 5 || n < 1);
    printf("You have entered %d\n", n);
    return 0;
}

