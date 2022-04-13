#include <stdio.h>

int main()
{
    float amount, charge, total;

    printf("Enter cash out amount: ");
    scanf("%f", &amount);

    charge = amount * (1.75 / 100); // calculating charge (1.75%)
    total = amount + charge;        // calculating total amount with charge

    printf("Your charge is %.2f\n", charge);
    printf("Your cash out total amount: %.2f", total);
    return 0;
}