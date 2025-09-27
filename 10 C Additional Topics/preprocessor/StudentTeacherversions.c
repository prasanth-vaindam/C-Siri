#include <stdio.h>

#define STUDENT_VERSION 1  // Set to 0 for teacher version

int main() {
    printf("Math Quiz!\n");
    printf("What is 15 + 25?\n");
    
#if STUDENT_VERSION
    printf("Enter your answer: ");
    int answer;
    scanf("%d", &answer);
    // Student sees input prompt
#else
    printf("Answer: 40\n");
    printf("Explanation: 15 + 25 = 40\n");
    // Teacher sees the answer
#endif
    
    return 0;
}