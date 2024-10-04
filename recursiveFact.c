#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    int m=fact1(n);
    printf("The factorial is:%d",m);
    printf("\n//with recursive\n");
    int x=fact(n);
    printf("The factorial is:%d",x);
    return 0;
}
int fact1(int n)
{
    int fact=1,i;
    for (i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int fact(int n)
{
    if (n==0||n==1)
        return 1;
        
    else
    {
        return n*fact(n-1);
    }
}