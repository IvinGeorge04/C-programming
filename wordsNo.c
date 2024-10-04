#include <stdio.h>
#include <string.h>
int main()
{
    char A[20];
    int i,count=1;
    printf("Enter the string:");
    scanf("%[^\n]",A);
    int n=strlen(A);
    strlwr(A);
    for (i=0;i<n;i++)
    {
        if (A[i]==' ')
        {
            count++;
        }
    }
    printf("The no of words:%d",count);
    return 0;
}