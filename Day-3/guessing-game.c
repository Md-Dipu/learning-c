#include <stdio.h>
#include <stdbool.h>

int main()
{
    int my_number;
    int magic_number = 4;
    int times_counter = 0;
    bool win_status = false;

    while (!win_status && times_counter <= 3)
    {
        printf("Guess the magic number (%d/3): ", ++times_counter);
        scanf("%d", &my_number);

        win_status = (my_number == magic_number) ? true : false;
        if (win_status)
            break;
    }

    if (win_status)
        printf("\nYour Won! You guess the right number!");
    else
        printf("\nYou lose! The magic number is %d", magic_number);

    return 0;
}