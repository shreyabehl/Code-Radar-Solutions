


#include <stdio.h>

int main() {
    int N;
    
    // Taking input
    scanf("%d", &N);

    // Printing the pyramid pattern
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers without space at the end
            if (j < i) printf(" "); // Add space only between numbers
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

