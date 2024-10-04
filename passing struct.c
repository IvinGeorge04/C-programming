#include <stdio.h>
struct student{
    int roll;
    char name[20];
};
void read(struct student a[],int n)
{
    for(int i =0;i<n;i++)
    {
        printf("\nenter name:");
        scanf("%s",a[i].name);
        printf("\nENter no:");
        scanf("%d",&a[i].roll);
    }
}
void print(struct student a[],int n)
{
    for(int i =0;i<n;i++)
    {
        printf("\n%s\t",a[i].name);
        printf("%d\n",a[i].roll);
    }
}
int main() {
    int n;
    printf("Enter:");
    scanf("%d",&n);
    struct student stud[n];
    read(stud,n);
    printf("\n roll no\tname\n");
    print(stud,n);
    return 0;
}