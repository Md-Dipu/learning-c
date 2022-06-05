#include <stdio.h>

int main()
{
    // if (2 < 3)
    // {
    //     printf("2 is less than 3");
    // }
    // else
    // {
    //     printf("2 is not less than 3");
    // }

    // ?:

    // (2 == 3) ? printf("2 is equal to 3") : printf("2 is not equal to 3");

    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    int max = (a >= b && a >= c) ? a : (b >= c) ? b
                                                : c;

    // as condition 1: if a is bigger than b and c
    // true: max = a
    // false: max = (b > c) ? b : c;

    printf("%d is bigger", max);

    return 0;
}