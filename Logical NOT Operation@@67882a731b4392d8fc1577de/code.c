

#include <stdio.h>

int main() {
    int num;

    // Taking input
    scanf("%d", &num);

    // Checking condition using logical NOT
    if (!(num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
