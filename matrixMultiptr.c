#include <stdio.h>
int main()
{
    int A[5][5],B[5][5],C[5][5],row1,row2,col1,col2;
    printf("Enter the row and col of mat1:");
    scanf("%d,%d",&row1,&col1);
    printf("Enter the row and col of mat2:");
    scanf("%d,%d",&row2,&col2);
    if (row2==col1)
    {
        printf("Enter the mat1:\n");
        for (int i=0;i<row1;i++)
        {
            for (int j=0;j<col1;j++){
                scanf("%d",*(A+i)+j);
            }
        }
        printf("Enter the mat2:\n");
        for (int i=0;i<row2;i++)
        {
            for (int j=0;j<col2;j++){
                scanf("%d",*(B+i)+j);
            }
        }
        for (int i=0;i<row1;i++){
            for (int j=0;j<col2;j++){
                C[i][j]=0;
                for (int k=0;k<col1;k++)
                {
                    *(*(C+i)+j)+=*(*(A+i)+k) * *(*(B+k)+j);
                }
            }
        }
        printf("\nThe multiplied matrix is:\n");
         for (int i=0;i<row1;i++)
        {
            for (int j=0;j<col2;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }

    }
    else {
        printf("\nMultiplication is not possible");
    }
    return 0;
}