#include <stdio.h>
#include <string.h>
int main(){
    int i,j;
    char a[100];
    printf("Enter a string: ");

    scanf("%s",a );

    printf("ABC: ");
    return 0;
    


    
}



























#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[] = "Welcome to Code Radar!";
    
    reverseString(str); 
    printf("Reversed String: %s\n", str);
    
    return 0;
}
