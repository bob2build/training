#include <stdio.h>

int array[100];
int tos = -1;

int push(int e)
{
  array[++tos] = e;
}

int pop()
{
  return array[tos--];
}

int is_empty()
{
  return tos == -1;
}

int main(int argc, char *argv[])
{
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  while(!is_empty())
  {
    printf("%d\n", pop());
  }
  return 0;
}
