#include <stdio.h>

int main()
{
    // if (2 < 9)
    // {
    //     printf("Two is less than nine"); // this code execute if the 2 < 9 is true
    // }

    // if (/* condition */)
    // {
    //     /* code -1 */ // this code execute if the condition is true
    // }
    // else
    // {
    //     /* code - 2 */ // this code execute if the condition is false
    // }

    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("n is negitive"); // this code execute if the n < 0 is true
    }
    else if (n > 0)
    {
        printf("n is positive"); // this code execute if the n < 0 is false but n > 0 is true
    }
    else
    {
        printf("n is zero"); // this code execute if all condidions are false
    }

    return 0;
}