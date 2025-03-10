#include <stdio.h>
#include <string.h>

int main() {
    int i, j;  
    char a[100];  // 100 characters tak input le sakta hai

    printf("Enter a string: ");
    scanf("%s", a);  // ⚠️ `scanf()` sirf ek word lega (space ke baad ka ignore hoga)

    printf("You entered: %s\n", a);
    return 0;
}


