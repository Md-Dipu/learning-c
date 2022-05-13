#include <stdio.h>
#include <math.h>

int main()
{
    printf("2 to the power 8 = %d\n", (int)pow(2, 8)); // 1. pow()
    printf("Square root of 2 is %lf\n", sqrt(2));      // 2. sqrt()
    printf("Cubic root of 8 is %d\n", (int)cbrt(8));   // 3. cbrt()

    printf("ceil of 3.021 is %d\n", (int)ceil(3.021));   // 4. ceil()
    printf("floor of 7.904 is %d\n", (int)floor(7.904)); // 5. floor()
    printf("round of 2.51 is %d\n", (int)round(2.51));   // 6. round()
    printf("abs of -56 is %d\n", (int)abs(-56));         // 7. abs()

    printf("max between 5 and 9 is %d\n", (int)fmax(5, 9)); // 8. fmax()
    printf("min between 5 and 9 is %d\n", (int)fmin(5, 9)); // 9. fmax()
    return 0;
}