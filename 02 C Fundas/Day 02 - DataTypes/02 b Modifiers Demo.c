#include<stdio.h>
int main(){
    // valid codes
    unsigned int x = 35;
    int y = -35;  // signed int
    int z = 36;  // signed int

    // invalid code: unsigned int cannot hold negative integers
    unsigned int num = -35;

    printf("x: %d\n", x);
    printf("y: %d, y: %u\n", y, y);
    printf("z: %d\n", z);
    printf("num: %u\n", num);
}