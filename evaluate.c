#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Enter 5 numbers: ");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	printf("\n%d+%d-%d+%d=%d",a,b,c,d,(a+b-c+d));
	printf("\n%d*%d/%d+%d=%d",a,b,c,d,(a*b/c+d));
	printf("\n1+%d*%d%%%d=%d",a,b,c,(1+a*b%c));
	printf("\n%d+%d%%%d-%d=%d",a,d,b,c,(a+b%b-c));
}