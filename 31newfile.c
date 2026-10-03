#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("greater than 10");
    }
    else if (n < 10)
    {
        printf("less than 10");
    }
    else
    {
        printf("equal to 10");
    }
    return 0;
}