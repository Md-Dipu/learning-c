#include <stdio.h>

// single line comment

/*
    muliline
    line
    comment
*/
int main() // ata amader main function
{
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // float r;
    // printf("Enter radius of circle: ");
    // scanf("%f", &r);

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade);

    // char blood_group[4]; // declearing string
    // printf("Enter your blood groud: ");
    // scanf("%s", blood_group); // getting string input form user using std i/o

    /*
     *      This is mulit line comment
     *      this is not gonna run
     */

    char name[40];
    printf("Enter your name: ");
    // scanf("%[^\n]", name);
    gets(name);

    printf("Your name is %s", name);
    return 0;
}