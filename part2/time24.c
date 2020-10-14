#include <stdio.h>
#include <stdbool.h>

int main()
{
    int newhr,hr,minutes;
    printf("Enter a 24 hour time :");
    scanf(" %2d:%2d", &hr,&minutes);
    if ((hr >= 00 && hr <= 24) && ( minutes>=00 && minutes <=59))
    {
        if ( hr < 12)
        {
            newhr=hr;
            printf("Equivalent 12-hour time is : %2d:%2d AM", newhr,minutes);
        }
        else if ( hr == 12)
        {
            newhr=12;
            printf("Equivalent 12-hour time is : %2d:%2d AM", newhr,minutes);

        }
        else if ( hr>12 && hr,24 )
        {
            newhr= hr%12;
            printf("Equivalent 12-hour time is : %2d:%2d PM", newhr,minutes);

        }
    }
    else
    {
        printf("Invalid Time entered!!! try again :P");
    }
    printf("\n");
    return 0;
}