#include <stdio.h>
#include <string.h>

// Base Structure (Equivalent to Parent Class)
typedef struct {
    char brand[20];
    char model[20];
    int year;
} Vehicle;

// Function to display vehicle details
void displayVehicleInfo(Vehicle *v) {
    printf("%d %s %s\n", v->year, v->brand, v->model);
}

// Derived Structure for Car (inherits Vehicle)
typedef struct {
    Vehicle base;  // "Inheriting" Vehicle struct
    int seats;
} Car;

// Function to display Car details
void displayCarInfo(Car *c) {
    displayVehicleInfo(&c->base);  // Call base function
    printf("Seats: %d\n", c->seats);
}

// Derived Structure for Truck
typedef struct {
    Vehicle base;
    float load_capacity;
} Truck;

// Function to display Truck details
void displayTruckInfo(Truck *t) {
    displayVehicleInfo(&t->base);
    printf("Load Capacity: %.2f tons\n", t->load_capacity);
}

// Derived Structure for Motorcycle
typedef struct {
    Vehicle base;
    int engine_capacity;
} Motorcycle;

// Function to display Motorcycle details
void displayMotorcycleInfo(Motorcycle *m) {
    displayVehicleInfo(&m->base);
    printf("Engine Capacity: %dcc\n", m->engine_capacity);
}

// Main Function to Demonstrate Usage
int main() {
    // Creating objects
    Car car1 = {{"Toyota", "Corolla", 2022}, 5};
    Truck truck1 = {{"Volvo", "FH16", 2020}, 20};
    Motorcycle bike1 = {{"Yamaha", "R1", 2023}, 1000};

    // Displaying details
    printf("Car Details:\n");
    displayCarInfo(&car1);

    printf("\nTruck Details:\n");
    displayTruckInfo(&truck1);

    printf("\nMotorcycle Details:\n");
    displayMotorcycleInfo(&bike1);

    return 0;
}
