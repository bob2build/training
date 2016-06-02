#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char array[5][5] = { "WELCO", "METOZ", "OHOCO", "RPORA", "TION " };

int match_row(const char *text, const char *pattern) {
  int c, d, e, text_length, pattern_length, position = -1;

  text_length    = strlen(text);
  pattern_length = strlen(pattern);

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;

    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }

  return -1;
}

int match_column(int column_index, const char *pattern) {
  int c, d, e, text_length, pattern_length, position = -1;

  text_length    = 5;
  pattern_length = strlen(pattern);

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;

    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == array[e][column_index]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }

  return -1;
}


void search(const char *str)
{
  int i;
  int len = strlen(str);
  for(i=0;i<5;i++){
    int match = match_row(array[i], str);
    if(match != -1){
      printf("Start Index < %d, %d> \n", i, match);
      printf("End Index < %d, %d> \n", i, match + len);
      return;
    }
  }
  for(i=0;i<5;i++){
    int match = match_column(i, str);
    if(match != -1){
      printf("Start Index < %d, %d> \n", match, i);
      printf("End Index < %d, %d> \n", match, i + len);
      return;
    }
  }

  printf("Match Not Found\n");
}

int main(int argc, char* argv[])
{
  // Use input from command line parameters. The first argument is the name of
  // the program.
  if(argc <= 1 || argc > 2){
    fprintf(stderr, "Usage: \n %s <word to search>\n", argv[0]);
    exit(1);
  }
  search(argv[1]);
  return 0;
}
