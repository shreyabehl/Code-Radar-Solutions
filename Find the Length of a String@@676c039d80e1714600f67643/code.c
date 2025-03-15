




#include <stdio.h>

int main() {
    char a[100];
    int i, count = 0;

    scanf(" %[^\n]", a);

    for (i = 0; a[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
