#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
struct Person
{
    char name[20];
    int age;
    bool is_alive;
};

typedef struct Person Person;
*/

/*
typedef struct Person
{
    char name[20];
    int age;
    bool is_alive;
} Person;
*/

typedef struct
{
    char name[20];
    int age;
    bool is_alive;
} Person;

int main()
{
    Person me;

    strcpy(me.name, "dipu");
    me.age = 20;
    me.is_alive = true;

    if (me.is_alive)
    {
        printf("Person's name: %s\n", me.name);
        printf("Person's age: %d\n", me.age);
    }
    else
    {
        printf("The person is passed.\n");
    }

    return 0;
}