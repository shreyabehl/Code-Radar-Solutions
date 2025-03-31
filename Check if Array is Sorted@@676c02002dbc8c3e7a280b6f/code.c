#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  // Array size input

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Array input
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Check what is stored in array
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        printf("Comparing: arr[%d] = %d and arr[%d] = %d\n", i, arr[i], i+1, arr[i+1]);  
        if (arr[i] > arr[i + 1]) {  
            printf("Not Sorted\n");
            return 0;  
        }
    }

    printf("Sorted\n");
    return 0;
}

