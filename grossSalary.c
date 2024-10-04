#include <stdio.h>
int main()
{
    float basic,gross;
    printf("Enter the basic salary:");
    scanf("%f",&basic);
    if (basic>1&&basic<4000)
    {
        gross=basic+(.1*basic)+(.5*basic);
    }
    else if (basic>4001&&basic<8000)
    {
        gross=basic+(.2*basic)+(.6*basic);
    }
    else if (basic>8001&&basic<12000)
    {
        gross=basic+(.25*basic)+(.7*basic);
    }
    else 
    {
        gross=basic+(.3*basic)+(.8*basic);
    }
    printf("the gross salary is:%.2f",gross);
    return 0;
}