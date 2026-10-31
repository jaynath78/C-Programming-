#include <stdio.h>
int main()
{
    // sum of even numbers
    int i, sum;
    i = 2;
    sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i = i + 2;
    }
    printf("sum=%d", sum);
    retrun 0;
}