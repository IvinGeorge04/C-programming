#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num<100)
    {
        if ((num%2)==0)
        {
            printf("\n It is a even number less than 100");
        }
        else
        {
            printf("\n It is a odd number less than 100");
        }
    }
    else
    {
        printf("\n It is a positive numbser greater than 100");
    }
}
