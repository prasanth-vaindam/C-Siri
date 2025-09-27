const int MAX_SIZE = 1024;
constexpr double PI = 3.14159265359;  // C++11+

const int a = 10;           // Compile-time constant
const int b = rand();       // Runtime constant - value set at runtime
const int c = getValue();   // Runtime constant - function call result

constexpr int x = 10;              // Must be compile-time constant
constexpr int y = x + 5;           // Evaluated at compile-time
constexpr int z = getValue();      // ERROR: getValue() must be constexpr


int rand() { return 42; } // Example function
int getValue() { return 100; } // Example function
int main() {
    // MAX_SIZE = 2048; // Error: cannot modify a const variable
    // PI = 3.14;      // Error: cannot modify a constexpr variable


    return 0;
}