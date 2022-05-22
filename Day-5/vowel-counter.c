#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    int counter = 0;
    for (int i = 0; i < strlen(str); ++i)
    {
        char ch = tolower(str[i]);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            counter++;
        }
    }

    printf("%d", counter);
    return 0;
}