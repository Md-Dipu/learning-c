#include <stdio.h>
#include <string.h>

char trans_toupper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (ch - 32);
    else
        return ch;
}

char trans_tolower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return (ch + 32);
    else
        return ch;
}

int main()
{
    char str[100];
    scanf("%[^\n]%*c", &str);

    char upper_str[100];
    char lower_str[100];

    for (int i = 0; i <= (int)strlen(str); ++i)
    {
        upper_str[i] = trans_toupper(str[i]);
        lower_str[i] = trans_tolower(str[i]);
    }

    printf("%s\n", upper_str);
    printf("%s\n", lower_str);
    return 0;
}