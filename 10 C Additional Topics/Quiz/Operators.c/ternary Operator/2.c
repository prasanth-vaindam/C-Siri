#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 30, d;
    d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d", d);
    return 0;
}