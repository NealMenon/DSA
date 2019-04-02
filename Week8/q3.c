
#include<stdio.h>
#include<stdlib.h>
#define bool int

/* structure of a stack node */
typedef struct sNode
{
   char data;
   struct sNode *next;
}node;

node* top_ref = NULL;
/* Function to push an item to stack*/
void push(int new_data);

/* Function to pop an item from stack*/
int pop();

/* Returns 1 if character1 and character2 are matching left
   and right Parenthesis */
bool isMatchingPair(char character1, char character2)
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
bool areParenthesisBalanced(char exp[])
{
   int i = 0;

   /* Declare an empty character stack */


   /* Traverse the given expression to check matching parenthesis */
   while (exp[i])
   {
      /*If the exp[i] is a starting parenthesis then push it*/
      if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        push(exp[i]);

      /* If exp[i] is an ending parenthesis then pop from stack and
          check if the popped parenthesis is a matching pair*/
      if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
      {

          /*If we see an ending parenthesis without a pair then return false*/
         if (top_ref == NULL)
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
   if (top_ref == NULL)
     return 1; /*balanced*/
   else
     return 0;  /*not balanced*/
}

/* UTILITY FUNCTIONS */
/*driver program to test above functions*/
int main()
{
  char exp[100];
  scanf("%s",exp);

  if (areParenthesisBalanced(exp))
    printf("Balanced \n");
  else
    printf("Not Balanced \n");
  return 0;
}

/* Function to push an item to stack*/
void push(int new_data)
{
  /* allocate node */
  node* new_node = malloc(sizeof(node));

  if (new_node == NULL)
  {
     printf("Stack overflow n");
     exit(0);
  }

  /* put in the data  */
  new_node->data  = new_data;

  /* link the old list off the new node */
  new_node->next = top_ref;

  /* move the head to point to the new node */
  top_ref   = new_node;
}

/* Function to pop an item from stack*/
int pop()
{
  char res;
  struct sNode *top;

  /*If stack is empty then error */
  if (top_ref == NULL)
  {
     printf("Stack overflow n");
     exit(0);
  }
  else
  {
     top = top_ref;
     res = top->data;
     top_ref = top->next;
     free(top);
     return res;
  }
}
