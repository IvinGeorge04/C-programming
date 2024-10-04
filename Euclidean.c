#include <stdio.h>
#include <math.h>
struct points{
    int x;
    int y;
}p1,p2;
int main()
{
    printf("Enter the cordinate of point1: ");
    scanf("%d,%d",&p1.x,&p1.y);
    printf("Enter the co ordinate of point2: ");
    scanf("%d,%d",&p2.x,&p2.y);
    int xp=p2.x-p1.x;
    int yp=p2.y-p1.y;
    float res=sqrt((xp*xp)+(yp*yp));
    printf("The Euclidean Distance is:%.3f units",res);
    return 0;

}