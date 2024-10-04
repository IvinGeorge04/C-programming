#include <stdio.h>
void sum(int *ptr,int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    printf("The sum is:%d",sum);

}
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
    sum(a,n);
    return 0;
}