#include <stdio.h>

int main()
{
    float commission,qty,price;

    printf("Enter the number of shares: ");
    scanf("%f", &qty);
    printf("Enter the price per share: ");
    scanf("%f", &price);

    float value=qty*price;
    if (value < 2500.00f)
    {
        commission = 30.00f + 0.17f * value ;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + 0.0066f * value ;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 0.0034f * value ;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + 0.0022f * value ;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 0.0011f * value ;
    }
    else 
    {
        commission = 255.00f + 0.009f * value ;
    }

    if (commission < 39.00f)
    {
        commission= 39.00f;
    }
    else
    {
        /* code */
    }
    printf("Commission : $%.2f\n", commission);
    int commission1=0;
    if (qty>=0 && qty<2000)
    {
        commission1=33 + 0.03*qty;
    }
    else if (qty>=2000 )
    {
        commission1=33 + 0.03*2000 + 0.02*(qty-2000);
    }
    printf("Commision offered by the nearest competitor is : $%d \n",commission1);
        return 0;
}