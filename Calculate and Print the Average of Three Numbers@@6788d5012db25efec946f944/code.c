


#include <stdio.h>

int main() {
    int a, b, c;
    float avg;

    // Taking input
    scanf("%d %d %d", &a, &b, &c);

    // Calculating average with float division
    avg = (a + b + c) / 3.0;  

    // Printing the result with two decimal places
    printf("Average: %.2f\n", avg);

    return 0;
}
