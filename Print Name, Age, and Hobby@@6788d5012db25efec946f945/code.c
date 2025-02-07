#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Input for name (multi-word supported)
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present in name
    name[strcspn(name, "\n")] = 0; 

    // Input for age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Properly clear input buffer
    while (getchar() != '\n'); 

    // Input for hobby (multi-word supported)
    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    // Remove newline character if present in hobby
    hobby[strcspn(hobby, "\n")] = 0;

    // Output
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}

