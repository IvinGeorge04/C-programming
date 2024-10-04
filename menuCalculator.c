#include <stdio.h>
void add(float a,float b);
void sub(float a,float b);
void multi(float a,float b);
void div(float a,float b);
int main()
{
    char operator,choice;
    float num1,num2;
    do {
        printf("Menu\n");
        printf("+.Addition(+),-.subtration(-),*.multiplication(*),/.division(/)\n");
        printf("Enter the numbers:");
        scanf("%f,%f",&num1,&num2);
        printf("\nEnter the operator");
        scanf("%s",&operator);
       // operator=getchar();
        switch(operator){
            case '+':
            add(num1,num2);
            break;
            case '-':
            sub(num1,num2);
            break;
            case '*':
            multi(num1,num2);
            break;
            case '/':
            div(num1,num2);
            break;
        }
        printf("\nDo you want to continue Y/N");
        scanf("%s",&choice);

    }while ('Y'==choice||'y'==choice);
    return 0;
}
void add(float a,float b)
{
   printf("\n%.2f+%.2f=%.2f",a,b,(a+b));
}
void sub(float a,float b)
{
    printf("\n%.2f-%.2f=%.2f",a,b,(a-b));
}
void multi(float a,float b)
{
    printf("\n%.2f*%.2f=%.2f",a,b,(a*b));
}
void div(float a,float b)
{
    printf("\n%.2f/%.2f=%.2f",a,b,(a/b));
}