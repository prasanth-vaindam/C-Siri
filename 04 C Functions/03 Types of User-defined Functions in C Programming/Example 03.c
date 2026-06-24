#include <stdio.h>

void calculateBill(int units)
{
    float bill;

    if(units <= 100)
        bill = units * 2;
    else if(units <= 200)
        bill = 100 * 2 + (units - 100) * 3;
    else
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;

    printf("Electricity Bill = Rs %.2f", bill);
}

int main()
{
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    calculateBill(units);

    return 0;
}