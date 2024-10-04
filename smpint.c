#include <stdio.h>
void main()
{
    int princi,rate,time,smpint;
    printf("Enter the principle amount:");
    scanf("%d",&princi);
    printf("\nEnter the rate:");
    scanf("%d",&rate);
    printf("\nEnter the time:");
    scanf("%d",&time);
    smpint=(princi*rate*time)/100;
    printf("\nThe simple interst is:%d",smpint);
}