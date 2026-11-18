#include <stdio.h>
int main()

{
    int n, digit, orignal, reverse = 0 printf("enter a number:");
    scanf("%d", &n);
    orignal = n;
    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (orignal == reverse)
    {
        printf("pallindrome number");
    }
    else
    {
        printf("not pallindrome number:");
    }
    return 0;
}