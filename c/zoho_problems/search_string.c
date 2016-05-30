#include<stdio.h>

char array[5][5] = { "WELCO", "METOZ", "OHOCO", "RPORA", "TION" };

int match_row(char text[], char pattern[]) {
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

void search(const char *search)
{

}

int main(int argc, char* argv[])
{

  return 0;
}
