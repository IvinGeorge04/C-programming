#include <stdio.h>
void read(int[5][5], int, int);
void print(int[5][5], int, int);
int  Sum(int[5][5], int, int);
void subt(int[5][5], int[5][5], int[5][5], int, int);
int main() {
    int mat1[5][5], mat2[5][5];
    int sub[5][5];
    int row1,row2, col1,col2,choice;
    char op;
        do {
        printf("\nChoose an option:\n");
        printf("1. sum of elements in matrix\n");
        printf("2. Matrix subtration\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         switch (choice) {
            case 1:
                printf("\nEnter no of rows and columns for matrix: ");
                scanf("%d,%d", &row1, &col1);
                read(mat1, row1, col1);
                int sum=Sum(mat1, row1, col1);
                printf("matrix :\n");
                print(mat1, row1, col1);
                printf("Sum of elements in the matrix:\n");
                printf("%d",sum);
                break;
                case 2:
                printf("Enter no of rows and cols for mat1: ");
                scanf("%d,%d", &row1, &col1);
                printf("Enter no of rows and cols for mat2: ");
                scanf("%d,%d", &row2, &col2);
                if(row1==row2 && col1==col2)
                {
                    read(mat1, row1, col1);
                    read(mat2, row2, col2);
                    subt(mat1, mat2, sub, row1, col1);
                    printf("matrix 1:\n");
                    print(mat1, row1, col1);
                    printf("matrix 2:\n");
                    print(mat2, row2, col2);
                    printf("\nSubtraction of two matrices:\n");
                    print(sub, row1, col1);
                }
                else{
                    printf("Subtraction of two matrices not possible:\n");
                }
                break;
                case 3:
                    printf("Exicting...");
                    break;
                default:
                    printf("Invalid option!\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &op);           
    } while (op=='y' || op=='Y');
    printf("\nExiting...\n");
    return 0;
}
void read(int mat[5][5], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void print(int mat[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int Sum(int mat1[5][5], int row, int col) {
    int sum=0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum+= mat1[i][j];
        }
    }
    return sum;
}
void subt(int mat1[5][5], int mat2[5][5], int sub[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sub[i][j] = mat1[i][j]-mat2[i][j];
        }
    }
}