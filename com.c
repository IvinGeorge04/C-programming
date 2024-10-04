#include <stdio.h>
void main()
{
    int c1_r,c1_i,c2_r,c2_i,res_r,res_i;
    printf("Enter the complex no");
    printf("\nEnter the real part:");
    scanf("%d",&c1_r);
    printf("\nEnter the imaginary part:");
    scanf("%d",&c1_i);
    printf("\nEnter the 2nd complex no");
    printf("\nEnter the real part:");
    scanf("%d",&c2_r);
    printf("\nEnter the imaginary part:");
    scanf("%d",&c2_i);
    res_r=c1_r+c2_r;
    res_i=c1_i+c2_i;
    printf("\nThe sum of complex no is %d+%di",res_r,res_i);
}