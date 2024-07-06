#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("%c %c", *str, *(str+4));
    return 0;
}