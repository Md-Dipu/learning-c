#include <stdio.h>

int main()
{

    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");
    // printf("I love Bangladesh!\n");

    int n;
    printf("How many times your want to calculate: ");
    scanf("%d", &n);

    while (n--) // 4
    {
        int a, b;
        printf("Value of n is %d\n", n); // 3
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);

        int sum = a + b;
        printf("Sum is %d\n\n", sum);
    }

    return 0;
}