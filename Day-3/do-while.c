#include <stdio.h>
#include <conio.h>

int main()
{
    int n = -1;

    do
    {
        printf("%d. I love C.\n", n);
        n++;
        printf("Value of n is %d\n", n);
        getch();
    } while (n > 0 && n < 10);

    return 0;
}