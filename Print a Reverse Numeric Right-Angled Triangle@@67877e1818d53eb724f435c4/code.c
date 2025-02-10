





#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop to print the triangle
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
