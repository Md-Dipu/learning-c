#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (i == 1)
            printf("%d ", i);
        else
            printf("+ %d ", i);
    }

    (n > 0) ? printf("= %d", sum) : printf("You entered less than 1");
    return 0;
}