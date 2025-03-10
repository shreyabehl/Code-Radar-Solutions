// Your code here...

#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    
    // Taking input for array size
    scanf("%d", &n);
    int arr[n];

    // Taking input for array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for K
    scanf("%d", &k);
    
    // Optimize K
    k = k % n;

    // Step 1: Reverse whole array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse first K elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse remaining N-K elements
    reverse(arr, k, n - 1);
    
    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
