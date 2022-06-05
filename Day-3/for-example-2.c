#include <stdio.h>
#include <stdbool.h>

// 1 - 2 + 3 - 4 + 5 - ... (+/-) n = ?

int main()
{
    int n, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    bool is_positive = true;

    for (int i = 1; i <= n; i++)
    {
        // (i != n) ? (is_positive) ? printf("%d - ", i) : printf("%d + ", i) : printf("%d", i);

        // if (i != n)
        // {
        //     if (is_positive)
        //     {
        //         printf("%d - ", i);
        //     }
        //     else {
        //         printf("%d + ", i);
        //     }
        // }
        // else 
        // {
        //     printf("%d", i);
        // }

        if (is_positive)
            sum += i;
        else
            sum -= i;

        is_positive = !is_positive;
    }

    // printf(" = %d", sum);
    printf("Result is %d", sum);
    return 0;
}