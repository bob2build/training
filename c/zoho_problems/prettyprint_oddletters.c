/*
Program to print the word with odd letters as
P     M
 R   A
  O R
   G
  O R
 R   A
P     M
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Funtion to print the string custom pretty format
*/
void pretty_print(const char *word)
{
  int i, j, k;
  int len;
  len = strlen(word);

  /* Let n be the length of the string. We need to print n rows each with
    2 characters each (forward and reverse)*/

  // Outer loop to print n rows. i,j point to charater to be printed at kth row.
  for(i=0, j=len-1; i < len;i++,j--)
  {
    // Inner loop. Print each row. Fill with empty space except the posisions
    // of characters.
    for(k=0;k<len;k++)
    {
      if(i == j && k==i)
      {
        putchar(word[i]);
      }
      else if(i==k)
      {
        putchar(word[i]);
      }
      else if (j==k)
      {
        putchar(word[j]);
      }
      else
      {
        putchar(' ');
      }
    }
    putchar('\n');
  }
}

int main(int argc, char* argv[]){
  char *input = NULL;
  int len;
  // Use input from command line parameters. The first argument is the name of
  // the program.
  if(argc <= 1 || argc > 2){
    fprintf(stderr, "Usage: \n %s <word to print>\n", argv[0]);
    exit(1);
  }
  len = strlen(argv[1]);
  if(len%2 == 0){
    fprintf(stderr, "Length of the string must be odd\n");
    exit(1);
  }
  pretty_print(argv[1]);
  return 0;
}
