#include <stdio.h>
int main()
{
	int num1,num2,i;
	printf("Enter the 2 numbers:");
	scanf("%d,%d",&num1,&num2);
	i=num1;
	num1=num2;
	num2=i;
	printf("The num1=%d,num2=%d",num1,num2);
	return 0;
}