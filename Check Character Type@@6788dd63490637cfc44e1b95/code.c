#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}







#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);  

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
   
    else {
        printf("Special Character\n");
    }

    return 0;
}
