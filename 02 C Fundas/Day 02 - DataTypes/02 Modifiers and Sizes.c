#include <stdio.h>      
int main() {
    short a;
    long b;
    long long c;
    long double d;
    signed char e = 128;
    unsigned char f = 128;

    printf("2 or 4 size of short = %d bytes\n", sizeof(a));
    printf("4 size of int = %d bytes\n",sizeof(int));
    printf("size of int = %d bytes\n",sizeof(int));
    printf("size of signed int = %d bytes\n",sizeof(signed int));
    printf("size of unsigned int = %d bytes\n",sizeof(unsigned int));
    printf("size of signed char = %d bytes\n", sizeof(e));
    printf("size of unsigned char = %d bytes\n", sizeof(f));
    printf("e:128 = %d\n", e);
    printf("f:128 = %d\n", f);
    
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));
    printf("size of long double= %d bytes\n", sizeof(d));
    return 0;
}