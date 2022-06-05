#include <stdio.h>

/*
                      star            space
    *               = 1   f: (2n - 1) 4 f: (5 - n)
   ***              = 3               3
  *****             = 5               2
 *******            = 7               1
*********           = 9               0

*/

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int white_space = 1; white_space <= (n - row); white_space++)
        {
            printf(" ");
        }

        for (int collumn = 1; collumn <= (2 * row - 1); collumn++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}