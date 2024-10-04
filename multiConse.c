#include <stdio.h>
void main()
{
    int num,n,i,j;
    printf("Enter the no:");
    scanf("%d",&num);
    n=num+2;
    for (i=num;i<=n;i++)
    {
        for (j=1;j<=10;j++)
        {
            printf("\n %d* %d= %d",i,j,(i*j));
        }
        printf("\n");
    }
}