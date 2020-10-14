#include <stdio.h>

int main()
{
    int m1,m2,d1,d2,y1,y2;
    printf("Entr the first date (mm/dd/yyyy) : ");
    scanf("%2d/%2d/%4d", &m1,&d1,&y1);
    printf("Entr the second date (mm/dd/yyyy) : ");
    scanf("%2d/%2d/%4d", &m2,&d2,&y2);
    if (y1 != y2)
    {
        if ( y1>y2)
        {
            printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m2,d2,y2,m1,d1,y1);
        }
        else
        {
            printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m1,d1,y1,m2,d2,y2);
        }
        
    }
    else
    {
        if (m1 != m2)
        {
            if (m1>m2)
            {
                printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m2,d2,y2,m1,d1,y1); 
            }
            else
            {
                printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m1,d1,y1,m2,d2,y2);           
            }
            
        }
        else 
        {
            if (d1>d2)
            {
                printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m2,d2,y2,m1,d1,y1); 

            }
            else if (d2>d1)
            {
                printf(" %2d/%2d/%4d is earlier than %2d/%2d/%4d\n", m1,d1,y1,m2,d2,y2);           

            }
            else
            {
                printf("Both the dates are the same\n");
            }
            
        }
    }
    
}