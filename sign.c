#include <stdio.h>
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	if (num>0)
	{
		printf("thr number is positive\n");
	}
	else if (num<0)
	{
		printf("the number is negative\n");
	}
	else
	{
		printf("the number is zero\n");
	}
	return 0;
}