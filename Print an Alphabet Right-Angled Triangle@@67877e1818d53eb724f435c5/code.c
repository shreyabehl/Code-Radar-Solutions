



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input

    // Loop for rows
    for (int i = 1; i <= N; i++) {
        // Print alphabets from 'A' up to the current row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);  // Print character with space
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
