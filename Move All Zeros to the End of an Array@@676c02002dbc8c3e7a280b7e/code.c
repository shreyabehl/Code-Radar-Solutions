// Your code here...
#include <stdio.h>
int main(){
    int i, n, j = 0;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
         j++;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d", arr[i])
    }

    }


