// Your code here...
#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    int max = arr[0];
    for (i = 0; i < n; i++) {
       if (arr[i] > max)
       { max = arr[i];
       }

    }
    int found = 0;
    int second = max;

    for (i = 0; i < n; i++) {
        if (arr[i] < max) {
            max = arr[i];
        }
    }
    int found = 0;
    int second = max;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            if (found == 0) {
                printf("-1\n");

            }
            else {
                
            }
        }
    }
}




















#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    
    int found = 0;
    int second = max;

    for (i = 0; i < n; i++) {
        if (arr[i] < max) {
            if (found == 0) {
                second = arr[i];
                found = 1;
            } else {
                if (arr[i] > second) {
                    second = arr[i];
                }
            }
        }
    }

    if (found == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}





    
