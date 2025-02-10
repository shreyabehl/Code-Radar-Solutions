
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop for rows
    for (int i = 1; i <= N; i++) {
        // Print numbers from 1 to row number
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to next row
    }

    return 0;
}




