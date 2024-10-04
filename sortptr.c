#include <stdio.h>
int main()
{
    int t,a[100],n,pass,i;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    int *ptr=a;
    for (pass=0;pass<n-1;pass++)
    {
        for (i=0;i<n-pass-1;i++)
        {
            if (*(ptr+i)>*(ptr+i+1))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+i+1);
                *(ptr+i+1)=t;
                
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}