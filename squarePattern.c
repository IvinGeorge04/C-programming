#include <stdio.h>
void main()
{
    int num,i,j;
    printf("Enter the number :");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for (j=1;j<=num;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}