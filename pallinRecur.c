#include <stdio.h>
#include <string.h>
int Rev(char b[],char rev[],int i,int j)
{
    if (i!=0)
    {
        rev[j]=b[i];
        return Rev(b,rev,i-1,j+1);
    }
    else
    {
        rev[j]='\0';
        int flag=1;
        for (int i=0;i<j;i++)
        {
            if (rev[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        return flag;
    }
}
int main()
{
    char a[20],rev[20];
    int i,j=0,n,flag;
    printf("Enter the string:");
    scanf("%[^\n]",a);
    n=strlen(a);
    i=n-1;
    flag=Rev(a,rev,i,j);
    if (flag==1)
        printf("it is pallindrome");
    else
        printf("it is  not pallindrome");
    return 0;
}