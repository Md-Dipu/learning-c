#include <stdio.h>
#include <math.h>

int main()
{
    int numbers_array_2d[][3] = {{1, -2, 3}, {4, -5, -6}, {-7, 8, 9}};

    char char_array_2d[][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i', 'j', 'k', 'l'},
    };

    char members[][20] = {
        "hasan ali",
        "mohammad shek",
        "sofia rail",
        "karim pasa",
    };

    // printf("Element of 1st row and 2nd column = %d\n", numbers_array_2d[0][1]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            numbers_array_2d[i][j] = abs(numbers_array_2d[i][j]);
        }
    }

    // printf("Element of 1st row and 2nd column = %d\n", numbers_array_2d[0][1]);

    char_array_2d[3][0] = 'm';
    char_array_2d[3][1] = 'n';
    char_array_2d[3][2] = 'o';
    char_array_2d[3][3] = 'p';

    // printf("Element of 4th row and 2nd column = %c\n", char_array_2d[3][1]);

    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i, members[i]);
    }

    return 0;
}