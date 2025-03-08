#include <stdio.h>
#include <string.h>

// Prototype
int add(int a, int b);

int main() {
    int result = add(5, 7);
    printf("Sum: %d\n", result);

    // function calls
    greet();

    printSquare(4);

    result = multiply(3, 6);
    printf("Product: %d\n", result);

    int num = getNumber();
    printf("Number: %d\n", num);

    result = factorial(5);
    printf("Factorial: %d\n", result);

    num = 10;
    changeValue(num);
    // Still prints 10
    printf("Value of num: %d\n", num);  

    int num = 10;
    changeValue(&num);
    // Now prints 100
    printf("Value of num: %d\n", num);  

    return 0;
}

// Function Declaration and Definition
int add(int a, int b) {
    return a + b;
}

// Types of Functions
// Functions with no parameters and no return value
void greet() {
    printf("Hello, welcome!\n");
}

// Functions with Parameters but no return value
void printSquare(int num) {
    printf("Square: %d\n", num * num);
}

// Functions with parameters and return values
int multiply(int x, int y) {
    return x * y;
}

// Functions with no parameters and return value
int getNumber() {
    return 10;
}

// Recursion (functions calling themselves)
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Passing Arguments to Functions
// Pass by Value (Default in C)
void changeValue(int x) {
    x = 100;  // Changing x inside function
}

// Pass by Reference (Using Pointers)
void changeValue(int *x) {
    *x = 100;  // Changing the value at the memory address
}

static inline int square(int x) {
    return x * x;
}

// Inline Functions (Using static inline)
int main() {
    printf("Square: %d\n", square(5));
    return 0;
}

// Recap
// | Type                          | Parameters | Returns Value? |
// |-------------------------------|------------|----------------|
// | No Parameters, No Return      | ❌         | ❌             |
// | Parameters, No Return         | ✅         | ❌             |
// | No Parameters, Returns Value  | ❌         | ✅             |
// | Parameters, Returns Value     | ✅         | ✅             |

