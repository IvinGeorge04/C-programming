#include <stdio.h>
void main()
{
    char name[20],address[20],city[20];
    int ph;
    printf("Your name is:");
    gets(name);
    printf("\n Enter the address:");
    gets(address);
    printf("\n Enter the city:");
    gets(city);
    printf("\n Enter the phone no:");
    scanf("%d",&ph);
    printf("\n my name is:%s",name);
    printf("\n Your address is:%s",address);
    printf("\n Your city is:%s",city);
    printf("\n your phone no:%d",ph);

}