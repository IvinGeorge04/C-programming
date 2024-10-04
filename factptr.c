#include <stdio.h>
int main()
{
    int *ptr,num,i,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);
    ptr=&fact;
    for (i=1;i<=num;i++)
    {
        *ptr=*ptr*i;
    }
    printf("The factorial is:%d",*ptr);
    return 0;
}