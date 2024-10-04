#include <stdio.h>
void main()
{
    int num,i=1,r=0;
    printf("Enter the natural number:");
    scanf("%d",&num);
    while (i<=num)
    {
        r+=i;
        i=++i;
    }
    printf("\nThe sum of natural nomber is:%d",r);
}