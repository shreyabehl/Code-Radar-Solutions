


#include <stdio.h>

int main() {
    int num, i;
    
    // Taking input
    scanf("%d", &num);

    // Printing multiplication table
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
