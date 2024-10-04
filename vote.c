#include <stdio.h>
void main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age>18)
    {
        printf("\n Congratulations! You are eliglble to cast your vote");
    }
    else
    {
        printf("\n Sorry,you are not eligilable to cast a vote");
    }
}