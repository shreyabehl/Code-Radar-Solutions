


#include <stdio.h>

int main() {
    char a[100];
    int i, count = 0;

    
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);
    return 0;
}


