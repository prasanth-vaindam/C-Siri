#include <stdio.h>

#define PREMIUM_VERSION  // Comment out for free version

int main() {
    printf("Welcome to Text Editor!\n");
    
    // Free features
    printf("✓ Basic text editing\n");
    printf("✓ Save files\n");
    printf("✓ Open files\n");
    
#ifdef PREMIUM_VERSION
    printf("✓ Spell check\n");
    printf("✓ Auto-save\n");
    printf("✓ Multiple themes\n");
    printf("✓ Cloud sync\n");
    printf("Thank you for purchasing Premium!\n");
#else
    printf("\nUpgrade to Premium for:\n");
    printf("- Spell check\n");
    printf("- Auto-save\n");
    printf("- Multiple themes\n");
    printf("- Cloud sync\n");
#endif
    
    return 0;
}