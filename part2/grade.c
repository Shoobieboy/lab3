#include <stdio.h>
#include <stdbool.h>

int main()
{
    int marks;
    
    printf("\n Enter numerical grade : ");
    
    scanf("%3d", &marks);

    if ( marks <=100 && marks>=0 )
    {
        if ( marks >=90)
        { 
            printf("\n Letter Grade : A");
        }
        else if ( marks <90 && marks>=80 )
        {
            printf("\n Letter Grade : B");
        }
        else if ( marks <80 && marks>=70 )
        {
            printf("\n Letter Grade : C");
        }
        else if ( marks <70 && marks>=60 )
        {
            printf("\n Letter Grade : D");
        }
        else 
        {
            printf("\n Letter Grade : F");
        }
    }
    else
    {
        printf("\n Invalid Marks!! ");
    }
    printf("\n");
    return 0;
}