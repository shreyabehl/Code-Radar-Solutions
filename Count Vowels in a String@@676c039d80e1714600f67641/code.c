// Your code here...
#include <stdio.h>
int main(){
char a[100];
int i, count = 0;

printf("enter a string: ");
scanf("%s", a);

for(i = 0; a[i] != '\0'; i++) if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U') {
            count++; 
        }
    }

    printf("Number of vowels: %d\n", count); 
    return 0;

}


