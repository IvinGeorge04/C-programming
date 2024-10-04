#include <stdio.h>
void main()
{
    int row,i,j,n;
    printf("Ente the no:");
    scanf("%d",&row);
    n=row;
    for (i=1;i<=n;i++)
    {
        for (j=row;j>0;j--)
        {
            printf("* ");
        }
        row--;
        printf("\n");
    }
}