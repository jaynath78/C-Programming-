#include <stdio.h>
int main()

{
    // sum of digits of a number
    int n, digit, sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("sum of digit=%d", sum);
    return 0;
}