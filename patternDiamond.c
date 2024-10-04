#include <stdio.h>
void main()
{
    int row,i,j,n;
    printf("Enter the row:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=(row-i);j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=(row-1);i!=0;i--)
    {
        for (j=1;j<=(row-i);j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}   