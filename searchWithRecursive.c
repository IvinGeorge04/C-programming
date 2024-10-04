#include <stdio.h>
int srch(int num,int a[],int n);
int main()
{
    int a[20],num,n;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for (int i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&num);
    int x=srch(num,a,n);
    if (x==-1)
        printf("The element is not found");
    else
        printf("The element is found");
    return 0;
}
int srch(int num,int a[],int n)
{
    if (n<0)
        return -1;
    if (a[n]==num)
        return n;
    return srch(num,a,n-1);
}