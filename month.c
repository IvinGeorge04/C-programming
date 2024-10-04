#include <stdio.h>
void main()
{
    int m;
    printf("Enter the month no :");
    scanf("%d",&m);
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        printf("\n 31 days");
    }
    else if (m==4||m==6||m==9||m==11)
    {
        printf("\n 30 days");
    }
    else
    {
        printf("\n 29 days ");
    }
}
