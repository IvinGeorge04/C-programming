#include <stdio.h>
#include <string.h>
void main()
{
    int count=0,i,t,h,e,s;
    char A[30];
    printf("Enter the string:");
    gets(A);
    int n=strlen(A);
    strlwr(A);
    for (i=0;i<n-3;i++)
    {
        t=A[i]=='t';
        h=A[i+1]=='h';
        e=A[i+2]=='e';
        s=A[i+3]==' '||A[i]=='\0';
        if ((t&&h&&e&&s)==1)
        {
            count+=1;
        }
    }
    printf("\n No of 'the' is:%d",count);
}
