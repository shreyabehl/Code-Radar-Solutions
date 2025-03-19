
#include <stdio.h>
int main(){
    char a[100];
    int i, j;
    int k;

    scanf("%s", a);
    scanf("%s", &i);
    scanf("%s", &j);


for (k = 0; str[k] != '\0'; k++) {  
        if (str[k] == i) {  
            str[k] = j;  
        }  
    }
    
    
    printf("%s\n", str);

    return 0;
}

