

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop for each row
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");  // Move to the next row
    }

    return 0;
}
