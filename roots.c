#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,discr,root1,root2,real_part,img_part;
    printf("the quadratic eq is ax^2+bx+c");
    printf("\n Enter the coifficents of a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    discr=(b*b)-(4*a*c);
    if (discr>0)
    {
        root1=(-b+sqrt(discr))/(2*a);
        root2=(-b-sqrt(discr))/(2*a);
        printf("/n Real and distint roots;Root1=%.2f and root2=%.2f",root1,root2);
    }
    else if (discr==0)
    {
        root1=-b/(2*a);
        printf("\n Real and equal roots; root1=root2=%.2f",root1);
    }
    else
    {
        real_part=-b/(2*a);
        img_part=sqrt(-discr)/(2*a);
        printf("\nroot1=%.2f+%.2fi and root2=%.2f+%.2fi",real_part,img_part,real_part,img_part);
    }
}