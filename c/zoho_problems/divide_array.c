/*
Program to divide an array into 2 parts such that the averages are same
E.g. : 4 2 3 4 2 -> [4,2,3], [4,2]
E.g. : 1 2 3 4 5 -> "Not Possible"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float add_num(float avg, int n, int num)
{
  return (avg * n + num)/(n+1);
}

float remove_num(float avg, int n, int num)
{
  return (avg * n - num)/(n-1);
}

/*
Funtion to divide the array into 2 parts such that the average is same
*/
void divide_array(const int *array, int len)
{
  int i, j, k;
  float f_avg = 0.0f;
  float r_avg;
  float sum = 0.0f;

  for(i=0;i<len;i++){
    sum += array[i];
  }
  r_avg = sum/len;

  for(i=0, j=len-1, k=0; k < (len-1);i++,j--, k++)
  {
    f_avg = add_num(f_avg, i, array[i]);
    r_avg = remove_num(r_avg, j+1, array[i]);
    if(r_avg == f_avg){
      printf("Array can be divided as [%d..%d] and [%d..%d]\n", 0, k, k+1, len-1);
      return;
    }
  }
  printf("Array cannot be divided\n");
}

#define MAX_SIZE 100
int main(int argc, char* argv[]){
  int input[MAX_SIZE];
  int len;
  int i;
  // Use input from command line parameters. The first argument is the name of
  // the program.
  if(argc == 1){
    fprintf(stderr, "Usage: \n %s <numebers seperated by space>\n", argv[0]);
    exit(1);
  }
  len = argc - 1;
  for(i = 0;i<len;i++){
    input[i] = atoi(argv[i+1]);
  }
  divide_array(input, len);
  return 0;
}
