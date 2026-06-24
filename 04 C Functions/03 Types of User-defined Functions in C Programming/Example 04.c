#include <stdio.h>

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, rate, time, si;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (Years): ");
    scanf("%f", &time);

    si = simpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f", si);

    return 0;
}