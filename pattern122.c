#include <stdio.h>
int main()
{
    int i,j,row,n=1;
    printf("Enter the row;");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",n);
        }
        n++;
        printf("\n");
    }
    return 0;
}