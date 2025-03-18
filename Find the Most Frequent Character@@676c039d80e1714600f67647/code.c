#include <stdio.h>
int main(){
    char str[100];
    int i, j, n = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)

    {
    int count = 1;
    for(j = 0; str[i] != '\0'; j++){
        if (str[i] == str[j]) {
            count++;
        }
    }
}

printf("%c\n", j);  

return 0;
    

}