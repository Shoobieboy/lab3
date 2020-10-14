#include <stdio.h>
#include <stdbool.h>
//Program to display tax as dependent upon the entered income
int main()
{   
    float princ,tax;
    printf("Enter the amount of taxable income : $");
    scanf("%f", &princ);
    if(princ>=0)
    {
    if (princ<=750)
    {
        tax=princ*0.01;
    }
    else if (princ>750 && princ<2250)
    {
        tax=7.5+(princ-750)*0.02;
    }
    else if (princ>=2250 && princ<3750)
    {
        tax=37.5+(princ-2250)*0.03;
    }
    else if (princ>=3750 && princ<5250)
    {
        tax=82.5+(princ-3750)*0.04;
    }
    else if (princ>=5250 && princ<=7000)
    {
        tax=142.5+(princ-5250)*0.05;
    }
    else
    {
        tax=230+(princ-7000)*0.06;
    }
    printf("Amount of Tax due is : $%.2f \n", tax);
    }
    else
    {
        printf("Invalid Income");
    }
    return 0;
    }