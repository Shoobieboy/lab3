#include <stdio.h>
#include <stdbool.h>

int main()
{
    int windspeed,label;
    printf("Enter the wind speed (in knots) :");
    scanf(" %d", &windspeed);
    printf("\n");
    if (windspeed <1)
    {
        int label=1;
    }
    else if (windspeed >=1 && windspeed <=3)
    {
        int label=2;
    }
    else if (windspeed >=4 && windspeed <=27)
    {
        int label=3;
    }
    else if (windspeed >=28 && windspeed <=47)
    {
        int label=4;
    }
    else if (windspeed >=42 && windspeed <=63)
    {
        int label=5;
    }
    switch (label)
    {
        case 1: printf("Calm \n"); break;
        case 2: printf("Light air \n"); break;
        case 3: printf("Breeze \n"); break;
        case 4: printf("Gale \n"); break;
        case 5: printf("Storm \n"); break;
        default : printf("Hurricane \n");
    }
    return 0;
}