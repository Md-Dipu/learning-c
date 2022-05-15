#include <stdio.h>
#include <ctype.h>

int main()
{
    int numbers_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char char_array[] = {'a', 'e', 'i', 'o', 'u'};

    char str[] = "This is a string"; // string is also a array of char

    int marks[5];
    marks[0] = 67;
    marks[1] = 49;
    marks[2] = 71;
    marks[3] = 48;
    marks[4] = 31;

    printf("One of vowel is %c\n", char_array[2]);

    for (int i = 0; i < 5; i++)
    {
        char_array[i] = toupper(char_array[i]);
    }

    printf("One of vowel is %c\n", char_array[2]);

    return 0;
}