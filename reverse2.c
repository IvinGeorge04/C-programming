#include<stdio.h>
#include<string.h>
void reverse_string(char string[100]);
int main()
{
    
    char string[100];
    
    printf("enter the string:");
    scanf("%s",string);
    printf("\nthe string is:%s",string);

    reverse_string(string);
    printf("\nthe reversed string is:%s",string);
return 0;
}
    
void   reverse_string(char string[100]){

    char temp;
    int i,j,n;
    n = strlen(string);
    for(i=0,j=n-1;i<j;i++,j--){
       temp=string[i];
       string[i]=string[j];
       string[j]=temp;
   } 
}