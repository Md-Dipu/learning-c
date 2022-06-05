#include <stdio.h>

int main()
{
    for (int i = 5; i <= 11; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d\n", 5, j, 5 * j);
        }
        printf("\n");
    }

    return 0;
}