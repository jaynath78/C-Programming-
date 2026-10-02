#include<stdio.h>
int main()
{
    int age,id;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("age is valid\n");
        printf("enter your id");
        printf("%d",id);
    if (id==127)
    {
        printf("entry allowded");
    }
    else 
    {
        printf("wrong id\n");
    }
    }
   else
   {
        printf("you are under 18");
   }
   return 0;
}