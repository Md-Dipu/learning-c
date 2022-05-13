#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    int loop_count = 0;
    while (n > 0)
    {
        sum += n--;
        loop_count++;
    }

    printf("Sum is %d\n", sum);
    printf("Loop execute %d times", loop_count);
    return 0;
}