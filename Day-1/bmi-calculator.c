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
    return 0;
}