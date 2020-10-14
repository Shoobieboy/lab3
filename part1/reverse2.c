#include <stdio.h>

int main()
{
    int number;
    printf("enter any number :");
    scanf(" %d", &number);
    int unit=number%10;
    int tens=(number/10)%10;
    int hundreds =(number/10)/10;
    printf(" %d%d%d \n", unit,tens,hundreds);
    return 0;
}