#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Char: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It's vowel");
        break;
    default:
        printf("It's consonant");
    }
    return 0;
}