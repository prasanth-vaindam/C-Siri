#include <stdio.h>
int main() {
    int a = 2, b = 1;
    int x;
    x = a++ - --b;
    printf("%d %d %d", x, a, b);
    return 0;
}