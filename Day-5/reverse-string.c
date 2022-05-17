#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    int i = 0, current_strlen = (int)strlen(str);

    for (i = 0; i < current_strlen / 2; i++)
    {
        char temp_char = str[i];
        str[i] = str[current_strlen - 1 - i];
        str[current_strlen - 1 - i] = temp_char;
    }

    printf("%s", str);
    return 0;
}