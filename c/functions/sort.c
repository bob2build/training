#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10

int find_min_index(int array[], int start_index, int end_index)
{
    int i;
    int min_index = start_index;
    for(i = start_index + 1; i < end_index; i++)
        if(array[i] < array[min_index])
            min_index = i;
    return min_index;
}

void sort(int array[], int size)
{
    int min_index, temp, i;
    for(i = 0; i < size; i++)
    {
        min_index = find_min_index(array, i, size);
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

int main(int argc, char* argv[])
{
    int n;
    int i, j;
    int min;
    int min_index;
    int array[MAX_SIZE];
    
    n = argc - 1;
    for(i = 0; i < n; i++)
        array[i] = atoi(argv[i+1]);
    
    sort(array, n);
    for( i = 0; i < n; i++){
        printf("%d ", array[i]);    
    }
    printf("\n");
    return 0;
}

