#include <stdio.h>
int main()
{
    int a[20],*ptr,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the elements");
    for (int i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    ptr=a;
    printf("The elements are:");
    for (int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}