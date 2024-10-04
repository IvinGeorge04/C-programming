#include <stdio.h>
#include <string.h>
int main()
{
    char A[30],ch[200];
    int i,max,ascii;
    printf("Enter the string:");
    gets(A);
    for (i=0;i<200;i++)
    {
        ch[i]=0;
    }
    for (i=0;i<strlen(A);i++)
    {
        if (A[i]!=' ')
        {
            ascii=(int)A[i];
            ch[ascii]+=1;;
        }
    }
    max=0;
    for (i=0;i<200;i++)
    {
        if (ch[i]>ch[max])
        {
            max=i;
        }
    }
    printf("\n The maximum no of %c in the string is:%d ",max,ch[max]);
    return 0;
}