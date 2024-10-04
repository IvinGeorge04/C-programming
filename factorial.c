#include <stdio.h>
void main()
{
    int num,i=1,f=1;
    printf("Enter the factorial num");
    scanf("%d",&num);
    while (i<=num)
    {
        f=f*i;
        i=++i;
    }
    printf("The factorial of %d is %d",num,f);
}