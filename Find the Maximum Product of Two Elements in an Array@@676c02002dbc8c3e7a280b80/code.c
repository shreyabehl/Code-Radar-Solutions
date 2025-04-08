#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0], max2 = arr[0];
    int min1 = arr[0], min2 = arr[0];

    // Find max1 and max2
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else {
            if (arr[i] > max2) {
                if (arr[i] < max1) {
                    max2 = arr[i];
                }
            }
        }
    }

    // Find min1 and min2
    for (i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else {
            if (arr[i] < min2) {
                if (arr[i] > min1) {
                    min2 = arr[i];
                }
            }
        }
    }

    int a = max1 * max2;
    int b = min1 * min2;

    if (a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b);

    return 0;
}


