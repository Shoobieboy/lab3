#include <stdio.h>

int main()
{
    int number;
    
    printf("\n Enter a Number between 0 and 32767 : ");
    
    scanf("%d", &number);
    
    int a = number%8;
    if (a==0)
    {
        printf("\n In octal, your number is : 00000");
    }
    else 
    { 
        int b = (number/8)%8;
        if (b==0)
        {
            printf("\n In octal, your number is : %d", a);
        }
        else
        {
            int c = ((number/8)/8)%8;
            if (c==0)
            {
                printf("\n In octal, your number is : %d%d", b,a);
            }
            else
            {
                int d= (((number/8)/8)/8)%8;
                if (d==0)
                {
                    printf("\n In octal, your number is : %d%d%d", c,b,a);
                }
                else
                {
                    int e=((((number/8)/8)/8)/8)%8;
                    if (e==0)
                    {
                        printf("\n In octal, your number is : %d%d%d%d", d,c,b,a);
                    }
                    else
                    {
                          printf("\n In octal, your number is : %d%d%d%d%d", e,d,c,b,a);
                    }
                    
                }
                
            }
            
        }
        
    }
    printf("\n");
    return 0;
}