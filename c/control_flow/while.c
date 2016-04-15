#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, n;
    if (argc == 1)
        n = 5;
    else
        n = atoi(argv[1]);

	i = 0;
    while(i < n)
    {
        //if( i == 2) break;
        //if( i == 2) continue; 
        printf("Running Iteration : %d\n", i);
        i++;
    }
    return 0;
}

