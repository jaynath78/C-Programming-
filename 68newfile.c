#include <stdio.h>
int main()
{
    // count the digits of a number
    int n, count = 0;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("total digits=%d", count);
    return 0;
}