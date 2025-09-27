#define VERSION "2.1"
#define APP_NAME "MyApp v" VERSION  // Becomes "MyApp v2.1"


#include <stdio.h>
int main() {

    const int MAX_SIZE = 1024;
    const double PI = 3.14159265359;  

    const char* version = "2.1";
    const char* appName = "MyApp v2.1";
    printf("Const: %s\n", appName);
    printf("Application: %s\n", APP_NAME);

    printf("Max Size: %d\n", MAX_SIZE);
    printf("PI: %.11f\n", PI);
    return 0;
}