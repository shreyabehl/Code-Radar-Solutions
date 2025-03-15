// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a [100];
    int i, count = 0 ;

    scanf("%s", &a);
    
    int n = strlen(a);
    

    for (i = 0; i < strlen(a); i++){
        if (a[i] == ' ' && a[i + 1] != ' ')
        count++;
    
    printf("number of words in string is: ");
    } 
    }