// Your code here...
#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = 0;            
    int b = arr[0];       

    for (i = 0; i < n; i++) {
        int count = 0;        

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > a) {
            a = count;
            b = arr[i];
        } else {
            if (count == a) {
                if (arr[i] < b) {
                    b = arr[i];
                }
            }
        }
    }

    printf("%d\n", b);
    return 0;
}









