#include <stdio.h>

int main()
{
    int ean,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%12d", &ean);
    d1 = (ean%10);
    d2 = ((ean/10) - 10*(ean/100));
    d3 = ((ean/100) - 10*(ean/1000));
    d4 = ((ean/1000) - 10*(ean/10000));
    d5 = ((ean/10000) - 10*(ean/100000));
    d6 = ((ean/100000) - 10*(ean/1000000));
    d7 = ((ean/1000000) - 10*(ean/10000000));
    d8 = ((ean/10000000) - 10*(ean/100000000));
    d9 = ((ean/100000000) - 10*(ean/1000000000));
    d10 = ((ean/1000000000) - 10*(ean/10000000000));
    d11 = ((ean/10000000000) - 10*(ean/100000000000));
    d12 = ean/100000000000;
    int sum1 = d2 + d4 + d6 + d8 + d10 + d12 ;
    int sum2 = d1 + d3 + d5 + d7 + d9 + d11 ;
    int intermed = ((3*sum1 + sum2) -1)%10;
    int final = 9 - intermed;
    printf("\n Check digit : %d \n", final);
    return 0;
}

