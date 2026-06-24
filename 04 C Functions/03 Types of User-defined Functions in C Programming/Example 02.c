#include <stdio.h>

float calculateArea()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    return 3.14 * radius * radius;
}

int main()
{
    float area;

    area = calculateArea();

    printf("Area = %.2f", area);

    return 0;
}