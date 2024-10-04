#include <stdio.h>
#include <string.h>
void main()
{
    int A[30],even=0,odd=0,i,n;
    printf("Enter the range:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d,",&A[i]);
    }
    for (i=0;i<n;i++)
    {
        if (A[i]%2==0)
        {
            even+=A[i];
        }
        else
        {
            odd+=A[i];
        }
    }
    if (even>odd)
    {
        printf("The sum is:%d",even);
    }
    else
    {
        printf("The sum is:%d",odd);
    }    
}