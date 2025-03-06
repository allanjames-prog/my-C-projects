#include <stdio.h>

// Defining a struct
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declaring and initializing a struct variable
    struct Student student1 = {"John Doe", 20, 3.5};

    // Accessing struct members
    printf("Student Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}
