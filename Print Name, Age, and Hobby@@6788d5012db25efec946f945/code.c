


#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Input for name (multi-word supported)
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Input for age
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // Consume newline character left by scanf

    // Input for hobby (multi-word supported)
    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    // Output
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);

    return 0;
}
