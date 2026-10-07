#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    printf("\n1,addition");
    printf("\n2,subtraction");
    printf("\n3,multiplication");
    printf("\n4,division");
    printf("\n Enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("result=%d", a + b);
        break;
    case 2:
        printf("result=%d", a - b);
        break;
    case 3:
        printf("result=%d", a * b);
        break;
    case 4:
        printf("result=%d", a / b);
        break;
    default:
        printf("invalid ");
    }
    return 0;
}