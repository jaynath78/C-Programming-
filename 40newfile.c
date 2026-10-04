#include <stdio.h>
int main()

{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    if (!(age < 18) && age <= 60)
    {
        printf("age is between 18 and 60");
    }
    else
    {
        printf("age is outside the range");
    }
    return 0;
}