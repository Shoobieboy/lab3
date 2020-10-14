#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a1,a2,a3,a4,x,y;
    printf("Enter four integers :");
    scanf(" %d %d %d %d", &a1,&a2,&a3,&a4);
    if ( a1>a2)
    {
        if (a1>a3)
        {
            if (a1>a4)
            {
                x=a1;
                if (a2<a3 && a2<a4)
                {
                    y=a2;
                }
                else if (a3<a4)
                {
                    y=a3;
                }       
                else 
                {
                    y=a4;
                }   
            }
            else
            {
                x=a4;
                if (a2<a3)
                {
                    y=a2;
                }     
                else
                {
                    y=a3;
                }
                
            }
        }
        else if (a3>a4)
        {
            x=a3;
            if ( a4<a2)
            {
                y=a4;
            }
            else
            {
                y=a3;
            }
        }
        else
        {
            x=a4;
            if (a2<a3)
            {
                y=a2;
            }
            else
            {
                y=a3;
            }
        }
    }
    else if (a2>a3)
    {
        if (a2>a4)
        {
            x=a2;
            if ((a1<a3) && (a1<a4))
            {
                y=a1;
            }
            else if (a3<a4)
            {
                y=a3;
            }
            else
            {
                y=a4;
            }
            
        }
        else
        {
            x=a4;
            if (a1<a3)
            {
                y=a1;
            }
            else
            {
                y=a3;
            }
            
        }
    }
    else if (a3>a4)
    {
        x=a3;
        if (a1<a4)
        {
            y=a1;
        }
        else
        {
            y=a4;
        }
    }
    else
    {
        x=a4;
        y=a1;
    }
    printf("Largest : %d \n", x);
    printf("Smallest : %d \n", y);
    return 0;
}
