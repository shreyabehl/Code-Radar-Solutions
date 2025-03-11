// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i,j,n;
    char a[100];
    scanf("%s", a[100]);
    n = strlen(a);
    for(i = 1, i < n/2, i++){
        if(a[i] == a[n - i - 1]) {
        continue; 
    } else {
        is Palindrome = 0;
        break;
    }
      }
      
      
      if(isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
} 