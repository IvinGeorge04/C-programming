#include <stdio.h>
void main()
{
    int num,i,j;
    printf("Enter the number :");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if (i==1||i==num)
        {
            for (j=1;j<=num;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            
            for (j=1;j<=num;j++)
            {
                if (j==1||j==num)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}