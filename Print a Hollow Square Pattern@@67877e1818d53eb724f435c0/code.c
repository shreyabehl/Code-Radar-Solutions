



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= N; j++) {  // Loop for columns
            // Print '*' at borders, else print space
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
