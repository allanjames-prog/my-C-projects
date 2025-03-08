#include <stdio.h>
#include <string.h>

int main(void) {
    // if, else if, and else
    int age = 18;
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    // switch Statement
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
        default:
            printf("Invalid day\n");
    }

    // For loop
    for (int i = 0; i < 5; i++) {
        // Prints 0, 1, 2, 3, 4
        printf("%d ", i); 
    }
    printf("\n");

    // While loop
    int count = 0;
    while (count < 5) {
        // Prints 0, 1, 2, 3, 4
        printf("%d ", count);  
        count++;
    }
    printf("\n");

    // do while loop    
    int count = 0;
    do {
        // Prints 0, 1, 2, 3, 4
        printf("%d\n", count);  
        count++;
    } while (count < 5);

    // break and continue
    // Example with break
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            // Exit the loop when i equals 3
            break;  
        }
        printf("%d\n", i);  // Prints 0, 1, 2
    }
    
    // Example with continue
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            // Skip this iteration when i equals 3
            continue;  
        }
        printf("%d\n", i);  // Prints 0, 1, 2, 4
    }
    

}