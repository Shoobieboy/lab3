#include <stdio.h>

int main()
{
    int second,third;
    printf ("Enter the first 11 digits : ");
    scanf("%5d%5d",&second,&third);
    int a = ((second/1000)-10*(second/10000));
    int b = ((second/10)-10*(second/100));
    int c = (third/10000);
    int d = ((third/100)-(10*(third/1000))) ;
    printf( "%d %d %d %d", a,b,c,d);
    return 0;
}