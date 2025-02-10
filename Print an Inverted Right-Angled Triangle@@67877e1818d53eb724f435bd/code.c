

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = N; i >= 1; i--) {  // Loop for rows (starting from N to 1)
        for (int j = 1; j <= i; j++) {  // Print stars in each row
            printf("* ");  
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
