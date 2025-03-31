#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  // Array size input
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Array input
    }

    for (i = 0; i < n - 1; i++) {  // Check sorting condition
        if (arr[i] > arr[i + 1]) {  // Agar koi bada mila, directly print and return
            printf("Not Sorted\n");
            return 0;  // Direct exit, aage check ki zaroorat nahi
        }
    }

    printf("Sorted\n");  // Agar loop safely exit ho gaya toh sorted hai
    return 0;
}


