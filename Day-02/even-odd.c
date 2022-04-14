#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n == 0)
        {
            printf("Your number is Zero");
        }
        else if (n % 2 == 0)
        {
            printf("Your number is Even");
        }
        else
        {
            printf("Your number is Odd");
        }
    }
    else
    {
        printf("Your number is negitive");
    }

    return 0;
}