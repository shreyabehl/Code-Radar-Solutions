




#include <stdio.h>

int main() {
    char str[100];  
    char i, j;     
    int k;         

   
    scanf("%s", str);
    
    
    scanf(" %c", &i);
    
    
    scanf(" %c", &j);
    
    
    for (k = 0; str[k] != '\0'; k++) {  
        if (str[k] == i) {  
            str[k] = j;  
        }  
    }
    
   
    printf("%s\n", str);

    return 0;
}
