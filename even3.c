#include <stdio.h>
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if ((num%2)==0)
	{
		printf("the numnder %d is even",num);
	}
	else
	{
		printf("The number %d is odd",num);
	}
}