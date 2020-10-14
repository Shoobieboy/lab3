#include <stdio.h>

int main()
{
    int var;
    printf("enter any number :");
    scanf(" %d", &var);
    int a=var%10;
    int b=var/10;
    printf(" %d%d \n", a,b);
    return 0;
}