#include <stdio.h>

void say_hello(const char *name);
int adder(int number1, int number2);

int main()
{
    say_hello("H. Malak");
    printf("5 + 6 = %d", adder(5, 6));
    return 0;
}

// function 1: no return
void say_hello(const char *name)
{
    printf("Hello, %s\n", name);
}

// function 2: intger return
int adder(int number1, int number2)
{
    return (number1 + number2);
}