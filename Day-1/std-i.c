#include <stdio.h>

int main()
{
    int roll;
    float salary;
    char grade;
    char versity_name[40];
    // printf("Enter your salary: ");
    // scanf("%f", &salary);
    printf("Enter your Versity name: ");
    scanf("%[^\n]", versity_name);

    printf("Your versity name is %s", versity_name);
    return 0;
}