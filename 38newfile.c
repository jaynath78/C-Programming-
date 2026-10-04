#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    if (!(n > 10))
    {
        printf("number is not greater than 10");
    }
    else
    {
        printf("number is greater than 10");
    }
    return 0;
}