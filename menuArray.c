#include <stdio.h>
void insert(int num,int a[],int c)
{
    a[c]=num;    
}

void Display(int a[],int c)
{
    printf("\nArray elements:");
    for (int i=0;i<c;i++)
        printf("%d ",a[i]);
}
void rev(int a[],int c)
{
    int rev[20];
    for (int i=c-1,j=0;i>=0,j<c;i--,j++)
        rev[j]=a[i];
    printf("\n The reversed array:");
    for (int i=0;i<c;i++)
        printf("%d ",rev[i]);
        
}
int main()
{
    int A[20],choice,num,count=0;
    char option;
    do{
        printf("Menu");
        printf("\n1.enter element \n2.Display array \n3.Reverse array\n 4.exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element:");
                scanf("%d",&num);
                insert(num,A,count);
                count++;
                printf("\nelement entered sucessfully...");
                break;
            case 2:
                Display(A,count);
                break;
            case 3:
                rev(A,count);
                break;
            case 4:
                printf("Exicting...");
                break;
            default:
                printf("Invalid option!\n");
                break;

        }
        printf("\nDo you want to continue or not(y/n):");
        scanf(" %c",&option);
    }while (option=='y'||option=='Y');
    printf("\nExiting....");
    return 0;
}
