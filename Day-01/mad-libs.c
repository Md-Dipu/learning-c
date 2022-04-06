#include <stdio.h>

int main()
{
    char name[20];
    char color[20];
    int favorite_number;
    char celebrity[20];

    // getting name
    printf("Enter your name: ");
    scanf("%[^\n]", name);

    // getting color
    printf("Enter a color: ");
    scanf("\n");
    scanf("%[^\n]", color);

    // getting favorite number
    printf("Enter a number: ");
    scanf("%d", &favorite_number);

    // getting celebrity name
    printf("Enter a celebrity name: ");
    scanf("\n");
    scanf("%[^\n]", celebrity);

    // printing
    printf("\nMy name is %s. \nI favorite color is %s. \nMy favorite number is %d. \nI love %s.", name, color, favorite_number, celebrity);

    return 0;
}