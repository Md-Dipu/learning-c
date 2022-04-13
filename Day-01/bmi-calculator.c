#include <stdio.h>

int main()
{
    float weight, height_foot, height_inch;

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your height: ");
    scanf("%f'%f\"", &height_foot, &height_inch);

    height_foot = height_foot + height_inch / 12;
    float height = height_foot * 0.3048; // converting foot to meter
    float bmi = weight / (height * height);

    printf("Your BMI is %f", bmi);
    return 0;
}