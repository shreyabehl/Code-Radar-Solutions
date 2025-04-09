

#include <stdio.h>

int main() {
    int i, j = 0, n, k = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++){
        if (arr[i] != arr[i + 1]){
            j++;
        } }
     else (arr[i + 1] = arr[i]){
        k++;
     }
        
    

    printf("%d", arr[i]);
}