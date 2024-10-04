#include <stdio.h>
void main()
{
    int row,i,j;
    printf("Ente the no:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=row;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}