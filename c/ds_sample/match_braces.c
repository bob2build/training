#include <stdio.h>
#include <stdlib.h>
//(a+b)(2[x])
char array[100];
int tos = -1;

void push(int e)
{
  array[++tos] = e;
}

char pop()
{
  return array[tos--];
}

int is_empty()
{
  return tos == -1;
}

/* Returns 1 if character1 and character2 are matching left
   and right Parenthesis */
int isMatchingPair(char character1, char character2)
{
   if (character1 == '(' && character2 == ')')
     return 1;
   else if (character1 == '{' && character2 == '}')
     return 1;
   else if (character1 == '[' && character2 == ']')
     return 1;
   else
     return 0;
}

/*Return 1 if expression has balanced Parenthesis */
int areParenthesisBalanced(char exp[])
{
   int i = 0;

   /* Traverse the given expression to check matching parenthesis */
   while (exp[i])
   {
      /*If the exp[i] is a starting parenthesis then push it*/
      if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        push(exp[i]);

      /* If exp[i] is a ending parenthesis then pop from stack and
          check if the popped parenthesis is a matching pair*/
      if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
      {

          /*If we see an ending parenthesis without a pair then return false*/
         if (is_empty())
           return 0;

         /* Pop the top element from stack, if it is not a pair
            parenthesis of character then there is a mismatch.
            This happens for expressions like {(}) */
         else if ( !isMatchingPair(pop(), exp[i]) )
           return 0;
      }
      i++;
   }

   /* If there is something left in expression then there is a starting
      parenthesis without a closing parenthesis */
   if (is_empty())
     return 1; /*balanced*/
   else
     return 0;  /*not balanced*/
}

/* UTILITY FUNCTIONS */
/*driver program to test above functions*/
int main(int argc, char *argv[])
{
  if(argc == 1)
  {
    printf("Please pass a string in commandline\n");
    exit(1);
  }
  if (areParenthesisBalanced(argv[1]))
    printf("Balanced \n");
  else
    printf("Not Balanced \n");
  return 0;
}
