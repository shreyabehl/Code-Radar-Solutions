



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d", j);
            if (j < i) {
                printf(" ");  // Space between numbers
            }
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
