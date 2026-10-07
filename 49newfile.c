#include <stdio.h>
int main()
{
    char op;
    printf("enter an operator(+,-,×,/)");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("you sleceted addition");
        break;
    case '-':
        printf("you sleceted subtraction");
        break;
    case '*':
        printf("you sleceted multiplication");
        break;
    case '/':
        printf("you sleceted division");
        break;
    default:
        printf("invalid");
    }
    return 0;
}