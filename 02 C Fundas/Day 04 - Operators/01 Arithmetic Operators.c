// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 9,b = 4;
    float c;
    c = a+b;
    printf("a+b = %d \n",(int)c); // 10
    c = a-b;
    printf("a-b = %d \n",(int)c); // 5
    c = a*b;
    printf("a*b = %d \n", (int) c); // 36
    c = (float)a/b;
    printf("a/b = %f \n",c); // 2.25
    c = a%b;
    printf("Remainder when %d divided by %d = %d \n", a,b,c); // 1
    
    return 0;
}