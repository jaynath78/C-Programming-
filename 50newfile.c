#include <stdio.h>
int main()
{
    int choice;
    printf("====menu====\n");
    printf("1,c programing\n");
    printf("2,python\n");
    printf("3,java\n");
    printf("4,Html\n");
    printf("enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("you seleceted c programing");
        break;
    case 2:
        printf("you selected python");
        break;
    case 3:
        printf("you selected java");
        break;
    case 4:
        printf("you selected html");
        break;
    default:
        printf("invalid");
    }
    return 0;
}