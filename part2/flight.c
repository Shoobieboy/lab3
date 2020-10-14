#include <stdio.h>
#include <stdbool.h>

int main()
{
    int hr,min,dephr,depmin,arrivhr,arrivmin;

    printf("\n Enter 24-hour time (hr:min) : ");
    
    scanf("%2d:%2d", &hr,&min);

    printf("\n");

    float time = (60*hr)+min;
    if (time>=0 && time<1440)
    { 
    if (time>=480 && time<583)
    {
        dephr=8;
        depmin=00;
        arrivhr=10;
        arrivmin=16;
    }
    else if (time>=583 && time<679)
    {
        dephr=9;
        depmin=43;
        arrivhr=11;
        arrivmin=52;
    }
     else if (time>=679 && time<767)
    {
        dephr=11;
        depmin=19;
        arrivhr=01;
        arrivmin=31;
    }
     else if (time>=767 && time<840)
    {
        dephr=12;
        depmin=47;
        arrivhr=03;
        arrivmin=00;
    }
     else if (time>=840 && time<945)
    {
        dephr=02;
        depmin=00;
        arrivhr=04;
        arrivmin=8;
    }
    else if (time>=945 && time<1140)
    {
        dephr=03;
        depmin=45;
        arrivhr=05;
        arrivmin=55;
    }
    else if (time>=1140 && time<1350)
    {
        dephr=9;
        depmin=45;
        arrivhr=11;
        arrivmin=52;
    }
    else
    {
        printf("No flights currently available\n");
    }
    }
    else 
    {
        printf("Invalid time entered!!! \n");
    }
    if (time>=0 && time<1440) 
    {
        if (time>=480 && time<679)
        {
            printf("Closest departure time is %2d:%2d a.m.\n", dephr,depmin);
            printf("Arriving at %2d:%2d a.m.\n", arrivhr,arrivmin);
            printf("\n");
        }
        else if (time>=679 && time<=767)
        {
            printf("Closest departure time is %2d:%2d a.m.\n", dephr,depmin);
            printf("Arriving at %2d:%2d p.m.\n", arrivhr,arrivmin);
            printf("\n");
        }
        else
        {
            printf("Closest departure time is %2d:%2d p.m.\n", dephr,depmin);
            printf("Arriving at %2d:%2d p.m.\n", arrivhr,arrivmin);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid time entered!!! \n");
    }
    
    return 0;
}