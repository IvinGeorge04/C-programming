#include <stdio.h>
void main()
{
    int num,i,j;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        int prime=1;
        for (j=2;j<=(i/2);j++)
        {
            if ((i%j)==0)
            {
                prime=0;
                break;
            }
        }
        if (prime==1)
        {
            printf("%d ",i);
        }
    }
}