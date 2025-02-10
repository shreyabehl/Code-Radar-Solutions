


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Add space after numbers
        }
        printf("\n");  // Move to next line
    }

    return 0;
}





