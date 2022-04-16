#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You're not eligible.");
    }
    else
    {
        printf("You're not eligible.");

        int choice;
        printf("1. Sadman\n");
        printf("2. Shek M. Hasan\n");
        printf("3. Naeem\n");
        printf("4. Yasir\n");

        printf("Enter your vote: ");
        scanf("%d", &choice);

        char confirmation;

        switch (choice)
        {
        case 1:
            printf("Your choice is Sadman\n");
            printf("Are your sure (y/n)? ");
            scanf(" %c", &confirmation);
            switch (confirmation)
            {
            case 'y':
                printf("Your vote successful!");
                break;
            case 'n':
                printf("Vote dower age hoy nai");
                break;
            }
            break;

        case 2:
            printf("Your choice is Shek M. Hasan\n");
            printf("Are your sure (y/n)? ");
            scanf(" %c", &confirmation);
            switch (confirmation)
            {
            case 'y':
                printf("Your vote successful!");
                break;
            case 'n':
                printf("Vote dower age hoy nai");
                break;
            }
            break;

        case 3:
            printf("Your choice is Naeem\n");
            printf("Are your sure (y/n)? ");
            scanf(" %c", &confirmation);
            switch (confirmation)
            {
            case 'y':
                printf("Your vote successful!");
                break;
            case 'n':
                printf("Vote dower age hoy nai");
                break;
            }
            break;

        case 4:
            printf("Your choice is Yasir\n");
            printf("Are your sure (y/n)? ");
            scanf(" %c", &confirmation);
            switch (confirmation)
            {
            case 'y':
                printf("Your vote successful!");
                break;
            case 'n':
                printf("Vote dower age hoy nai");
                break;
            }
            break;

        default:
            printf("Invalid ...");
            break;
        }
        return 0;
    }
}