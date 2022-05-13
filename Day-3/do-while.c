#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    int loop_count = 0;

    do
    {
        // This block will execute at lest one time
        sum += n--;
        loop_count++;
    } while (n > 0);

    printf("Sum is %d\n", sum);
    printf("Loop execute %d times", loop_count);
    return 0;
}