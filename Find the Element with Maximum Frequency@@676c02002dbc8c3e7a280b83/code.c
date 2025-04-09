#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], a[1000001] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        a[arr[i]]++;
    }

    int b = 0;
    int ans = 1000001;

    for (int i = 0; i < 1000001; i++) {
        if (freq[i] > b) {
            b = freq[i];
            ans = i;
        } else {
            if (freq[i] == b) {
                if (i < ans) {
                    ans = i;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}





