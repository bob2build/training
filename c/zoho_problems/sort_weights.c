/* 2. Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions
    1. 5 if a perfect square
    2. 4 if multiple of 4 and divisible by 6
    3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order.

*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_square(int n)
{
  int i=1;
  while(n>0)
  {
    n-=i;
    i+=2;
  }
  if(n==0)
    return 1;
  return 0;
}

int _weight(int n)
{
  int x = 0;
  if(check_square(n))
  {
    x = 5;
  }
  if(n%4 ==0 && n%6==0)
  {
    x = 4;
  }
  if(n%2 == 0)
  {
    x = 3;
  }
  return x;
}


void print_array_with_weights(const int *array, int size)
{
  int i;

  printf("<%d,%d>", array[0], _weight(array[0]));
  for(i = 1 ; i < size; i++)
  {
    printf(", <%d,%d>", array[i], _weight(array[i]));
  }
  printf("\n");
}

void print_array(int array[], int size)
{
  int i;
  printf("%d", array[0]);
  for(i = 1 ; i < size; i++)
  {
    printf(",%d", array[i]);
  }
  printf("\n");
}


int cmp_inc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int cmp_weight(const void * a, const void * b)
{
   return ( _weight(*(int*)a) - _weight(*(int*)b));
}


#define MAX_SIZE 100
int main(int argc, char* argv[]){
  int input[MAX_SIZE];
  int len;
  int i;
  // Use input from command line parameters. The first argument is the name of
  // the program.
  if(argc == 1){
    fprintf(stderr, "Usage: \n %s <numbers seperated by space>\n", argv[0]);
    exit(1);
  }
  len = argc - 1;
  for(i = 0;i<len;i++){
    input[i] = atoi(argv[i+1]);
  }
  qsort(input, len, sizeof(int), cmp_weight);
  print_array_with_weights(input, len);
  qsort(input, len, sizeof(int), cmp_inc);
  print_array(input, len);
  return 0;
}
