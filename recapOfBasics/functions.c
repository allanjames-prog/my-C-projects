#include <stdio.h>
#include <string.h>

// Prototype
int add(int a, int b);

int main() {
    int result = add(5, 7);
    printf("Sum: %d\n", result);
    
    greet();
    return 0;
}

// Function Declaration and Definition
int add(int a, int b) {
    return a + b;
}

// Types of Functions
void greet() {
    printf("Hello, welcome!\n");
}