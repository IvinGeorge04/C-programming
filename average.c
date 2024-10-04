#include <stdio.h>
int main()
{
    float num1,num2,num3,avg;
    printf("Enter the 3 numbers");
    scanf("%f,%f,%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("\n The average of 3 numbers is:%8.3f",avg);
    return 0;
}