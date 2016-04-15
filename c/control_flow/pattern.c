#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i,j,n;
    if (argc == 1)
        n = 10;
    else
        n = atoi(argv[1]);

    for( i = 0; i <= n/2; i++)
    {
		for( j = 0; j < n; j++)
		{
			if(j > (n/2 -i) && (j < (n/2 + i))){
				printf("*");
			} else 
			{
					printf(" ");				
			}	
		}
		printf("\n");
    }
    for( i = 0; i <= n/2; i++)
    {
		for( j = 0; j < n; j++)
		{
			if(j <= i)
			{
				printf(" ");
			} else 
			{
				if(j < (n - i))
					printf("*");
				
			}	
		}
		printf("\n");
    }
    return 0;
}
