#include <stdio.h>
// #define PI 3.1416

int main()
{
    const float PI = 3.1416; // Its a constant
    float area, r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("\nArea of circle: %f", area);
    return 0;
}