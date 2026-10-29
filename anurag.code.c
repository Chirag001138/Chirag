#include <stdio.h>

int main() {
    float mass, velocity, momentum;

    // Accept mass in kilograms
    printf("Enter mass in kilograms: ");
    scanf("%f", &mass);

    // Accept velocity in meters per second
    printf("Enter velocity in meters per second: ");
    scanf("%f", &velocity);

    // Calculate momentum: p = m * v
    momentum = mass * velocity;

    // Display the result
    printf("Momentum is: %.2f kg·m/s\n", momentum);

    return 0;
}   
