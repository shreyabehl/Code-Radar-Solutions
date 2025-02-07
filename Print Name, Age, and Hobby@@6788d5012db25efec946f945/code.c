

#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Input lena
    printf("Enter your name: ");
    scanf("%s", name);  // Single word ke liye theek hai

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your hobby: ");
    scanf(" %[^\n]s", hobby);  // Multi-word input ke liye space + %[^\n]s use kiya

    // Output print karna
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
