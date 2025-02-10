



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Upper pyramid (N rows)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid (N-1 rows)
    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
