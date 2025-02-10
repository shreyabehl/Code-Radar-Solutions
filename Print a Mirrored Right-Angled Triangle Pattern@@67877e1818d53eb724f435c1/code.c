


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= N - i; j++) {  // Print spaces
            printf("  ");  
        }
        for (int k = 1; k <= i; k++) {  // Print stars
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
