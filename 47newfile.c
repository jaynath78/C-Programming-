#include<stdio.h>
int main()
{
  char op;
  printf("enter an operator (+or-):");
  scanf("%c",&op);
  switch (op)
  {
    case '+':
    printf("you selected addition");
    break;
    case '-':
    printf("you selected subtraction");
    break;
    default:
    printf("invalid operators");
  }
  return 0;
}
    
    
    
    
    