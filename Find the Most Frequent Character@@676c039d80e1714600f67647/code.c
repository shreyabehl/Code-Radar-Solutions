// Your code here...
#include <stdio.h>
int main(){
    char str[26], n;
    int i, count = 0;
    gets(str);
    scanf("%c", &n);

    for (i = 0; str[i] != '\0'; i++ ){
        if (str[i] == n)
        count++
    }
    printf("%d", count);

}