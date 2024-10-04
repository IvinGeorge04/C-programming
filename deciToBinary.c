#include <stdio.h>
int binary(int num, int x, int bnry[])
{   
    if (num>0)
    {
        bnry[x]=num%2;
        num/=2;
        return binary(num,x+1,bnry);
    }
    else
    {
        //return (bnry,x);
        for (x=x-1;x>=0;x--)
        {
            printf("%d",bnry[x]);
        }
    }
}
int main()
{
    int num,x=0,bnry[20],bin[20],m;
    printf("Enter the number:");
    scanf("%d",&num);
    bin,m=binary(num,x,bnry);
    //for (m=m-1;m>=0;m--)
    {
        printf("%d",bin[m]);
    }
    return 0;
}
