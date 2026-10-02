#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n %2)
    {
        printf("divisible by 2\n");
    }
    else if (n % 3)
    {
        printf("divisible by 3\n");
    }
    else if (n %4)
    {
        printf("divisible by 4\n");
    }
    else
    {
        printf("not divisible by 2,3,4");
    }
    return 0;
}