#include <stdio.h>
void main()
{
    int a;
    float temp,b;
    printf("Enter the temperature:");
    scanf("%f",&temp);
    printf("press 1 to convert celsius to farenheat\npress 2 rto convert farenheat to celcius");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        b=(9/5)*temp+32;
        printf("%.2f",b);
        break;
        case 2:
        b=((temp-32)*5)/9;
        printf("%.2f",b);
        break;
        default:
        printf("\n In valid choice");
        break;
    }
}