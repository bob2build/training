#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main(int argc, char* argv[])
{
    int n;
    int i, j;
    int min;
    int min_index;
    int array[MAX_SIZE];
    
    char str1[] = "test";
    char str2[] = {'t', 'e', 's' ,'t'};
    
    n = argc - 1;
    for(i = 0; i < n; i++)
        array[i] = atoi(argv[i+1]);
    
    for(i = 0; i < n; i++)
    {
        min = array[i];
        min_index = i;
        for( j = i+1; j < n; j++)
        {
            if(array[j] < min){
                min = array[j];
                min_index = j;
            }            
        }
        array[min_index] = array[i];
        array[i] = min;
    }
    for( i = 0; i < n; i++){
        printf("%d ", array[i]);    
    }
    printf("\n");
    return 0;
}

