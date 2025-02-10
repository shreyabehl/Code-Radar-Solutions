#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;

    // Taking input from the user
    printf("Enter name, age, and hobby: ");
    scanf("%s %d %s", name, &age, hobby);

    // Printing output in the required format
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}

