// Your code here...

#include <stdio.h>

void checkSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Not Sorted\n");
            return;
        }
    }
    printf("Sorted\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    checkSorted(arr, n);

    return 0;
}
