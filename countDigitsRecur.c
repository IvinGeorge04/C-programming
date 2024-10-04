#include <stdio.h>
int Count(int a);
int Sum(int a);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int count=Count(num);
    printf("The no of digits is:%d",count);
    int sum=Sum(num);
    printf("\nThe sum of digits is:%d",sum);
    return 0;
}
int count=0,sum=0;
int Count(int a)
{
    int rem;
    if (a==0)
        return count;
    else
    {
        a/=10;
        count++;
        return Count(a);
    }
}
int Sum(int a)
{
    int rem;
    if (a==0)
        return sum;
    else
    {
        rem=a%10;
        sum+=rem;
        a/=10;
        return Sum(a);
    }
}