#include <stdio.h>
void main()
{
    int per_age1,per_age2,per_age3;
    char per1[15],per2[20],per3[15];
    printf("\nEnter the name of person1:");
    scanf("%s",&per1);
    printf("\nEnter the age of person1:");
    scanf("%d",&per_age1);
    printf("\nEnter the name of person2:");
    scanf("%s",&per2);
    printf("\nEnter the age of person2:");
    scanf("%d",&per_age2);
    printf("\nEnter the name of person3:"); 
    scanf("%s",&per3);
    printf("\nEnter the name of person3:");
    scanf("%d",&per_age3);
    if ((per_age1<per_age2) &&(per_age1<per_age3))
    {
        printf("\n The youngest is %s",per1);
    }
    else if ((per_age2<per_age1)&&(per_age2<per_age3))
    {
        printf("\n The youngest is %s",per2);
    }
    else
    {
        printf("\n The youngest is %s",per3);
    }
}