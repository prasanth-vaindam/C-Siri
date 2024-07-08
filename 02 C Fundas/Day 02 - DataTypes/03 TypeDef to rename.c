#include <stdio.h>
int main()
{
    typedef float mark;
    mark a, b, c, tot;

    typedef long long int bigInt;

    bigInt bigA = 100000000;

    // printf("bigInt's size = %d bytes\n", size(long long)); // Throws an error Why
    printf("bigA+100 = %d\n", bigA + 100);

    printf("Enter marks obtained in three subjects: ");
    scanf("%f,%f*%f", &a, &b, &c);
    scanf("%f,%f,%f", &a, &b, &c);
    scanf("%f %f %f", &a, &b, &c);
    scanf("%f%f%f", &a, &b, &c);

    tot = a+b+c;
    printf("\nTotal marks = %.2f \n", tot);

    return 0;
}