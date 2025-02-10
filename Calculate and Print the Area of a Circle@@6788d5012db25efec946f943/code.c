

#include <stdio.h>
#define PI 3.14

double findArea(double r) {
    return PI * r * r;  // Removed pow() and used direct multiplication
}

int main() {
    double radius;
    scanf("%lf", &radius);  // Read input from user
    printf("Area: %.2lf\n", findArea(radius));  // Print area with 2 decimal places
    return 0;
}