#include <stdio.h>
#define MAX 50
union personalDtl{
    char name[MAX];
    char house[MAX];
    char city[MAX];
    char state[MAX];
    char pincode[MAX];
};
int main()
{
    union personalDtl dtl;
    printf("Enter the name:");
    scanf("%[^\n]",dtl.name);
    printf("Enter the house name:");
    scanf(" %[^\n]",dtl.house);
    printf("city name:");
    scanf(" %[^\n]",dtl.city);
    printf("Enter the state:");
    scanf(" %[^\n]",dtl.state);
    printf("Enter the pincode:");
    scanf(" %[^\n]",dtl.pincode);
    printf("name\thouse\tcity\tstate\tpincode\n");
    printf("%s\t%s\t%s\t%s\t%s",dtl.name,dtl.house,dtl.city,dtl.state,dtl.pincode);
    return 0;
}