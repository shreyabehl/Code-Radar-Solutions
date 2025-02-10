





#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop for rows
    for (int i = N; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}

