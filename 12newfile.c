#include<stdio.h>
int main()
{
    int a= 17;
    printf("before remainder=%d\n,",a);
    a%=5;
    printf(" after remainder=%d\n",a);
    return 0;
}