#include <stdio.h>
void main()
{
    int num=10,i=1;
    while (i<=10)
    {
        printf("%d\n",num);
        i=++i;
        num-=1;
    }

}