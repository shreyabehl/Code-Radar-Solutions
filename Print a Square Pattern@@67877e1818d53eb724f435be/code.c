



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    for (int i = 0; i < N; i++) {  // Loop for rows
        for (int j = 0; j < N; j++) {  // Loop for columns
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
