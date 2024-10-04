#include <stdio.h>
void main()
{
    char stud[15];
    int roll;
    float sub1,sub2,sub3,percentage;
    printf("\n Enter the name:");
    scanf("%s",&stud);
    printf("\n Enter the roll no:");
    scanf("%d",&roll);
    printf("\n Enter the marks of 3 subjects:");
    scanf("\n %f,%f,%f",&sub1,&sub2,&sub3);
    percentage=((sub1+sub2+sub3)/300)*100;
    if (percentage>=75)
    {
        printf("\n %s,%d has First class with distinction and percentage of marks %.2f",stud,roll,percentage);
    }
    else if ((percentage>=60)&&(percentage<75))
    {
        printf("\n %s,%d has First class and percentage of marks %.2f",stud,roll,percentage);
    }
    else
    {
        printf("\n %s,%d has second class and percentage of marks %.2f",stud,roll,percentage);
    }
}