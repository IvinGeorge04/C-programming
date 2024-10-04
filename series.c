#include <stdio.h>
int main()
{
    int i,j,n,sum=0,term=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\n The series is:");
    for (i=1;i<=n;i++)
    {
        term=term*10+1;
        printf("%d",term);   
        sum=sum+term;
        if (i<n)
        {
            printf("+");
        }
    }
    printf("\n The sum is %d",sum);
    return 0;
}