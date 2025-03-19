#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 256 


int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_COUNT] = {0}; 

   
    if (strlen(str1) != strlen(str2))
        return 0;

   
    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0)
            return 0; 
    }

    return 1; 
}

int main() {
    char str1[100], str2[100];

    
    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}





