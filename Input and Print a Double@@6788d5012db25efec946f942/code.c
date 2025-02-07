

#include <stdio.h>

int main() {
    double num;
    
    // User se double input lena
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    // Output print karna
    printf("You entered: %.4lf\n", num);  // 4 decimal places tak show karega
    
    return 0;
}
