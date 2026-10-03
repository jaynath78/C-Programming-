#include<stdio.h>
int main()
{
    int day;
    printf("enter day number(1-4): ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("monday");
    }
    else if (day == 2)
    {
        printf("tuesday");
    }
    else if (day == 3)
    {
        printf("wednesday");
    }
    else if (day == 4)
    {
        printf("thursday");
    }
    else
    {
        printf("invalid day");
    }
    return 0;
}