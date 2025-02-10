




#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Read two space-separated integers

    // Print the greater number
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

    return 0;
}
