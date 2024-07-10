
 
 
 #include <stdio.h>
int main()
{
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

/*
    We use %f and %lf format specifier for float and double respectively.
*/

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}