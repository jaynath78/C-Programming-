#include<stdio.h>
int main()
{
    int id, code;
    printf("enter your id");
    scanf("%d", &id);
    printf("enter your code");
    scanf("%d", &code);
    if (id == 1234 || code == 78)
    {
        printf("entry allowded");
    }
    else
    {
        printf("not allowded");
    }
    return 0;
}