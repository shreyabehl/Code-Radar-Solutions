


#include <stdio.h>

int main() {
    double num;

    // Taking input
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input!\n");
        return 1; // Exit with error
    }

    // Printing the entered double
    printf("You entered: %.4lf\n", num); // 4 decimal places

    return 0;
}
