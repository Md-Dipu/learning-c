#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int magic_number;
    int my_number;
    int time_counter = 0;
    bool win_status = false;

    while (true)
    {
        printf("Enter a magic number (0-9): ");
        magic_number = getch() - 48;
        system("cls"); // cls for windows and clear for linux

        if (magic_number >= 0 && magic_number <= 9)
            break;
    }

    while (time_counter < 3)
    {
        printf("Guess the magic number (%d/3): ", time_counter + 1);
        scanf("%d", &my_number);

        if (my_number == magic_number)
        {
            win_status = true;
            break;
        }

        time_counter++;
    }

    if (win_status == true)
    {
        printf("You Win!");
    }
    else
    {
        printf("Your lose!");
    }

    return 0;
}