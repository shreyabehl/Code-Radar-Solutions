
#include <stdio.h>

int main() {
    char str[100], n;
    int i, count = 0;

    
  
    scanf("%[^\n]", str);  

    getchar(); 

  
    
    scanf("%c", &n);


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == n) {
            count++;
        }
    }

    printf(" '%c': %d\n", n, count);
    return 0;
}