#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the 2 numbers:");
    scanf("%d,%d",&num1,&num2);
    printf("\n %d+%d=%d",num1,num2,(num1+num2));
    printf("\n %d-%d=%d",num1,num2,(num1-num2));
    printf("\n %d/%d=%d",num1,num2,(num1/num2));
    printf("\n %d*%d=%d",num1,num2,(num1*num2));
    printf("\n %d%%%d=%d",num1,num2,(num1%num2));
}