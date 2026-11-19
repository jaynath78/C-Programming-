#include <stdio.h>
int main()
{
    // check whether pallindrome or not
    int n, digit, orignal,reverse = 0;
    printf("enter the number:");
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
        printf("pallondrome number");
    }
    else
    {
        printf("not pallindrome");
    }
    return 0;
}