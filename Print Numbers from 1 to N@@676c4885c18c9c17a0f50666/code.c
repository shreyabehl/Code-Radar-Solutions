

#include <stdio.h>

int main() {
    int N, sum = 0;

    // Taking input
    scanf("%d", &N);

    // Calculating sum using loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Printing the result with a strict format
    printf("%d\n", sum);

    return 0;
}

