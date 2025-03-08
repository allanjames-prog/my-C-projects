#include <stdio.h>
#include <string.h>

int main(void) {
    // primitive datatypes

    // Integers in C
    int age = 25;
    printf("Age will be: %d\n", age);

    // Floats in C
    float weight = 70.5;
    printf("Weight will be: %f\n", weight);

    // Doubles in C
    double pi = 3.14159265359;
    printf("pi will be: %f\n", pi);

    // Characters in C
    char letter = 'A';
    printf("pi will be: %c\n", letter);

    // Modifiers for Data Types
    short smallNum = 10;
    long largeNum = 1000000000;
    printf("This is a short: %d and this is a long: %ld\n", smallNum, largeNum);

    // Signed and unsigned integers
    unsigned int positiveNum = 40000;
    signed int negativeNum = -100;
    printf("This is an unsigned positive: %d and this is a signed negative: %d\n", positiveNum, negativeNum);

    // The void type
    void printMessage() {
        printf("Hello, World!\n");
    }
    printMessage();

    // Size of Data Types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));


}