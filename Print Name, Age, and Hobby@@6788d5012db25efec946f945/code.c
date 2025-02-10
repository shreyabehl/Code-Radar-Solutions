
#include <stdio.h>
#include <string.h>

int main() {
    char name[50], hobby[100];
    int age;

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name); // Reads only the first word as the name

    printf("Enter your age: ");
    scanf("%d", &age); // Reads the integer age

    getchar(); // To clear the newline character left by scanf()

    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin); // Reads the entire hobby line (including spaces)

    // Removing the newline character that fgets() captures
    hobby[strcspn(hobby, "\n")] = '\0';

    // Printing output in the required format
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}

