#include <stdio.h>
int main()
{
    FILE *fp;
    char A[100],B[100];
    fp=fopen("file.txt","w");
    printf("Enter the string:");
    scanf("%[^\n]",A);
    fprintf(fp,"%s",A);
    fclose(fp);
    fp=fopen("file.txt","r");
    printf("\nThe entered data is:");
    while ((fscanf(fp,"%[^\n]",B))!=EOF);
        printf("%s",B);
    fclose(fp);
    printf("\nTo append");
    fp=fopen("file.txt","a");
    printf("\nEnter the string:");
    scanf(" %[^\n]",A);
    fprintf(fp,"%s",A);
    fclose(fp);
    fp=fopen("file.txt","r");
    printf("\nThe data in file is:");
    while ((fscanf(fp," %[^\n]",B))!=EOF);
        printf("%s\n",B);
    fclose(fp);
    return 0;

}