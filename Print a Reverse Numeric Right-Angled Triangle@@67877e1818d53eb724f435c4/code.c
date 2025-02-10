








#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop for rows (from N to 1)
    for (int i = N; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Add space after numbers
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}


