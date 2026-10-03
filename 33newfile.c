#include<stdio.h>
int main()
{
    int age, marks;
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your marks");
    scanf("%d",&marks);
    if(age>=18 && marks>=40)
    {
    printf("eligble");
    }
    else 
    {
        printf("not eligble");
    }
    return 0;
}