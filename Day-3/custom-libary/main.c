#include <stdio.h>
#include "calculator.h"

int main(void)
{
    int num1 = 57, num2 = 29;

    int sum = adder(num1, num2);
    printf("Sum of 57 and 29 is %d\n", sum);

    int dif = subtractor(num1, num2);
    printf("Difference of 57 and 29 is %d\n", dif);

    int mul = multiplier(num1, num2);
    printf("Multiplation of 57 and 29 is %d\n", mul);

    float div = divider(num1, num2);
    printf("Division of 57 and 29 is %f\n", div);

    return 0;
}
