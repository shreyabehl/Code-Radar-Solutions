


#include <stdio.h>

int main() {
    char name[50], hobby[100];
    int age;

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name); // Reads the first word as the name

    printf("Enter your age: ");
    scanf("%d", &age); // Reads the integer age

    getchar(); // To consume the newline character left in the buffer

    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin); // Reads the entire hobby line (including spaces)

    // Removing the newline character from hobby
    hobby[strcspn(hobby, "\n")] = 0;

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}


