#include <stdio.h>

int main()
{
    int first,second,third,checkdigit,verify;
    printf ("Enter the first 11 digits : ");
    scanf("%1d%5d%5d", &first,&second,&third);
    printf("Enter the checkdigit : ");
    scanf("%d", &checkdigit);
    int sum1 = first+((second/1000)-10*(second/10000))+((second/10)-10*(second/100))+(third/10000)+(third%10)+((third/100)-(10*(third/1000))) ;
    int sum2 = (second/10000)+(second/100 - 10*(second/1000)) + second%10 + (third/1000 - 10*(third/10000)) + (third/10 - 10*(third/100)) ;
    int tot = 3*sum1 + sum2;
    verify= 9- ((tot-1)%10);
    if (checkdigit==verify)
    {
        printf("Valid number \n");
    }
    else
    {
        printf("Invalid Number! Try again \n");
    }
    return 0;
}