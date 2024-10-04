#include <stdio.h>
#include <string.h>
int main()
{
    char A[30],c;
    int i=0,count=0;
    printf("Enter the string:");
    gets(A);
    printf("\n Enter the character to be searched:");
    c=getchar();
    strlwr(A);
    while(A[i]!='\0')
    {
        if (A[i]==c)
        {
            count++;
        }
        i++;
    }
    printf("\n The word %c appears:%d times",c,count);
    return 0;
}