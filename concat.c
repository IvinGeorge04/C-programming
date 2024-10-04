#include<stdio.h>
int main()
{
    int i,j;
    char first[100],second[100],name[200];
    printf("enter the first name:");
    scanf("%s",first);
    printf("enter second name:");
    scanf(" %s",second);
    for(i=0;first[i]!='\0';i++){
    name[i]=first[i];
    }
    name[i]=' ';
    
    for(j=0;second[j]!='\0';j++){
        name[i+j+1]=second[j];
    }
        name[i+j+1]=' ';
    
    printf(" concatenated string is %s\n",name);
    return 0;
}