#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the numbers:");
	scanf("%d,%d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("the num1=%d,num2=%d",num1,num2);
	return 0;
}