#include <stdio.h>
int main()

{
    int n, digit, reverse = 0;
    // reverse of a number
    printf("enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("reverse=%d", reverse);
    return 0;
}