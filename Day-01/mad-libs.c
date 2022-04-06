#include <stdio.h>

int main()
{
    char name[20];
    int age;

    // getting name
    printf("Enter your name: ");
    scanf("%s", name);

    // getting age
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("My name is %s. My age is %d.", name, age);

    return 0;
}