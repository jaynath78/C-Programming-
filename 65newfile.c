#include <stdio.h>
int main()
{
    int n, digit, reverse = 0;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        digits = n % 10;
        reverse = reverse * 10 + digits;
        n = n / 10;
    }
    printf("reverse=%d", reverse);
    return 0;
}