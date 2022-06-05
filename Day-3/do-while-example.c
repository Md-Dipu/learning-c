#include <stdio.h>
#include <conio.h>

int main()
{
    char password[16];
    int i = 0;
    char ch;

    printf("Enter your password: ");

    do
    {
        ch = getch();
        password[i] = ch;

        if (ch == 13)
            break;

        i++;
    } while (i < 16);

    password[i] = '\0';

    printf("\nYour password is %s", password);

    return 0;
}