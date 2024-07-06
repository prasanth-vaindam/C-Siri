#include <stdio.h>
int main() {
    int x = 5, y = 10;
    int *ptr;
    ptr = &x;
    *ptr += 1;
    ptr = &y;
    *ptr += 1;
    printf("%d %d", x, y);
    return 0;
}