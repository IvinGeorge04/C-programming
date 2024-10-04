#include <stdio.h>
#include <math.h>
void main()
{
    float princi,time,rate,amt,compint;
    printf("Enter the principle amount:");
    scanf("%f",&princi);
    printf("\nEnter the rate:");
    scanf("%f",&rate);
    printf("\nEnter the time duration:");
    scanf("%f",&time);
    amt=princi*(pow((1+rate/100),time));
    compint=amt-princi;
    printf("/nThe compound interest is %.3f",compint);
}