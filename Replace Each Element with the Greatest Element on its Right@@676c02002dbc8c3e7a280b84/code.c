// Your code here...
#include <stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);
    int arr[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        int max = arr[i + 1];
        for (j = i + 1; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }

    arr[n - 1] = -1; 

   
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
