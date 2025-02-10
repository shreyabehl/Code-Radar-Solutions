

#include <stdio.h>

int main() {
    int N;
    
    // Taking input
    scanf("%d", &N);

    // Printing numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        if (i == N)
            printf("%d", i);  // Avoids extra space at the end
        else
            printf("%d ", i); // Space after number
    }
    
    printf("\n"); // Ensuring proper formatting with a newline
    
    return 0;
}

