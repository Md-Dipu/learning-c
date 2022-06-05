#include <stdio.h>

// 1 + 2 + 3 + 4 + 5 + ... + n

int main()
{
    int n, sum = 0;
    printf("Enter n's value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        (i != n) ? printf("%d + ", i) : printf("%d", i);
        sum += i;
    }
    printf(" = %d", sum);
    return 0;
}