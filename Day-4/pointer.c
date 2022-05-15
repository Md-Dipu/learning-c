#include <stdio.h>

int main()
{
    int a = 10;
    int *pa = &a; // pointer of variable a

    char b = 'D';
    char *pb = &b; // pointer of variable a

    printf("Value of a is %d\n", a);
    printf("Pointer of a is %p\n", pa);
    printf("Value from pointer of a is %d\n", *pa);

    printf("Value of b is %c\n", b);
    printf("Pointer of b is %p\n", pb);
    printf("Value from pointer of b is %c\n", *pb);
    return 0;
}