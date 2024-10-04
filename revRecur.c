#include <stdio.h>
#include <string.h>
char Rev(char a[10],char rev[10],int b,int n)
{
    if (n>=0)
    {   
        rev[b]=a[n];
        return Rev(a,rev,b+1,n-1);
    }
    else 
    {
        rev[b+1]='\0';
        printf("Reversed string:%s",rev);
        return 0;
    }
}
int main()
{
    char a[10],rev[10],reverse[10];
    int b=0;
    printf("enter the string:");
    scanf("%s",a);
    int n=strlen(a);
    Rev(a,rev,b,n-1);
    return 0;
}