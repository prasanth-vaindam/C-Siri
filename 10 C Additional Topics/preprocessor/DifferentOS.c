#include <stdio.h>

int main() {
    printf("Welcome to our program!\n");
    
#ifdef _WIN32
    printf("Running on Windows\n");
    printf("Press any key to continue...\n");
    // Windows-specific code
#elif __linux__
    printf("Running on Linux\n");
    printf("Press Enter to continue...\n");
    // Linux-specific code
#elif __APPLE__
    printf("Running on macOS\n");
    printf("Press return to continue...\n");
    // macOS-specific code
#else
    printf("Running on unknown system\n");
#endif
    
    return 0;
}