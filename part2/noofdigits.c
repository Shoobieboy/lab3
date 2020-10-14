#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\n");
    if ( number/10 !=0 )
    {
        if ( number/100 !=0 )
        {
            if ( number/1000 !=0 )
            {
                printf(" The number %d has 4 digits \n", number);
            }
            else 
            {
                printf(" The number %d has 3 digits \n", number);
            }
        }
        else
        {
            printf(" The number %d has 2 digits \n", number);
        }
    }
    else
    {
        printf(" The number %d has 1 digit \n", number);
    }
    return 0;
}