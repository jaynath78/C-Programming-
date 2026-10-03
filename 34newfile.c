#include <stdio.h>
int main()
{
    int ID, pass;
    printf("enter your ID:");
    scanf("%d", &ID);
    printf("enter your pass:");
    scanf("%d", &pass);
    if (ID == 1234 || pass == 1)
    {
        printf("allowded");
    }
    else
    {
        printf("not allowded");
    }
    return 0;
}