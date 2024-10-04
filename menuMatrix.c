#include<stdio.h>
void readMatrix(int[5][5], int, int);
void printMatrix(int[5][5], int, int);
void addition(int[5][5], int[5][5], int[5][5], int, int);
void transpose(int[5][5], int[5][5], int, int);
void multiplication(int[5][5], int[5][5], int[5][5], int, int,int);
int main() {
    int matrix1[5][5], matrix2[5][5];
    int sumMatrix[5][5], transposeMatrix[5][5], multiplicationMatrix[5][5];
    int row1,row2, col1,col2, option, subOption;
    char cont;
        do {
        printf("\nChoose an option:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Transpose\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter the number of rows and columns for mat 1: ");
                scanf("%d%d", &row1, &col1);
                printf("Enter the number of rows and columns for mat 2: ");
                scanf("%d%d", &row2, &col2);
                if(row1==row2 && col1==col2)
                {
                    readMatrix(matrix1, row1, col1);
                    readMatrix(matrix2, row2, col2);
                    addition(matrix1, matrix2, sumMatrix, row1, col1);
                    printf("matriX 1:\n");
                    printMatrix(matrix1, row1, col1);
                    printf("matriX 2:\n");
                    printMatrix(matrix2, row2, col2);
                    printf("Addition of two matrices:\n");
                    printMatrix(sumMatrix, row1, col1);
                }
                else{
                    printf("Addition of two matrices not possible:\n");
                }
                break;
            case 2:
                printf("Enter the number of rows and columns for mat 1: ");
                scanf("%d%d", &row1, &col1);
                readMatrix(matrix1, row1, col1);
                transpose(matrix1, transposeMatrix, row1, col1);
                printf("matriX 1:\n");
                printMatrix(matrix1, row1, col1);
                printf("transpose of matrice:\n");
                printMatrix(transposeMatrix, row1, col1);
                break;
            case 3:
                printf("Enter the number of rows and columns for mat 1: ");
                scanf("%d%d", &row1, &col1);
                printf("Enter the number of rows and columns for mat 2: ");
                scanf("%d%d", &row2, &col2);
                if(row2==col1)
                {
                    readMatrix(matrix1, row1, col1);
                    readMatrix(matrix2, row2, col2);
                    multiplication(matrix1, matrix2, multiplicationMatrix, row1, col2,col1);
                    printf("matriX 1:\n");
                    printMatrix(matrix1, row1, col1);
                    printf("matriX 2:\n");
                    printMatrix(matrix2, row2, col2);
                    printf("multiplication of two matrices:\n");
                    printMatrix(multiplicationMatrix, row1, col2);
                }
                else{
                    printf("multipliction of two matrices not possible:\n");
                }
                break;
            case 4:
                printf("Exicting...");
                break;
            default:
                printf("Invalid option!\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);           
    } while (cont == 'y' || cont == 'Y');
    printf("Exiting...\n");
    return 0;
}
void readMatrix(int matrix[5][5], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void addition(int matrix1[5][5], int matrix2[5][5], int sumMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void transpose(int matrix1[5][5],int transposeMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposeMatrix[i][j] = matrix1[j][i];
        }
    }
}
void multiplication(int matrix1[5][5], int matrix2[5][5], int multiplicationMatrix[5][5], int row, int col,int col1)
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            multiplicationMatrix[i][j]=0;
            for (int k=0;k<col1;k++)
            {
                multiplicationMatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

}

