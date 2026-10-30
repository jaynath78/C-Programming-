#include <stdio.h>
int main()

{
    int i = 1;
    int sum = 0;
    while (i <= 3)
    {
        sum = sum + i;
        i++;
    }
    printf("sum=%d", sum);
    return 0;
}