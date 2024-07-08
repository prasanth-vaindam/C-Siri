#include <stdio.h>
int main()
{
    int i = 11;
    float res;

    res = i/2;
    printf("%.2f \n", res);

    res = (float)i/2; // Explicit Typecasting 
    printf("%.2f \n", res);

    int a = 10;
    float b = 10.98766;
    printf("%f \n", a+b); // Implicit TypeCasting because of the value is float

    return 0;
}