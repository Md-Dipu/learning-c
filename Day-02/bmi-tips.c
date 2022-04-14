#include <stdio.h>

int main()
{
    float weight, height, height_foot, height_inch, bmi;

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your height: ");
    scanf("%f'%f\"", &height_foot, &height_inch);

    height_foot = height_foot + height_inch / 12; // converting inch to foot
    height = height_foot * 0.3048;                // converting foot to meter
    bmi = weight / (height * height);             // calculating BMI

    printf("Your BMI is %f", bmi);

    printf("\n\nTips:\n");
    if (bmi < 18.5)
    {
        printf("You are under-weight. Your must taking care of your health.");
    }
    else if (bmi < 25)
    {
        printf("You are healthy. Your should maintain this health.");
    }
    else if (bmi < 30)
    {
        printf("You are suffering from overweight. Your should control your diet.");
    }
    else
    {
        printf("You are very overweight. Your must control your diet and go to gym also doctor. You maybe die.");
    }

    return 0;
}