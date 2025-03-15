

#include <stdio.h>

int main() {
    int i = 0;
    char a[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", a); 

    while (a[i] != '\0') { 
        i++;
    }

    printf("Length of the string: %d\n", i);
    
    return 0;
}
