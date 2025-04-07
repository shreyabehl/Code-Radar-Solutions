#include <stdio.h>

int main() {
    int n, i, j;

    // Step 1: Array ka size lo
    scanf("%d", &n);
    int arr[n];

    // Step 2: Array ke elements lo
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Assume pehle 2 elements ka product max hai
    int maxProduct = arr[0] * arr[1];

    // Step 4: Har pair ka product check karo
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];

            // Step 5: Agar naya product bada hai, toh maxProduct update
            if (product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    // Step 6: Final result print karo
    printf("%d\n", maxProduct);

    return 0;
}
