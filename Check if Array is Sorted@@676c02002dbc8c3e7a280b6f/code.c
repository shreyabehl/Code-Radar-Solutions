

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    for (i = 0; i < n - 1; i++) {
        printf("Comparing %d and %d\n", arr[i], arr[i + 1]); // Debugging line
        if (arr[i] > arr[i + 1]) {  
            printf("Not Sorted\n");
            return 0;  
        }
    }

    printf("Sorted\n");
    return 0;
}

