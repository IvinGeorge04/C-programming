#include <stdio.h>
void main()
{
    int num,rev=0,reminder;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num!=0)
    {
        reminder=num%10;
        rev=rev*10+reminder;
        num/=10;
    }
    printf("The reversed number is %d",rev);

}