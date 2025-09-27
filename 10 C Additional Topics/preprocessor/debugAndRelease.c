#include <stdio.h>

#define DEBUG 0  // Set to 0 for release

int main() {
    int x = 10;
    int y = 20;
    int result = x + y;
    
#if DEBUG
    printf("Debug: x=%d, y=%d\n", x, y);
    printf("Debug: result=%d\n", result);
#endif
    
    printf("Final result: %d\n", result);
    return 0;
}