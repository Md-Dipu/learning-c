#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a lower-case letter: ");
    scanf("%c", &ch);

    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    // {
    //     printf("Its a vowel");
    // }
    // else
    // {
    //     printf("Its a consonant");
    // }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Its a vowel\n");
        break;
    default:
        printf("Its a consonent\n");
        break;
    }
    return 0;
}