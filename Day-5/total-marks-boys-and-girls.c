#include <stdio.h>

int main()
{
    int n = 25;
    int students_marks[n];
    int marks_b = 0, marks_g = 0;
    char students_bitstrb[] = "1011010010100100001110010";

    for (int i = 0; i < n; i++)
        scanf("%d", &students_marks[i]);

    for (int i = 0; i < n; i++)
    {
        if (students_bitstrb[i] == '1')
            marks_b += students_marks[i];
        else
            marks_g += students_marks[i];
    }

    printf("%d %d", marks_b, marks_g);
    return 0;
}