#include <stdio.h>
#include<stdbool.h>
int main() {
	
	//void Type is not valid
//	void iVoid = 1;
//	printf("iVoid: %d\n",iVoid);
	
    // Integer variable
    int integerVar = 10;
    printf("Integer: %d\n", integerVar);

    // Float variable
    float floatVar = 3.14;
    printf("Float: %.2f\n", floatVar);

    // Double variable
    double doubleVar = 3.141592653589793;
    printf("Double: %lf\n", doubleVar);

	// exponential22.442 * 10^2
	float normalizationFactor = 22.442e2;
	printf("normalizationFactor %.4f\n",normalizationFactor);

    // Character variable
    char charVar = 'A';
    printf("Character: %c\n", charVar);

    // String (array of characters)
    char stringVar[] = "Hello, C!";
    printf("String: %s\n", stringVar);

    // Boolean (using _Bool)
    _Bool boolVar = false; // 1 for true, 0 for false
    printf("Boolean: %d\n", boolVar);

    // Long integer variable
    long longIntVar = 1234567890;
    printf("Long Integer: %ld\n", longIntVar);

    // Short integer variable
    // If you are sure, only a small integer
	// ([-32,767, +32,767] range) will be used, you can use short.
    short shortIntVar = 12345;
    printf("Short Integer: %hd\n", shortIntVar);

    //return 0;
}
