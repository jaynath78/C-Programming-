#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the  first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a < b)
    {
        printf("a is less than b");
    }
    else
    {
        printf("both numbers are equal");
    }
    return 0;
}