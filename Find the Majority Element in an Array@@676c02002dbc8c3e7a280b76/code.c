// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Size lo
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Array input lo
    }

    int maxCount = 0, majorityElement = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            majorityElement = arr[i];
            break;  
        }
    }

    printf("%d\n", majorityElement);
    return 0;
}
