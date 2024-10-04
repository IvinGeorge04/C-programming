#include <stdio.h>
#include <string.h>
int main()
{
    char A[20];
    int alph,num,spcl;
    alph=num=spcl=0;
    printf("Enter the string:");
    scanf("%[^\n]",A);
    strlwr(A);
    for (int i=0;i<strlen(A);i++)
    {
        if (A[i]>='a'&&A[i]<='z')
        {
            alph++;
        }
        else  if (A[i]>='0'&&A[i]<='9')
        {
            num++;
        }
        else
        {
            spcl++;
        }

        
    }
    printf("The no of alphabets:%d \n no of numbers:%d \n No of special chars:%d",alph,num,spcl);
    return 0;
}