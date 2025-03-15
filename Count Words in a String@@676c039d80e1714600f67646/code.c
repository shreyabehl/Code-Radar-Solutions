// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a [100];
    int i, count = 0 ;

    

    scanf(" %[^\n]", a);
    
    int n = strlen(a);
    
 if (i == n) {
        printf("0\n");
        return 0;
    }
    for (i = 0; i < n; i++){
        if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\0')
        count++;
    

    
    
    } 
    printf("%d\n", count + 1);  
    return 0;
    }