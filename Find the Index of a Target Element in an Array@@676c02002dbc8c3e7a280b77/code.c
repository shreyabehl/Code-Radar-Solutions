











#include <stdio.h>
int main() {
    int i, n, j;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[n]);

    }
   scanf("%d", &j);
   int c = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == j) {
           int c = i; 
            break;
        }
    }

    printf("%d\n", c);
    return 0;
}